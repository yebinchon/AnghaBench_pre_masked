
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_4__ {size_t NumTokens; int** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int BUF ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 () ;
 TYPE_1__* FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 (int *,int*,int) ;

BUF *FUNC_6(char *VAR_0)
{
 UINT VAR_1;
 UCHAR VAR_2;
 TOKEN_LIST *VAR_3;
 BUF *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_3 = FUNC_2(VAR_0, ".");
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_1();


 for (VAR_1 = 0;VAR_1 < VAR_3->NumTokens;VAR_1++)
 {
  VAR_2 = (UCHAR)FUNC_4(VAR_3->Token[VAR_1]);
  FUNC_5(VAR_4, &VAR_2, 1);
  FUNC_5(VAR_4, VAR_3->Token[VAR_1], VAR_2);
 }


 VAR_2 = 0;
 FUNC_5(VAR_4, &VAR_2, 1);

 FUNC_3(VAR_4, 0, 0);

 FUNC_0(VAR_3);

 return VAR_4;
}
