
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cmds; scalar_t__ used; } ;
typedef TYPE_1__ renderCommandList_t ;
typedef scalar_t__ qboolean ;
struct TYPE_16__ {TYPE_1__ commands; } ;
struct TYPE_15__ {scalar_t__ smpActive; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_11__ {size_t smpFrame; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_7__** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 TYPE_5__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 TYPE_2__ VAR_10 ;

void FUNC_7( qboolean VAR_11 ) {
 renderCommandList_t *VAR_12;

 VAR_12 = &VAR_2[VAR_10.smpFrame]->commands;
 FUNC_4(VAR_12);

 *(int *)(VAR_12->cmds + VAR_12->used) = VAR_1;


 VAR_12->used = 0;

 if ( VAR_5.smpActive ) {

  if ( VAR_8 ) {
   VAR_4++;
   if ( VAR_6->integer ) {
    VAR_9.Printf( VAR_0, "R" );
   }
  } else {
   VAR_3++;
   if ( VAR_6->integer ) {
    VAR_9.Printf( VAR_0, "." );
   }
  }


  FUNC_0();
 }



 if ( VAR_11 ) {
  FUNC_3();
 }


 if ( !VAR_7->integer ) {

  if ( !VAR_5.smpActive ) {
   FUNC_2( VAR_12->cmds );
  } else {
   FUNC_1( VAR_12 );
  }
 }
}
