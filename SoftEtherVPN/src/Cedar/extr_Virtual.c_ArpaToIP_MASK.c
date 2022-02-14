
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_9__ {scalar_t__* addr; } ;
struct TYPE_8__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ IP ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int) ;

bool FUNC_5(IP *VAR_0, char *VAR_1)
{
 TOKEN_LIST *VAR_2;
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 VAR_2 = FUNC_2(VAR_1, ".");
 if (VAR_2->NumTokens == 6)
 {

  UINT VAR_4;
  FUNC_4(VAR_0, sizeof(IP));
  for (VAR_4 = 0;VAR_4 < 4;VAR_4++)
  {
   VAR_0->addr[VAR_4] = (UCHAR)FUNC_3(VAR_2->Token[3 - VAR_4]);
  }
  VAR_3 = 1;
 }

 FUNC_0(VAR_2);

 if (FUNC_1(VAR_0) == 0)
 {
  VAR_3 = 0;
 }

 return VAR_3;
}
