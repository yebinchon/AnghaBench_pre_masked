
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Bits; int Size; int AllList; int * CompareProc; int * GetHashProc; void* Entries; int Ref; int Lock; } ;
typedef int LIST ;
typedef TYPE_1__ HASH_LIST ;
typedef int GET_HASH ;
typedef int COMPARE ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 void* FUNC_5 (int) ;

HASH_LIST *FUNC_6(GET_HASH *VAR_0, COMPARE *VAR_1, UINT VAR_2, bool VAR_3)
{
 HASH_LIST *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_2 == 0)
 {
  VAR_2 = 16;
 }

 VAR_2 = FUNC_0(VAR_2, 31);

 VAR_4 = FUNC_5(sizeof(HASH_LIST));

 VAR_4->Bits = VAR_2;
 VAR_4->Size = FUNC_4(2, VAR_2);

 VAR_4->Lock = FUNC_2();
 VAR_4->Ref = FUNC_3();

 VAR_4->Entries = FUNC_5(sizeof(LIST *) * VAR_4->Size);

 VAR_4->GetHashProc = VAR_0;
 VAR_4->CompareProc = VAR_1;

 if (VAR_3)
 {
  VAR_4->AllList = FUNC_1(((void*)0));
 }

 return VAR_4;
}
