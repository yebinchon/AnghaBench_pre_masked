
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tmp ;
typedef int ss ;
typedef scalar_t__ UINT ;
typedef void* UCHAR ;
struct TYPE_10__ {scalar_t__ ipv6_scope_id; void** ipv6_addr; } ;
struct TYPE_9__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ IP ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (void**,char*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,int ,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (char*,int,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_2__*) ;

bool FUNC_14(IP *VAR_2, char *VAR_3)
{
 TOKEN_LIST *VAR_4;
 char VAR_5[VAR_1];
 IP VAR_6;
 UINT VAR_7;
 UINT VAR_8 = 0;

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_13(&VAR_6);

 FUNC_8(VAR_5, sizeof(VAR_5), VAR_3);
 FUNC_12(VAR_5);

 if (FUNC_7(VAR_5, "[") && FUNC_2(VAR_5, "]"))
 {

  FUNC_9(VAR_5, sizeof(VAR_5), &VAR_5[1]);

  if (FUNC_10(VAR_5) >= 1)
  {
   VAR_5[FUNC_10(VAR_5) - 1] = 0;
  }
 }


 VAR_7 = FUNC_6(VAR_5, "%", 0, 0);
 if (VAR_7 != VAR_0)
 {
  char VAR_9[VAR_1];

  FUNC_8(VAR_9, sizeof(VAR_9), &VAR_5[VAR_7 + 1]);

  VAR_5[VAR_7] = 0;

  FUNC_12(VAR_5);

  FUNC_12(VAR_9);

  VAR_8 = FUNC_11(VAR_9);
 }


 VAR_4 = FUNC_5(VAR_5, ":");
 if (VAR_4->NumTokens >= 3 && VAR_4->NumTokens <= 8)
 {
  UINT VAR_10, VAR_11;
  bool VAR_12 = 1;
  UINT VAR_13 = 0;

  VAR_11 = 0;

  for (VAR_10 = 0;VAR_10 < VAR_4->NumTokens;VAR_10++)
  {
   char *VAR_14 = VAR_4->Token[VAR_10];

   if (VAR_10 != 0 && VAR_10 != (VAR_4->NumTokens - 1) && FUNC_10(VAR_14) == 0)
   {
    VAR_11++;
    if (VAR_11 == 1)
    {
     VAR_13 += 2 * (8 - VAR_4->NumTokens + 1);
    }
    else
    {
     VAR_12 = 0;
     break;
    }
   }
   else
   {
    UCHAR VAR_15[2];

    if (FUNC_0(VAR_14) == 0)
    {
     VAR_12 = 0;
     break;
    }

    FUNC_4(VAR_15, VAR_14);

    VAR_6.ipv6_addr[VAR_13++] = VAR_15[0];
    VAR_6.ipv6_addr[VAR_13++] = VAR_15[1];
   }
  }

  if (VAR_11 != 0 && VAR_11 != 1)
  {
   VAR_12 = 0;
  }
  else if (VAR_11 == 0 && VAR_4->NumTokens != 8)
  {
   VAR_12 = 0;
  }

  if (VAR_12 == 0)
  {
   FUNC_3(VAR_4);
   return 0;
  }
 }
 else
 {
  FUNC_3(VAR_4);
  return 0;
 }

 FUNC_3(VAR_4);

 FUNC_1(VAR_2, &VAR_6, sizeof(IP));

 VAR_2->ipv6_scope_id = VAR_8;

 return 1;
}
