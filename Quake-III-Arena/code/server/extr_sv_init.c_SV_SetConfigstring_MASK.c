
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; TYPE_2__* gentity; } ;
typedef TYPE_3__ client_t ;
struct TYPE_13__ {scalar_t__ state; scalar_t__ restarting; int * configstrings; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {TYPE_3__* clients; } ;
struct TYPE_8__ {int svFlags; } ;
struct TYPE_9__ {TYPE_1__ r; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char const*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*) ;
 TYPE_6__ VAR_7 ;
 TYPE_5__* VAR_8 ;
 TYPE_4__ VAR_9 ;

void FUNC_7 (int VAR_10, const char *VAR_11) {
 int VAR_12, VAR_13;
 int VAR_14 = VAR_4 - 24;
 client_t *VAR_15;

 if ( VAR_10 < 0 || VAR_10 >= VAR_3 ) {
  FUNC_0 (VAR_2, "SV_SetConfigstring: bad index %i\n", VAR_10);
 }

 if ( !VAR_11 ) {
  VAR_11 = "";
 }


 if ( !FUNC_5( VAR_11, VAR_7.configstrings[ VAR_10 ] ) ) {
  return;
 }


 FUNC_4( VAR_7.configstrings[VAR_10] );
 VAR_7.configstrings[VAR_10] = FUNC_1( VAR_11 );



 if ( VAR_7.state == VAR_5 || VAR_7.restarting ) {


  for (VAR_13 = 0, VAR_15 = VAR_9.clients; VAR_13 < VAR_8->integer ; VAR_13++, VAR_15++) {
   if ( VAR_15->state < VAR_0 ) {
    continue;
   }

   if ( VAR_10 == VAR_1 && VAR_15->gentity && (VAR_15->gentity->r.svFlags & VAR_6) ) {
    continue;
   }

   VAR_12 = FUNC_6( VAR_11 );
   if( VAR_12 >= VAR_14 ) {
    int VAR_16 = 0;
    int VAR_17 = VAR_12;
    char *VAR_18;
    char VAR_19[VAR_4];

    while (VAR_17 > 0 ) {
     if ( VAR_16 == 0 ) {
      VAR_18 = "bcs0";
     }
     else if( VAR_17 < VAR_14 ) {
      VAR_18 = "bcs2";
     }
     else {
      VAR_18 = "bcs1";
     }
     FUNC_2( VAR_19, &VAR_11[VAR_16], VAR_14 );

     FUNC_3( VAR_15, "%s %i \"%s\"\n", VAR_18, VAR_10, VAR_19 );

     VAR_16 += (VAR_14 - 1);
     VAR_17 -= (VAR_14 - 1);
    }
   } else {

    FUNC_3( VAR_15, "cs %i \"%s\"\n", VAR_10, VAR_11 );
   }
  }
 }
}
