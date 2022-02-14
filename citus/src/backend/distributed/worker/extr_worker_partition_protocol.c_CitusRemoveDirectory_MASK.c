
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
struct TYPE_6__ {char const* data; } ;
typedef TYPE_1__* StringInfo ;
typedef int DIR ;


 int * FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,struct stat) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 struct dirent* FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char const*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char const*,struct stat*) ;
 scalar_t__ FUNC_13 (char const*,char*,int ) ;
 int FUNC_14 (char*) ;

void
FUNC_15(StringInfo VAR_4)
{
 struct stat VAR_5;
 int VAR_6 = 0;

 int VAR_7 = FUNC_12(VAR_4->data, &VAR_5);
 if (VAR_7 < 0)
 {
  if (VAR_3 == VAR_0)
  {
   return;
  }
  else
  {
   FUNC_7(VAR_1, (FUNC_8(),
       FUNC_9("could not stat file \"%s\": %m", VAR_4->data)));
  }
 }






 if (FUNC_5(VAR_5.st_mode) && !FUNC_1(VAR_4->data, VAR_5))
 {
  const char *VAR_8 = VAR_4->data;
  struct dirent *VAR_9 = ((void*)0);

  DIR *VAR_10 = FUNC_0(VAR_8);
  if (VAR_10 == ((void*)0))
  {
   FUNC_7(VAR_1, (FUNC_8(),
       FUNC_9("could not open directory \"%s\": %m",
           VAR_8)));
  }

  VAR_9 = FUNC_4(VAR_10, VAR_8);
  for (; VAR_9 != ((void*)0); VAR_9 = FUNC_4(VAR_10, VAR_8))
  {
   const char *VAR_11 = VAR_9->d_name;
   StringInfo VAR_12 = ((void*)0);


   if (FUNC_13(VAR_11, ".", VAR_2) == 0 ||
    FUNC_13(VAR_11, "..", VAR_2) == 0)
   {
    continue;
   }

   VAR_12 = FUNC_10();
   FUNC_6(VAR_12, "%s/%s", VAR_8, VAR_11);

   FUNC_15(VAR_12);

   FUNC_3(VAR_12);
  }

  FUNC_2(VAR_10);
 }


 if (FUNC_5(VAR_5.st_mode))
 {
  VAR_6 = FUNC_11(VAR_4->data);
 }
 else
 {
  VAR_6 = FUNC_14(VAR_4->data);
 }

 if (VAR_6 != 0)
 {
  FUNC_7(VAR_1, (FUNC_8(),
      FUNC_9("could not remove file \"%s\": %m", VAR_4->data)));
 }
}
