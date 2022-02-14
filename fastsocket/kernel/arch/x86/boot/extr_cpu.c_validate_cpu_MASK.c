
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int**) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_1 ;

int FUNC_5(void)
{
 u32 *VAR_2;
 int VAR_3, VAR_4;
 const unsigned char *VAR_5;

 FUNC_0(&VAR_3, &VAR_4, &VAR_2);

 if (VAR_3 < VAR_4) {
  FUNC_2("This kernel requires an %s CPU, ",
         FUNC_1(VAR_4));
  FUNC_2("but only detected an %s CPU.\n",
         FUNC_1(VAR_3));
  return -1;
 }

 if (VAR_2) {
  int VAR_6, VAR_7;
  FUNC_4("This kernel requires the following features "
       "not present on the CPU:\n");

  VAR_5 = (const unsigned char *)VAR_1;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   u32 VAR_8 = VAR_2[VAR_6];

   for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
    if (VAR_5[0] < VAR_6 ||
        (VAR_5[0] == VAR_6 && VAR_5[1] < VAR_7)) {

     VAR_5 += 2;
     while (*VAR_5++)
      ;
    }
    if (VAR_8 & 1) {
     if (VAR_5[0] == VAR_6 &&
         VAR_5[1] == VAR_7 &&
         VAR_5[2])
      FUNC_2("%s ", VAR_5+2);
     else
      FUNC_2("%d:%d ", VAR_6, VAR_7);
    }
    VAR_8 >>= 1;
   }
  }
  FUNC_3('\n');
  return -1;
 } else {
  return 0;
 }
}
