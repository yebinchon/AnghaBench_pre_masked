
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {void* UnicodeValue; void* Value; void* Key; } ;
typedef int LIST ;
typedef TYPE_1__ INI_ENTRY ;
typedef int BYTE ;
typedef int BUF ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int,char*,int,int *) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (void*,int,int *,int ) ;
 void* FUNC_13 (int) ;

LIST *FUNC_14(BUF *VAR_0)
{
 LIST *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_7(((void*)0));

 FUNC_8(VAR_0, 0, 0);

 while (1)
 {
  char *VAR_2 = FUNC_2(VAR_0);

  if (VAR_2 == ((void*)0))
  {
   break;
  }

  FUNC_11(VAR_2);

  if (FUNC_6(VAR_2) == 0)
  {
   if (FUNC_9(VAR_2, "#") == 0 &&
    FUNC_9(VAR_2, "//") == 0 &&
    FUNC_9(VAR_2, ";") == 0)
   {
    char *VAR_3, *VAR_4;
    UINT VAR_5 = FUNC_10(VAR_2) + 1;

    VAR_3 = FUNC_13(VAR_5);
    VAR_4 = FUNC_13(VAR_5);

    if (FUNC_5(VAR_2, VAR_3, VAR_5, VAR_4, VAR_5, ((void*)0)))
    {
     UINT VAR_6;
     INI_ENTRY *VAR_7 = FUNC_13(sizeof(INI_ENTRY));
     VAR_7->Key = FUNC_3(VAR_3);
     VAR_7->Value = FUNC_3(VAR_4);

     VAR_6 = FUNC_1((BYTE *)VAR_4, FUNC_10(VAR_4));
     VAR_7->UnicodeValue = FUNC_13(VAR_6);
     FUNC_12(VAR_7->UnicodeValue, VAR_6, (BYTE *)VAR_4, FUNC_10(VAR_4));

     FUNC_0(VAR_1, VAR_7);
    }

    FUNC_4(VAR_3);
    FUNC_4(VAR_4);
   }
  }

  FUNC_4(VAR_2);
 }

 return VAR_1;
}
