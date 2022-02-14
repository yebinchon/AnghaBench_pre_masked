
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int *VAR_1)
{
 u32 VAR_2, VAR_3;
 int VAR_4;


 for (VAR_4 = 7; VAR_4 >= 0 ; VAR_4--) {
  VAR_2 = VAR_1[VAR_4];
  if (VAR_2) {
   VAR_3 = FUNC_0(VAR_2);
   return VAR_4 * 32 + VAR_3 - 1;
  }
 }
 return VAR_0;
}
