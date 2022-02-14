
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int Version; } ;
struct TYPE_9__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int SOCK ;
typedef TYPE_2__ HTTP_HEADER ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*) ;
 TYPE_2__* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;
 TYPE_1__* FUNC_7 (char*,char*) ;
 char* FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;

HTTP_HEADER *FUNC_11(SOCK *VAR_1)
{
 TOKEN_LIST *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 HTTP_HEADER *VAR_4 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_3 = FUNC_8(VAR_1, VAR_0);
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_2 = FUNC_7(VAR_3, " ");

 FUNC_2(FUNC_6(VAR_3));

 if (VAR_2->NumTokens < 3)
 {
  FUNC_3(VAR_2);
  return ((void*)0);
 }


 VAR_4 = FUNC_5(VAR_2->Token[0], VAR_2->Token[1], VAR_2->Token[2]);
 FUNC_3(VAR_2);

 if (FUNC_9(VAR_4->Version, "HTTP/0.9") == 0)
 {

  return VAR_4;
 }


 while (1)
 {
  VAR_3 = FUNC_8(VAR_1, VAR_0);
  FUNC_10(VAR_3);
  if (FUNC_4(VAR_3))
  {

   FUNC_2(FUNC_6(VAR_3));
   break;
  }

  if (FUNC_0(VAR_4, VAR_3) == 0)
  {
   FUNC_2(FUNC_6(VAR_3));
   FUNC_1(VAR_4);
   VAR_4 = ((void*)0);
   break;
  }

  FUNC_2(FUNC_6(VAR_3));
 }

 return VAR_4;
}
