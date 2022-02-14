
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfc_multi {int wdcount; int wdbyte; } ;


 int FUNC_0 (struct hfc_multi*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(struct hfc_multi *VAR_6)
{
 VAR_6->wdcount++;

 if (VAR_6->wdcount > 10) {
  VAR_6->wdcount = 0;
  VAR_6->wdbyte = VAR_6->wdbyte == VAR_4 ?
      VAR_5 : VAR_4;


  FUNC_0(VAR_6, VAR_0, VAR_2 | VAR_3);
  FUNC_0(VAR_6, VAR_1, VAR_6->wdbyte);
 }
}
