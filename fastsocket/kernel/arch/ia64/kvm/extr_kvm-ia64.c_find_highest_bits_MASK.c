
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int *VAR_0)
{
 u32 VAR_1, VAR_2;
 int VAR_3;


 for (VAR_3 = 7; VAR_3 >= 0 ; VAR_3--) {
  VAR_1 = VAR_0[VAR_3];
  if (VAR_1) {
   VAR_2 = FUNC_0(VAR_1);
   return VAR_3 * 32 + VAR_2 - 1;
  }
 }

 return -1;
}
