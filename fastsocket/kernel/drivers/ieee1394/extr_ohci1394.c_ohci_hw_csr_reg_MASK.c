
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int dummy; } ;
struct hpsb_host {struct ti_ohci* hostdata; } ;
typedef int quadlet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ti_ohci*,int ) ;
 int FUNC_2 (struct ti_ohci*,int ,int) ;

__attribute__((used)) static quadlet_t FUNC_3(struct hpsb_host *VAR_4, int VAR_5,
                                 quadlet_t VAR_6, quadlet_t VAR_7)
{
 struct ti_ohci *VAR_8 = VAR_4->hostdata;
 int VAR_9;

 FUNC_2(VAR_8, VAR_2, VAR_6);
 FUNC_2(VAR_8, VAR_0, VAR_7);
 FUNC_2(VAR_8, VAR_1, VAR_5 & 0x3);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (FUNC_1(VAR_8, VAR_1) & 0x80000000)
   break;

  FUNC_0(1);
 }

 return FUNC_1(VAR_8, VAR_2);
}
