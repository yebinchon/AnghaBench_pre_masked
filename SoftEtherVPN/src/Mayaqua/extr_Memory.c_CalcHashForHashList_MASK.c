
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int (* GetHashProc ) (void*) ;int Size; } ;
typedef TYPE_1__ HASH_LIST ;


 int FUNC_0 (void*) ;

UINT FUNC_1(HASH_LIST *VAR_0, void *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = VAR_0->GetHashProc(VAR_1);

 return (VAR_2 % VAR_0->Size);
}
