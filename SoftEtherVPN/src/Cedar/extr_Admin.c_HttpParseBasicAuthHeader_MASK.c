
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int value ;
typedef int key ;
typedef int UINT ;
struct TYPE_3__ {char* Data; } ;
typedef TYPE_1__ HTTP_VALUE ;
typedef int HTTP_HEADER ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int,char*,int,char*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int) ;

bool FUNC_9(HTTP_HEADER *VAR_1, char *VAR_2, UINT VAR_3, char *VAR_4, UINT VAR_5)
{
 bool VAR_6 = 0;
 HTTP_VALUE *VAR_7;
 HTTP_VALUE *VAR_8;
 HTTP_VALUE *VAR_9;
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_7 = FUNC_2(VAR_1, "Authorization");
 VAR_8 = FUNC_2(VAR_1, "X-VPNADMIN-HUBNAME");
 VAR_9 = FUNC_2(VAR_1, "X-VPNADMIN-PASSWORD");

 if (VAR_9 != ((void*)0))
 {
  if (VAR_8 == ((void*)0))
  {
   FUNC_6(VAR_2, VAR_3, "");
  }
  else
  {
   FUNC_6(VAR_2, VAR_3, VAR_8->Data);
  }

  FUNC_6(VAR_4, VAR_5, VAR_9->Data);

  VAR_6 = 1;
 }

 if (VAR_6 == 0 && VAR_7 != ((void*)0))
 {
  char VAR_10[32], VAR_11[VAR_0];

  if (FUNC_3(VAR_7->Data, VAR_10, sizeof(VAR_10), VAR_11, sizeof(VAR_11), " \t"))
  {
   if (FUNC_5(VAR_10, "Basic") == 0 && FUNC_4(VAR_11) == 0)
   {
    UINT VAR_12 = FUNC_7(VAR_11) * 2 + 256;
    char *VAR_13 = FUNC_8(VAR_12);

    FUNC_0(VAR_13, VAR_11);

    if (FUNC_4(VAR_13) == 0)
    {
     if (VAR_13[0] == ':')
     {

      FUNC_6(VAR_2, VAR_3, "");
      FUNC_6(VAR_4, VAR_5, VAR_13 + 1);
      VAR_6 = 1;
     }
     else
     {
      if (FUNC_3(VAR_13, VAR_2, VAR_3, VAR_4, VAR_5, ":"))
      {
       VAR_6 = 1;
      }
     }
    }

    FUNC_1(VAR_13);
   }
  }
 }

 return VAR_6;
}
