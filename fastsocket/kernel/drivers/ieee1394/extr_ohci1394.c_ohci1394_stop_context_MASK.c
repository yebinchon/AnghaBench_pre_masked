
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ti_ohci*,int) ;
 int FUNC_3 (struct ti_ohci*,int,int) ;
 int FUNC_4 (int) ;

int FUNC_5(struct ti_ohci *VAR_1, int VAR_2, char *VAR_3)
{
 int VAR_4=0;


 FUNC_3(VAR_1, VAR_2, 0x8000);


 while (FUNC_2(VAR_1, VAR_2) & 0x400) {
  VAR_4++;
  if (VAR_4>5000) {
   FUNC_0(VAR_0,
         "Runaway loop while stopping context: %s...", VAR_3 ? VAR_3 : "");
   return 1;
  }

  FUNC_1();
  FUNC_4(10);
 }
 if (VAR_3) FUNC_0(VAR_0, "%s: dma prg stopped", VAR_3);
 return 0;
}
