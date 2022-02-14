
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (char*) ;
 void* VAR_2 ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 void* FUNC_5 (int,int *,int ) ;
 int VAR_3 ;
 int FUNC_6 (int,int,int) ;

void FUNC_7(void)
{
 int VAR_4 = 1;
 key_t VAR_5;
 void *VAR_6;


 unsigned int VAR_7 = FUNC_3();
 FUNC_4("pprof: measured diff is %u\n", FUNC_3() - VAR_7);


 VAR_5 = FUNC_0(".", 0x02ABC32E);
 if (VAR_5 == -1)
 {
  FUNC_2("pprof: ftok failed");
  return;
 }


 VAR_3 = FUNC_6(VAR_5, sizeof(*VAR_2),
  VAR_0 | VAR_1 | 0644);
 if (VAR_3 == -1)

 {
  VAR_3 = FUNC_6(VAR_5, sizeof(*VAR_2),
    0644);
  if (VAR_3 == -1)
  {
   FUNC_2("pprof: shmget failed");
   return;
  }
  VAR_4 = 0;
 }

 VAR_6 = FUNC_5(VAR_3, ((void*)0), 0);
 if (VAR_6 == (void *)-1)
 {
  FUNC_2("pprof: shmat failed");
  return;
 }

 VAR_2 = VAR_6;
 if (VAR_4) {
  FUNC_1(VAR_2, 0, sizeof(*VAR_2));
  FUNC_4("pprof: pp_counters cleared.\n");
 }
}
