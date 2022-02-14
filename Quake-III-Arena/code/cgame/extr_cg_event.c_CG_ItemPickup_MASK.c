
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ giType; scalar_t__ giTag; } ;
struct TYPE_5__ {int itemPickup; scalar_t__ weaponSelect; int time; int weaponSelectTime; int itemPickupBlendTime; int itemPickupTime; } ;
struct TYPE_4__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_0( int VAR_5 ) {
 VAR_3.itemPickup = VAR_5;
 VAR_3.itemPickupTime = VAR_3.time;
 VAR_3.itemPickupBlendTime = VAR_3.time;

 if ( VAR_2[VAR_5].giType == VAR_0 ) {

  if ( VAR_4.integer && VAR_2[VAR_5].giTag != VAR_1 ) {
   VAR_3.weaponSelectTime = VAR_3.time;
   VAR_3.weaponSelect = VAR_2[VAR_5].giTag;
  }
 }

}
