
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int mmr ;






 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (unsigned long,int) ;

__attribute__((used)) static int FUNC_7(char *VAR_2, char *VAR_3, int VAR_4)
{
 unsigned long VAR_5 = (unsigned long)VAR_3;
 int VAR_6;

 VAR_6 = FUNC_6(VAR_5, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5 >= VAR_1) {
  if (VAR_4 == 2 && VAR_5 % 2 == 0) {
   u16 VAR_7 = FUNC_0(VAR_3);
   FUNC_4(VAR_2, &VAR_7, sizeof(VAR_7));
   return 0;
  } else if (VAR_4 == 4 && VAR_5 % 4 == 0) {
   u32 VAR_8 = FUNC_1(VAR_3);
   FUNC_4(VAR_2, &VAR_8, sizeof(VAR_8));
   return 0;
  }
 } else {
  switch (VAR_6) {
   case 131:
   case 130:
    return FUNC_5(VAR_2, VAR_3, VAR_4);

   case 129:
    if (FUNC_2(VAR_2, VAR_3, VAR_4))
     return 0;
    break;
   case 128:
    if (FUNC_3(VAR_2, VAR_3, VAR_4))
     return 0;
    break;
  }
 }

 return -VAR_0;
}
