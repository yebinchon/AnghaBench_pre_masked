
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*,int) ;
 size_t FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static char *
FUNC_2(int VAR_2, int VAR_3, char *VAR_4, size_t VAR_5)
{
 const char *VAR_6 = ((void*)0);

 if (!(VAR_1 & VAR_0)) {

  if (VAR_2 == 0)
   VAR_6 = VAR_3 ? "wheel" : "root";
  else if (VAR_2 == -2)
   VAR_6 = "nobody";
 }
 if (!VAR_6) {

  FUNC_0(VAR_4, VAR_5-1, "%d", VAR_2);
  VAR_4[VAR_5-1] = '\0';
 } else {
  size_t VAR_7 = FUNC_1(VAR_4, VAR_6, VAR_5);
  if (VAR_7 >= VAR_5)
   return (((void*)0));
 }

 return (VAR_4);
}
