
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 char* FUNC_1 (char**) ;
 int FUNC_2 (char*,char*,int*,int*) ;

__attribute__((used)) static int FUNC_3(char *VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5;

 while ((VAR_3 = FUNC_1(&VAR_2))) {
  if (FUNC_2(VAR_3, "0x%x 0x%x", &VAR_4, &VAR_5) == 2) {

  } else if (FUNC_2(VAR_3, "0x%x %u", &VAR_4, &VAR_5) == 2) {

  } else
   return -VAR_0;
  if (VAR_4 >= 0 && VAR_4 < 256 && VAR_5 >= 0 && VAR_5 < 256) {
   if (!FUNC_0(VAR_4, VAR_5))
    return -VAR_1;
  } else
   return -VAR_0;
 }

 return 0;
}
