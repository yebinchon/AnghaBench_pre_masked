
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {void* Value; void* Name; } ;
struct TYPE_6__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ STRMAP_ENTRY ;
typedef int LIST ;


 int FUNC_0 (int *,TYPE_2__*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 () ;
 TYPE_1__* FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,size_t,char*) ;

__attribute__((used)) static LIST *FUNC_8(char *VAR_0,char *VAR_1, UINT VAR_2)
{
 char *VAR_3, VAR_4;

 if(VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 if(FUNC_6(VAR_0,"http://"))
 {

  VAR_0 += 7;


  while(*VAR_0 != '/' && *VAR_0 != '\0')
  {
   VAR_0 ++;
  }


  if(*VAR_0 == '\0')
  {
   return ((void*)0);
  }

  VAR_0++;
 }





 VAR_3 = VAR_0;
 while(*VAR_0 != '?' && *VAR_0 != '\0')
 {
  VAR_0 ++;
 }
 VAR_4 = *VAR_0;
 *VAR_0 = '\0';
 FUNC_7(VAR_1, VAR_2, VAR_3);
 *VAR_0 = VAR_4;


 if(*VAR_0 == '?')
 {
  LIST *VAR_5 = FUNC_4();
  UINT VAR_6;
  TOKEN_LIST *VAR_7;
  VAR_0++;
  VAR_7 =FUNC_5(VAR_0,"&");
  for(VAR_6=0;VAR_6<VAR_7->NumTokens;VAR_6++)
  {
   char *VAR_8 = VAR_7->Token[VAR_6];
   char *VAR_9 = VAR_8;
   STRMAP_ENTRY *VAR_10 = (STRMAP_ENTRY*)FUNC_3(sizeof(STRMAP_ENTRY));

   while(*VAR_9 != '=' && *VAR_9 != '\0')
   {
    VAR_9++;
   }
   if(*VAR_9 == '=')
   {
    *VAR_9 = '\0';
    VAR_9++;
   }
   VAR_10->Name = FUNC_1(VAR_8);
   VAR_10->Value = FUNC_1(VAR_9);
   FUNC_0(VAR_5, VAR_10);

  }
  FUNC_2(VAR_7);
  return VAR_5;
 }
 return ((void*)0);
}
