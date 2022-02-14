
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


struct TYPE_12__ {scalar_t__ connected; int netname; } ;
struct TYPE_11__ {int sessionTeam; } ;
struct TYPE_10__ {size_t clientNum; } ;
struct TYPE_13__ {TYPE_4__ pers; TYPE_3__ sess; TYPE_2__ ps; } ;
typedef TYPE_5__ gclient_t ;
struct TYPE_9__ {int svFlags; } ;
struct TYPE_16__ {TYPE_1__ r; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {TYPE_5__* clients; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 TYPE_8__* VAR_3 ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;

int FUNC_4( int VAR_8 ) {
 int VAR_9;
 char VAR_10[36];
 gclient_t *VAR_11;

 for ( VAR_9=0 ; VAR_9< VAR_4.integer ; VAR_9++ ) {
  VAR_11 = VAR_5.clients + VAR_9;
  if ( VAR_11->pers.connected != VAR_0 ) {
   continue;
  }
  if ( !(VAR_3[VAR_11->ps.clientNum].r.svFlags & VAR_2) ) {
   continue;
  }
  if ( VAR_8 >= 0 && VAR_11->sess.sessionTeam != VAR_8 ) {
   continue;
  }
  FUNC_1(VAR_10, VAR_11->pers.netname);
  FUNC_0(VAR_10);
  FUNC_2( VAR_1, FUNC_3("kick %s\n", VAR_10) );
  return VAR_7;
 }
 return VAR_6;
}
