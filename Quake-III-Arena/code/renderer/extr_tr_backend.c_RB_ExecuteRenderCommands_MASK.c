
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int msec; } ;
struct TYPE_12__ {int smpFrame; TYPE_2__ pc; } ;
struct TYPE_7__ {void const* cmds; } ;
struct TYPE_11__ {TYPE_1__ commands; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {int (* Milliseconds ) () ;} ;


 void* FUNC_0 (void const*) ;
 void* FUNC_1 (void const*) ;
 void* FUNC_2 (void const*) ;
 void* FUNC_3 (void const*) ;
 void* FUNC_4 (void const*) ;
 void* FUNC_5 (void const*) ;







 TYPE_6__ VAR_0 ;
 TYPE_5__** VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8( const void *VAR_4 ) {
 int VAR_5, VAR_6;

 VAR_5 = VAR_3.Milliseconds ();

 if ( !VAR_2->integer || VAR_4 == VAR_1[0]->commands.cmds ) {
  VAR_0.smpFrame = 0;
 } else {
  VAR_0.smpFrame = 1;
 }

 while ( 1 ) {
  switch ( *(const int *)VAR_4 ) {
  case 130:
   VAR_4 = FUNC_2( VAR_4 );
   break;
  case 129:
   VAR_4 = FUNC_3( VAR_4 );
   break;
  case 133:
   VAR_4 = FUNC_1( VAR_4 );
   break;
  case 134:
   VAR_4 = FUNC_0( VAR_4 );
   break;
  case 128:
   VAR_4 = FUNC_4( VAR_4 );
   break;
  case 131:
   VAR_4 = FUNC_5( VAR_4 );
   break;

  case 132:
  default:

   VAR_6 = VAR_3.Milliseconds ();
   VAR_0.pc.msec = VAR_6 - VAR_5;
   return;
  }
 }

}
