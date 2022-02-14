
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int hash ;
typedef int UCHAR ;
struct TYPE_6__ {int Size; scalar_t__ Buf; } ;
typedef int FOLDER ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int) ;
 int * VAR_1 ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (int *,int) ;

BUF *FUNC_5(FOLDER *VAR_2)
{
 BUF *VAR_3;
 UCHAR VAR_4[VAR_0];

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1();


 FUNC_3(VAR_3, VAR_1, 8);


 FUNC_4(VAR_4, sizeof(VAR_4));
 FUNC_3(VAR_3, VAR_4, sizeof(VAR_4));


 FUNC_0(VAR_3, VAR_2);


 FUNC_2(((UCHAR *)VAR_3->Buf) + 8, ((UCHAR *)VAR_3->Buf) + 8 + VAR_0, VAR_3->Size - 8 - VAR_0);

 return VAR_3;
}
