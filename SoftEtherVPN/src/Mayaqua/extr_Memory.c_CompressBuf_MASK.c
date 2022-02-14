
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_7__ {int Size; int Buf; } ;
typedef TYPE_1__ BUF ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int ) ;

BUF *FUNC_7(BUF *VAR_0)
{
 UINT VAR_1;
 UCHAR *VAR_2;
 BUF *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0(VAR_0->Size);
 VAR_2 = FUNC_3(VAR_1);

 VAR_1 = FUNC_1(VAR_2, VAR_1, VAR_0->Buf, VAR_0->Size);

 if (VAR_1 == 0)
 {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 VAR_3 = FUNC_4();
 FUNC_6(VAR_3, VAR_0->Size);
 FUNC_5(VAR_3, VAR_2, VAR_1);

 FUNC_2(VAR_2);

 return VAR_3;
}
