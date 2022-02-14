
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef scalar_t__ File ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,struct stat*) ;

File
FUNC_7(const char *VAR_2, int VAR_3, int VAR_4)
{
 File VAR_5 = -1;
 int VAR_6 = -1;
 struct stat VAR_7;

 VAR_6 = FUNC_6(VAR_2, &VAR_7);
 if (VAR_6 >= 0)
 {
  if (FUNC_1(VAR_7.st_mode))
  {
   FUNC_2(VAR_1, (FUNC_3(VAR_0),
       FUNC_5("\"%s\" is a directory", VAR_2)));
  }
 }

 VAR_5 = FUNC_0((char *) VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
 {
  FUNC_2(VAR_1, (FUNC_4(),
      FUNC_5("could not open file \"%s\": %m", VAR_2)));
 }

 return VAR_5;
}
