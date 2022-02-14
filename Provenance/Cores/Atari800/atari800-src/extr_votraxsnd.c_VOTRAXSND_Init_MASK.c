
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Votrax_interface {int num; int BusyCallback; } ;
typedef int SWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*,int) ;
 void* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (void*) ;
 int FUNC_3 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_5 () ;

void FUNC_6(int VAR_18, int VAR_19, int VAR_20)
{
 static struct Votrax_interface VAR_21;
 int VAR_22;
 VAR_10 = VAR_20;
 VAR_11 = VAR_18;
 VAR_12 = VAR_19;
 if (!FUNC_5()) return;
 if (VAR_12 != 1 && VAR_12 != 2) {
  FUNC_0("VOTRAXSND_Init: cannot handle num_pokeys=%d", VAR_12);






  return;
 }
 VAR_21.num = 1;
 VAR_21.BusyCallback = VAR_7;
 FUNC_3();
 FUNC_2((void *)&VAR_21);
 VAR_14 = VAR_11/(VAR_1 == VAR_0 ? 50 : 60);
 VAR_13 = (double)VAR_9/(double)VAR_11;



 VAR_22 = (int)(VAR_8*VAR_13 + 10);

 FUNC_4(VAR_15);
 VAR_15 = (SWORD *)FUNC_1(VAR_22*sizeof(SWORD));
 FUNC_4(VAR_16);
 VAR_16 = (SWORD *)FUNC_1(VAR_8*sizeof(SWORD));

 VAR_6 = VAR_2;
 VAR_17 = 0;
}
