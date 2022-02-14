
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (size_t*,char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,int) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_1)
{
 char VAR_2[80 + 12];
 char *VAR_3 = VAR_2;
 char *VAR_4[2];
 char *VAR_5;
 size_t VAR_6 = VAR_0;
 int VAR_7, VAR_8;

 if (FUNC_6(VAR_1, sizeof(VAR_2)) >= sizeof(VAR_2))
  FUNC_2("parameter too long");

 FUNC_4(VAR_3, VAR_1);
 FUNC_1(VAR_3);

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
  VAR_4[VAR_7] = FUNC_7(&VAR_3, ",");

 if (VAR_3)
  FUNC_2("too many arguments");

 if (!VAR_4[0])
  FUNC_2("no argument");

 VAR_5 = VAR_4[0];
 if (FUNC_5(VAR_5) + 1 > 80)
  FUNC_2("device name too long");

 if (VAR_4[1]) {
  VAR_8 = FUNC_3(&VAR_6, VAR_4[1]);
  if (VAR_8) {
   FUNC_2("illegal erase size");
  }
 }

 FUNC_0(VAR_5, VAR_6);

 return 0;
}
