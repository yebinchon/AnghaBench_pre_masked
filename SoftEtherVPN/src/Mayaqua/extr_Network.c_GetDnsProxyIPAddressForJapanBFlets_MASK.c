
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {char* Value; } ;
typedef int LIST ;
typedef int IP ;
typedef TYPE_1__ INI_ENTRY ;
typedef int BUF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__,int*) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char*) ;

bool FUNC_9(IP *VAR_1, UINT VAR_2, bool *VAR_3)
{
 BUF *VAR_4;
 LIST *VAR_5;
 bool VAR_6 = 0;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }
 if (VAR_2 == 0)
 {
  VAR_2 = VAR_0;
 }

 VAR_4 = FUNC_6(VAR_2, VAR_3);

 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_7(VAR_4);

 if (VAR_5 != ((void*)0))
 {
  INI_ENTRY *VAR_7 = FUNC_3(VAR_5, "DDnsServerForBFlets");

  if (VAR_7 != ((void*)0))
  {
   char *VAR_8 = VAR_7->Value;

   if (FUNC_4(VAR_8) == 0)
   {
    IP VAR_9;

    if (FUNC_8(&VAR_9, VAR_8))
    {
     if (FUNC_5(&VAR_9) == 0)
     {
      FUNC_0(VAR_1, &VAR_9, sizeof(IP));
      VAR_6 = 1;
     }
    }
   }
  }
 }

 FUNC_2(VAR_5);
 FUNC_1(VAR_4);

 return VAR_6;
}
