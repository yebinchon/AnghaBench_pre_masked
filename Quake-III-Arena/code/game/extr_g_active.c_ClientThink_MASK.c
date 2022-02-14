
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int svFlags; } ;
struct TYPE_12__ {TYPE_3__ r; TYPE_2__* client; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {int time; } ;
struct TYPE_9__ {int cmd; } ;
struct TYPE_10__ {int lastCmdTime; TYPE_1__ pers; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (int,int *) ;

void FUNC_2( int VAR_4 ) {
 gentity_t *VAR_5;

 VAR_5 = VAR_1 + VAR_4;
 FUNC_1( VAR_4, &VAR_5->client->pers.cmd );



 VAR_5->client->lastCmdTime = VAR_3.time;

 if ( !(VAR_5->r.svFlags & VAR_0) && !VAR_2.integer ) {
  FUNC_0( VAR_5 );
 }
}
