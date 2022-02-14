
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int func_name ;
struct TYPE_4__ {int * (* Dispatch ) (TYPE_1__*,char*,int *) ;} ;
typedef TYPE_1__ RPC ;
typedef int PACK ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int * FUNC_1 (TYPE_1__*,char*,int *) ;

PACK *FUNC_2(RPC *VAR_1, PACK *VAR_2)
{
 char VAR_3[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_0(VAR_2, "function_name", VAR_3, sizeof(VAR_3)) == 0)
 {
  return ((void*)0);
 }

 return VAR_1->Dispatch(VAR_1, VAR_3, VAR_2);
}
