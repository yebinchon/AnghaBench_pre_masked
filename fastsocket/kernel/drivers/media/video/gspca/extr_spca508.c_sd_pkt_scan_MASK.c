
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_4,
   u8 *VAR_5,
   int VAR_6)
{
 switch (VAR_5[0]) {
 case 0:
  FUNC_0(VAR_4, VAR_2, ((void*)0), 0);
  VAR_5 += VAR_3;
  VAR_6 -= VAR_3;
  FUNC_0(VAR_4, VAR_0, VAR_5, VAR_6);
  break;
 case 0xff:
  break;
 default:
  VAR_5 += 1;
  VAR_6 -= 1;
  FUNC_0(VAR_4, VAR_1, VAR_5, VAR_6);
  break;
 }
}
