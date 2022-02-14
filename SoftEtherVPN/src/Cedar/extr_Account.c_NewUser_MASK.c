
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int Traffic; int * Policy; void* UpdatedTime; void* CreatedTime; void* AuthData; scalar_t__ AuthType; int * Group; int * GroupName; void* Note; void* RealName; int Name; int ref; int lock; } ;
typedef TYPE_1__ USER ;
typedef scalar_t__ UINT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void* FUNC_5 () ;
 TYPE_1__* FUNC_6 (int) ;

USER *FUNC_7(char *VAR_1, wchar_t *VAR_2, wchar_t *VAR_3, UINT VAR_4, void *VAR_5)
{
 USER *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_4 != VAR_0 && VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_6(sizeof(USER));
 VAR_6->lock = FUNC_2();
 VAR_6->ref = FUNC_3();
 VAR_6->Name = FUNC_0(VAR_1);
 VAR_6->RealName = FUNC_1(VAR_2);
 VAR_6->Note = FUNC_1(VAR_3);
 VAR_6->GroupName = ((void*)0);
 VAR_6->Group = ((void*)0);
 VAR_6->AuthType = VAR_4;
 VAR_6->AuthData = VAR_5;
 VAR_6->CreatedTime = FUNC_5();
 VAR_6->UpdatedTime = FUNC_5();

 VAR_6->Policy = ((void*)0);
 VAR_6->Traffic = FUNC_4();

 return VAR_6;
}
