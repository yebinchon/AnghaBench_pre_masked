
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *FUNC_0( void *VAR_0, const void *VAR_1, size_t VAR_2 ) {
 int VAR_3;

 if ( VAR_0 > VAR_1 ) {
  for ( VAR_3 = VAR_2-1 ; VAR_3 >= 0 ; VAR_3-- ) {
   ((char *)VAR_0)[VAR_3] = ((char *)VAR_1)[VAR_3];
  }
 } else {
  for ( VAR_3 = 0 ; VAR_3 < VAR_2 ; VAR_3++ ) {
   ((char *)VAR_0)[VAR_3] = ((char *)VAR_1)[VAR_3];
  }
 }
 return VAR_0;
}
