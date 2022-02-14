
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
typedef int hubname ;
typedef int SERVER ;
typedef int RPC_ENUM_LOG_FILE ;
typedef int PACK ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,char*,int) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,int) ;

PACK *FUNC_6(SERVER *VAR_1, PACK *VAR_2)
{
 RPC_ENUM_LOG_FILE VAR_3;
 PACK *VAR_4;
 char VAR_5[VAR_0 + 1];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_3(VAR_2, "HubName", VAR_5, sizeof(VAR_5));

 FUNC_5(&VAR_3, sizeof(VAR_3));

 FUNC_4(VAR_1, VAR_5, &VAR_3);

 VAR_4 = FUNC_1();

 FUNC_2(VAR_4, &VAR_3);
 FUNC_0(&VAR_3);

 return VAR_4;
}
