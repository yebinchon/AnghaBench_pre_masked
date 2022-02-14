
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {scalar_t__ checksum; } ;
typedef TYPE_1__ pack_t ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_0( pack_t *VAR_4 ) {
 int VAR_5;

 if ( VAR_0 ) {
  for ( VAR_5 = 0 ; VAR_5 < VAR_0 ; VAR_5++ ) {



   if ( VAR_4->checksum == VAR_1[VAR_5] ) {
    return VAR_3;
   }
  }
  return VAR_2;
 }
 return VAR_3;
}
