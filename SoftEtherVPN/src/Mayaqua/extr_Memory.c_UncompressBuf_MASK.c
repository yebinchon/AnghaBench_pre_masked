
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_8__ {scalar_t__ Size; scalar_t__ Buf; } ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *,int ,int *,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;

BUF *FUNC_7(BUF *VAR_0)
{
 UINT VAR_1, VAR_2;
 UCHAR *VAR_3;
 BUF *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_4(VAR_0, 0, 0);
 VAR_1 = FUNC_3(VAR_0);

 VAR_3 = FUNC_1(VAR_1);

 VAR_2 = FUNC_5(VAR_3, VAR_1, ((UCHAR *)VAR_0->Buf) + sizeof(UINT), VAR_0->Size - sizeof(UINT));

 VAR_4 = FUNC_2();
 FUNC_6(VAR_4, VAR_3, VAR_2);
 FUNC_0(VAR_3);

 return VAR_4;
}
