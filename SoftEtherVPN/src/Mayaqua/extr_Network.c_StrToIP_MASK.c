
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_9__ {scalar_t__* addr; } ;
struct TYPE_8__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ IP ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*,int) ;

bool FUNC_8(IP *VAR_0, char *VAR_1)
{
 TOKEN_LIST *VAR_2;
 char *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_4(VAR_0, VAR_1))
 {
  return 1;
 }

 FUNC_7(VAR_0, sizeof(IP));

 VAR_3 = FUNC_0(VAR_1);
 FUNC_6(VAR_3);
 VAR_2 = FUNC_3(VAR_3, ".");
 FUNC_1(VAR_3);

 if (VAR_2->NumTokens != 4)
 {
  FUNC_2(VAR_2);
  return 0;
 }
 for (VAR_4 = 0;VAR_4 < 4;VAR_4++)
 {
  char *VAR_5 = VAR_2->Token[VAR_4];
  if (VAR_5[0] < '0' || VAR_5[0] > '9' ||
   (FUNC_5(VAR_5) >= 256))
  {
   FUNC_2(VAR_2);
   return 0;
  }
 }
 FUNC_7(VAR_0, sizeof(IP));
 for (VAR_4 = 0;VAR_4 < 4;VAR_4++)
 {
  VAR_0->addr[VAR_4] = (UCHAR)FUNC_5(VAR_2->Token[VAR_4]);
 }

 FUNC_2(VAR_2);

 return 1;
}
