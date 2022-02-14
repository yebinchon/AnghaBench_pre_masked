
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_12__ {int Size; scalar_t__ Buf; } ;
struct TYPE_11__ {int Code; int Id; int* Data; int DataSize; int OptionList; } ;
struct TYPE_10__ {int DataSize; int Type; int* Data; } ;
typedef TYPE_1__ PPP_OPTION ;
typedef TYPE_2__ PPP_LCP ;
typedef TYPE_3__ BUF ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (TYPE_3__*,int*,int) ;

BUF *FUNC_6(PPP_LCP *VAR_0)
{
 BUF *VAR_1;
 UCHAR VAR_2 = 0;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_2();


 FUNC_5(VAR_1, &VAR_0->Code, 1);


 FUNC_5(VAR_1, &VAR_0->Id, 1);


 VAR_2 = 0;
 FUNC_5(VAR_1, &VAR_2, 1);
 FUNC_5(VAR_1, &VAR_2, 1);

 if (VAR_0->Data == ((void*)0))
 {

  for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_0->OptionList);VAR_3++)
  {
   PPP_OPTION *VAR_4 = FUNC_0(VAR_0->OptionList, VAR_3);
   UCHAR VAR_5 = VAR_4->DataSize + 2;

   FUNC_5(VAR_1, &VAR_4->Type, 1);
   FUNC_5(VAR_1, &VAR_5, 1);

   FUNC_5(VAR_1, VAR_4->Data, VAR_4->DataSize);
  }
 }
 else
 {

  FUNC_5(VAR_1, VAR_0->Data, VAR_0->DataSize);
 }

 FUNC_3(VAR_1, 0, 0);


 FUNC_4(((UCHAR *)VAR_1->Buf) + 2, VAR_1->Size);

 return VAR_1;
}
