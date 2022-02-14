
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_counter_config {int event; scalar_t__ enabled; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ,unsigned int) ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,unsigned int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct op_counter_config *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;


 FUNC_5(FUNC_3() | VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  if (VAR_5[VAR_6].enabled) {
   FUNC_0(VAR_6, VAR_4[VAR_6]);
   FUNC_1(VAR_6, VAR_5[VAR_6].event);
  } else {
   FUNC_0(VAR_6, 0);
  }
 }

 VAR_7 = FUNC_4(VAR_2);






 VAR_7 &= ~VAR_0;
 FUNC_6(VAR_2, VAR_7);

 FUNC_2("start on cpu %d, mmcr0 %x\n", FUNC_7(), VAR_7);
 return 0;
}
