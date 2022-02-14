
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_1(u64 VAR_1, unsigned int VAR_2, u64 VAR_3[])
{
 int VAR_4, VAR_5, VAR_6;

 VAR_3[0] = VAR_1;
 VAR_6 = 1;


 if (VAR_1 == 0x8003 || VAR_1 == 0x0224) {
  VAR_3[1] = VAR_1 ^ (0x8003 ^ 0x0224);
  return 2;
 }


 if (VAR_1 == 0x0c13 || VAR_1 == 0x0c23) {
  VAR_3[1] = VAR_1 ^ (0x0c13 ^ 0x0c23);
  return 2;
 }


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); ++VAR_4) {
  if (VAR_1 == VAR_0[VAR_4]) {
   for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); ++VAR_5)
    if (VAR_5 != VAR_4)
     VAR_3[VAR_6++] = VAR_0[VAR_5];
   break;
  }
 }

 return VAR_6;
}
