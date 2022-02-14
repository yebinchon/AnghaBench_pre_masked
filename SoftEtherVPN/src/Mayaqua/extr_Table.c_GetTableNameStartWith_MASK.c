
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef size_t UINT ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {size_t NumTokens; void** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ TABLE ;
typedef int LIST ;


 scalar_t__ FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *) ;
 int VAR_0 ;
 int * FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*) ;
 size_t FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int * VAR_1 ;
 void* FUNC_11 (int) ;

TOKEN_LIST *FUNC_12(char *VAR_2)
{
 UINT VAR_3;
 UINT VAR_4;
 LIST *VAR_5;
 TOKEN_LIST *VAR_6;
 char VAR_7[VAR_0];

 if (VAR_2 == ((void*)0))
 {
  return FUNC_6();
 }

 FUNC_8(VAR_7, sizeof(VAR_7), VAR_2);
 FUNC_10(VAR_7);

 VAR_4 = FUNC_9(VAR_7);

 VAR_5 = FUNC_5(((void*)0));

 for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_1);VAR_3++)
 {
  TABLE *VAR_8 = FUNC_3(VAR_1, VAR_3);
  UINT VAR_9 = FUNC_9(VAR_8->name);

  if (VAR_9 >= VAR_4)
  {
   if (FUNC_0(VAR_8->name, VAR_7, VAR_4) == 0)
   {
    FUNC_2(VAR_5, FUNC_1(VAR_8->name));
   }
  }
 }

 VAR_6 = FUNC_11(sizeof(TOKEN_LIST));
 VAR_6->NumTokens = FUNC_4(VAR_5);
 VAR_6->Token = FUNC_11(sizeof(char *) * VAR_6->NumTokens);

 for (VAR_3 = 0;VAR_3 < VAR_6->NumTokens;VAR_3++)
 {
  VAR_6->Token[VAR_3] = FUNC_3(VAR_5, VAR_3);
 }

 FUNC_7(VAR_5);

 return VAR_6;
}
