
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_17__ {int flags; int x; int y; int left; int right; int top; int bottom; } ;
typedef TYPE_12__ menucommon_s ;
struct TYPE_26__ {int flags; } ;
struct TYPE_27__ {TYPE_8__ generic; } ;
struct TYPE_24__ {int flags; } ;
struct TYPE_25__ {TYPE_6__ generic; } ;
struct TYPE_22__ {int flags; } ;
struct TYPE_23__ {TYPE_4__ generic; } ;
struct TYPE_21__ {int nitems; size_t cursor; scalar_t__* items; } ;
struct TYPE_19__ {int flags; } ;
struct TYPE_20__ {TYPE_1__ generic; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_16__ {TYPE_10__ generic; } ;
struct TYPE_18__ {size_t section; TYPE_11__ misc; TYPE_9__ weapons; TYPE_7__ looking; TYPE_5__ movement; TYPE_3__ menu; TYPE_2__ name; scalar_t__ waitingforkey; } ;



 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_12__*** VAR_10 ;
 TYPE_13__ VAR_11 ;

__attribute__((used)) static void FUNC_0( void ) {
 int VAR_12;
 int VAR_13;
 int VAR_14;
 menucommon_s **VAR_15;
 menucommon_s *VAR_16;


 for( VAR_12 = 0; VAR_12 < VAR_0; VAR_12++ ) {
  VAR_15 = VAR_10[VAR_12];

  for( VAR_13 = 0; (VAR_16 = VAR_15[VAR_13]) ; VAR_13++ ) {
   VAR_16->flags |= (VAR_2|VAR_5);
  }
 }

 VAR_15 = VAR_10[VAR_11.section];



 for( VAR_13 = 0; (VAR_16 = VAR_15[VAR_13]) ; VAR_13++ ) {
  VAR_16->flags &= ~(VAR_1|VAR_2|VAR_5);
 }


 VAR_14 = ( VAR_7 - VAR_13 * VAR_8 ) / 2;

 for( VAR_13 = 0; (VAR_16 = VAR_15[VAR_13]) ; VAR_13++, VAR_14 += VAR_8 ) {
  VAR_16->x = 320;
  VAR_16->y = VAR_14;
  VAR_16->left = 320 - 19*VAR_9;
  VAR_16->right = 320 + 21*VAR_9;
  VAR_16->top = VAR_14;
  VAR_16->bottom = VAR_14 + VAR_8;
 }

 if( VAR_11.waitingforkey ) {

  for( VAR_12 = 0; VAR_12 < VAR_11.menu.nitems; VAR_12++ ) {
   ((menucommon_s*)(VAR_11.menu.items[VAR_12]))->flags |= VAR_1;
  }


  ((menucommon_s*)(VAR_11.menu.items[VAR_11.menu.cursor]))->flags &= ~VAR_1;


  VAR_11.name.generic.flags &= ~VAR_1;

  return;
 }


 for( VAR_12 = 0; VAR_12 < VAR_11.menu.nitems; VAR_12++ ) {
  ((menucommon_s*)(VAR_11.menu.items[VAR_12]))->flags &= ~VAR_1;
 }


 VAR_11.looking.generic.flags &= ~(VAR_1|VAR_3|VAR_4);
 VAR_11.movement.generic.flags &= ~(VAR_1|VAR_3|VAR_4);
 VAR_11.weapons.generic.flags &= ~(VAR_1|VAR_3|VAR_4);
 VAR_11.misc.generic.flags &= ~(VAR_1|VAR_3|VAR_4);

 VAR_11.looking.generic.flags |= VAR_6;
 VAR_11.movement.generic.flags |= VAR_6;
 VAR_11.weapons.generic.flags |= VAR_6;
 VAR_11.misc.generic.flags |= VAR_6;


 switch( VAR_11.section ) {
 case 129:
  VAR_11.movement.generic.flags &= ~VAR_6;
  VAR_11.movement.generic.flags |= (VAR_3|VAR_4);
  break;

 case 131:
  VAR_11.looking.generic.flags &= ~VAR_6;
  VAR_11.looking.generic.flags |= (VAR_3|VAR_4);
  break;

 case 128:
  VAR_11.weapons.generic.flags &= ~VAR_6;
  VAR_11.weapons.generic.flags |= (VAR_3|VAR_4);
  break;

 case 130:
  VAR_11.misc.generic.flags &= ~VAR_6;
  VAR_11.misc.generic.flags |= (VAR_3|VAR_4);
  break;
 }
}
