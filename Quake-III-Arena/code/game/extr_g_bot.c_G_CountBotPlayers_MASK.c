
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int sessionTeam; } ;
struct TYPE_12__ {size_t clientNum; } ;
struct TYPE_10__ {scalar_t__ connected; } ;
struct TYPE_14__ {TYPE_4__ sess; TYPE_3__ ps; TYPE_1__ pers; } ;
typedef TYPE_5__ gclient_t ;
struct TYPE_18__ {scalar_t__ spawnTime; } ;
struct TYPE_11__ {int svFlags; } ;
struct TYPE_17__ {TYPE_2__ r; } ;
struct TYPE_16__ {int integer; } ;
struct TYPE_15__ {scalar_t__ time; TYPE_5__* clients; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_9__* VAR_3 ;
 TYPE_8__* VAR_4 ;
 TYPE_7__ VAR_5 ;
 TYPE_6__ VAR_6 ;

int FUNC_0( int VAR_7 ) {
 int VAR_8, VAR_9, VAR_10;
 gclient_t *VAR_11;

 VAR_10 = 0;
 for ( VAR_8=0 ; VAR_8< VAR_5.integer ; VAR_8++ ) {
  VAR_11 = VAR_6.clients + VAR_8;
  if ( VAR_11->pers.connected != VAR_1 ) {
   continue;
  }
  if ( !(VAR_4[VAR_11->ps.clientNum].r.svFlags & VAR_2) ) {
   continue;
  }
  if ( VAR_7 >= 0 && VAR_11->sess.sessionTeam != VAR_7 ) {
   continue;
  }
  VAR_10++;
 }
 for( VAR_9 = 0; VAR_9 < VAR_0; VAR_9++ ) {
  if( !VAR_3[VAR_9].spawnTime ) {
   continue;
  }
  if ( VAR_3[VAR_9].spawnTime > VAR_6.time ) {
   continue;
  }
  VAR_10++;
 }
 return VAR_10;
}
