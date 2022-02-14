
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gp2x_soc_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;

int FUNC_6(void)
{
 gp2x_soc_t VAR_5;
 FILE *VAR_6;

 VAR_5 = FUNC_5();
 switch (VAR_5)
 {
 case 129:
  FUNC_2();
  VAR_3 = 200;
  VAR_4 = VAR_1;
  break;
 case 128:
  FUNC_3();
  VAR_3 = 533;
  VAR_6 = FUNC_1("/dev/accel", "rb");
  if (VAR_6) {
   FUNC_4("detected Caanoo\n");
   VAR_4 = VAR_0;
   FUNC_0(VAR_6);
  }
  else {
   FUNC_4("detected Wiz\n");
   VAR_4 = VAR_2;
  }
  break;
 default:
  FUNC_4("could not recognize SoC.\n");
  break;
 }

 return 0;
}
