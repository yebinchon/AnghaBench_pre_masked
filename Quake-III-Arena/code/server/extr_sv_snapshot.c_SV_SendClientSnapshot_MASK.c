
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ overflowed; int allowoverflow; } ;
typedef TYPE_3__ msg_t ;
typedef int msg_buf ;
struct TYPE_21__ {int name; int lastClientCommand; TYPE_2__* gentity; } ;
typedef TYPE_4__ client_t ;
typedef int byte ;
struct TYPE_18__ {int svFlags; } ;
struct TYPE_19__ {TYPE_1__ r; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 int VAR_2 ;

void FUNC_9( client_t *VAR_3 ) {
 byte VAR_4[VAR_0];
 msg_t VAR_5;


 FUNC_4( VAR_3 );



 if ( VAR_3->gentity && VAR_3->gentity->r.svFlags & VAR_1 ) {
  return;
 }

 FUNC_2 (&VAR_5, VAR_4, sizeof(VAR_4));
 VAR_5.allowoverflow = VAR_2;



 FUNC_3( &VAR_5, VAR_3->lastClientCommand );


 FUNC_6( VAR_3, &VAR_5 );



 FUNC_8( VAR_3, &VAR_5 );


 FUNC_7( VAR_3, &VAR_5 );


 if ( VAR_5.overflowed ) {
  FUNC_0 ("WARNING: msg overflowed for %s\n", VAR_3->name);
  FUNC_1 (&VAR_5);
 }

 FUNC_5( &VAR_5, VAR_3 );
}
