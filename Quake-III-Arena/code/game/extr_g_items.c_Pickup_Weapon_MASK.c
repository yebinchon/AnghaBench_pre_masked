
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int count; int flags; TYPE_3__* item; TYPE_2__* client; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {int integer; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_13__ {int quantity; size_t giTag; } ;
struct TYPE_11__ {int* ammo; int* stats; } ;
struct TYPE_12__ {TYPE_1__ ps; } ;


 int FUNC_0 (TYPE_4__*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 TYPE_5__ VAR_6 ;

int FUNC_1 (gentity_t *VAR_7, gentity_t *VAR_8) {
 int VAR_9;

 if ( VAR_7->count < 0 ) {
  VAR_9 = 0;
 } else {
  if ( VAR_7->count ) {
   VAR_9 = VAR_7->count;
  } else {
   VAR_9 = VAR_7->item->quantity;
  }


  if ( ! (VAR_7->flags & VAR_0) && VAR_4.integer != VAR_1 ) {


   if ( VAR_8->client->ps.ammo[ VAR_7->item->giTag ] < VAR_9 ) {
    VAR_9 = VAR_9 - VAR_8->client->ps.ammo[ VAR_7->item->giTag ];
   } else {
    VAR_9 = 1;
   }
  }
 }


 VAR_8->client->ps.stats[VAR_2] |= ( 1 << VAR_7->item->giTag );

 FUNC_0( VAR_8, VAR_7->item->giTag, VAR_9 );

 if (VAR_7->item->giTag == VAR_3)
  VAR_8->client->ps.ammo[VAR_7->item->giTag] = -1;


 if ( VAR_4.integer == VAR_1 ) {
  return VAR_6.integer;
 }

 return VAR_5.integer;
}
