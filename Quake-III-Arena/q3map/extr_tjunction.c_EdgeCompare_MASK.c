
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float length; } ;
typedef TYPE_1__ originalEdge_t ;



int FUNC_0( const void *VAR_0, const void *VAR_1 ) {
 float VAR_2, VAR_3;

 VAR_2 = ((originalEdge_t *)VAR_0)->length;
 VAR_3 = ((originalEdge_t *)VAR_1)->length;

 if ( VAR_2 < VAR_3 ) {
  return -1;
 }
 if ( VAR_3 > VAR_2 ) {
  return 1;
 }
 return 0;
}
