
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SERVER ;
typedef int RPC_READ_LOG_FILE ;
typedef int PACK ;
typedef int FARM_MEMBER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int *,int) ;

bool FUNC_7(SERVER *VAR_0, FARM_MEMBER *VAR_1, RPC_READ_LOG_FILE *VAR_2)
{
 PACK *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_3();
 FUNC_4(VAR_3, VAR_2);
 FUNC_1(VAR_2);
 FUNC_6(VAR_2, sizeof(RPC_READ_LOG_FILE));

 VAR_3 = FUNC_5(VAR_1, VAR_3, "readlogfile");

 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_2, VAR_3);
 FUNC_0(VAR_3);

 return 1;
}
