
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3, u16 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = FUNC_0(VAR_1) - 1; VAR_5 >= 0; VAR_5--) {
  if (VAR_2 <= VAR_1[VAR_5] && VAR_3 >= VAR_1[VAR_5]) {
   *VAR_4 = VAR_5;
   return 0;
  }
 }
 return -VAR_0;
}
