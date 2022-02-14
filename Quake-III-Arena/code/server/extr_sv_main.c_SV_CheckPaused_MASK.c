
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_1__ remoteAddress; } ;
struct TYPE_10__ {scalar_t__ state; TYPE_2__ netchan; } ;
typedef TYPE_3__ client_t ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {TYPE_3__* clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_1 ;
 TYPE_7__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 TYPE_5__* VAR_6 ;
 TYPE_4__ VAR_7 ;

qboolean FUNC_1( void ) {
 int VAR_8;
 client_t *VAR_9;
 int VAR_10;

 if ( !VAR_2->integer ) {
  return VAR_3;
 }


 VAR_8 = 0;
 for (VAR_10=0,VAR_9=VAR_7.clients ; VAR_10 < VAR_5->integer ; VAR_10++,VAR_9++) {
  if ( VAR_9->state >= VAR_0 && VAR_9->netchan.remoteAddress.type != VAR_1 ) {
   VAR_8++;
  }
 }

 if ( VAR_8 > 1 ) {

  if (VAR_6->integer)
   FUNC_0("sv_paused", "0");
  return VAR_3;
 }

 if (!VAR_6->integer)
  FUNC_0("sv_paused", "1");
 return VAR_4;
}
