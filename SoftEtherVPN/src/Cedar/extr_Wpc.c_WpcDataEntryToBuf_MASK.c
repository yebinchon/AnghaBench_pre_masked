
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Size; int Data; } ;
typedef TYPE_1__ WPC_ENTRY ;
typedef scalar_t__ UINT ;
typedef int BUF ;


 scalar_t__ FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,void*,scalar_t__) ;

BUF *FUNC_6(WPC_ENTRY *VAR_0)
{
 void *VAR_1;
 UINT VAR_2;
 UINT VAR_3;
 BUF *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = VAR_0->Size + 4096;
 VAR_1 = FUNC_2(VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_0->Data, VAR_0->Size);

 VAR_4 = FUNC_3();
 FUNC_5(VAR_4, VAR_1, VAR_3);
 FUNC_4(VAR_4, 0, 0);

 FUNC_1(VAR_1);

 return VAR_4;
}
