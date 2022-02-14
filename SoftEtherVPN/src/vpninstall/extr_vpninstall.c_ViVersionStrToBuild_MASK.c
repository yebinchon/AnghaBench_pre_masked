
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;

UINT FUNC_3(char *VAR_0)
{
 TOKEN_LIST *VAR_1;
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_1(VAR_0, ".");
 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = 0;

 if (VAR_1->NumTokens == 3)
 {
  VAR_2 = FUNC_2(VAR_1->Token[2]);
 }

 FUNC_0(VAR_1);

 return VAR_2;
}
