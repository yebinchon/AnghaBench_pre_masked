
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ powerup_t ;
struct TYPE_4__ {scalar_t__ giType; scalar_t__ giTag; } ;
typedef TYPE_1__ gitem_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

gitem_t *FUNC_0( powerup_t VAR_5 ) {
 int VAR_6;

 for ( VAR_6 = 0 ; VAR_6 < VAR_4 ; VAR_6++ ) {
  if ( (VAR_3[VAR_6].giType == VAR_1 ||
     VAR_3[VAR_6].giType == VAR_2 ||
     VAR_3[VAR_6].giType == VAR_0) &&
   VAR_3[VAR_6].giTag == VAR_5 ) {
   return &VAR_3[VAR_6];
  }
 }

 return ((void*)0);
}
