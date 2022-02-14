
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 char** VAR_2 ;

int FUNC_2(char *VAR_3, char **VAR_4)
{
 char *VAR_5, *VAR_6 = ((void*)0);
 int VAR_7, VAR_8 = 0;
 int VAR_9 = FUNC_0(VAR_3), VAR_10;

 if (VAR_9 && VAR_1 && FUNC_1(VAR_3, "offb", 4))
  VAR_8 = 1;

 if (VAR_9 && !VAR_8) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   if (VAR_2[VAR_10] == ((void*)0))
    continue;
   VAR_7 = FUNC_0(VAR_2[VAR_10]);
   if (!VAR_7)
    continue;
   VAR_5 = VAR_2[VAR_10];
   if (!FUNC_1(VAR_3, VAR_5, VAR_9) &&
       VAR_5[VAR_9] == ':')
    VAR_6 = VAR_5 + VAR_9 + 1;
  }
 }
 if (VAR_6 && !FUNC_1(VAR_6, "off", 3))
  VAR_8 = 1;

 if (VAR_4)
  *VAR_4 = VAR_6;

 return VAR_8;
}
