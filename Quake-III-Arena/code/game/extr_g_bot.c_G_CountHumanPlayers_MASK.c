
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int sessionTeam; } ;
struct TYPE_9__ {size_t clientNum; } ;
struct TYPE_11__ {scalar_t__ connected; } ;
struct TYPE_13__ {TYPE_2__ sess; TYPE_1__ ps; TYPE_3__ pers; } ;
typedef TYPE_5__ gclient_t ;
struct TYPE_12__ {int svFlags; } ;
struct TYPE_16__ {TYPE_4__ r; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {TYPE_5__* clients; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_8__* VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;

int FUNC_0( int VAR_5 ) {
 int VAR_6, VAR_7;
 gclient_t *VAR_8;

 VAR_7 = 0;
 for ( VAR_6=0 ; VAR_6< VAR_3.integer ; VAR_6++ ) {
  VAR_8 = VAR_4.clients + VAR_6;
  if ( VAR_8->pers.connected != VAR_0 ) {
   continue;
  }
  if ( VAR_2[VAR_8->ps.clientNum].r.svFlags & VAR_1 ) {
   continue;
  }
  if ( VAR_5 >= 0 && VAR_8->sess.sessionTeam != VAR_5 ) {
   continue;
  }
  VAR_7++;
 }
 return VAR_7;
}
