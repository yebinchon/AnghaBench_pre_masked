
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32* VAR_1, int* VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 int VAR_7 = 0, VAR_8 = 0;


 if( (0 > *VAR_2) || (((void*)0) == VAR_1) ) {
  return -VAR_0;
 }


 for( VAR_5 = *VAR_2; VAR_5 > 0; VAR_5--) {
  for( VAR_3 = 0, VAR_4 = 1; VAR_4 < VAR_5; VAR_3++, VAR_4++) {
   if( VAR_1[VAR_3] > VAR_1[VAR_4] ) {
    VAR_6 = VAR_1[VAR_3];
    VAR_1[VAR_3] = VAR_1[VAR_4];
    VAR_1[VAR_4] = VAR_6;
   }
  }
 }


 for( VAR_7 = 0, VAR_8 = 1; VAR_8 < *VAR_2; VAR_8++) {
  if( VAR_1[VAR_7] != VAR_1[VAR_8])
   VAR_1[++VAR_7] = VAR_1[VAR_8];
 }

 *VAR_2 = VAR_7 + 1;

 return 0;
}
