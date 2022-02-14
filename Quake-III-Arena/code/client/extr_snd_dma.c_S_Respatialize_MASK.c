
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const vec3_t ;
struct TYPE_4__ {int entnum; int rightvol; int leftvol; int master_vol; int const origin; scalar_t__ fixed_origin; int thesfx; } ;
typedef TYPE_1__ channel_t ;
struct TYPE_5__ {int const origin; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int const,int ,int *,int *) ;
 int FUNC_2 (int const,int const) ;
 int const* VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void FUNC_3( int VAR_8, const vec3_t VAR_9, vec3_t VAR_10[3], int VAR_11 ) {
 int VAR_12;
 channel_t *VAR_13;
 vec3_t VAR_14;

 if ( !VAR_7 || VAR_6 ) {
  return;
 }

 VAR_2 = VAR_8;
 FUNC_2(VAR_9, VAR_3);
 FUNC_2(VAR_10[0], VAR_1[0]);
 FUNC_2(VAR_10[1], VAR_1[1]);
 FUNC_2(VAR_10[2], VAR_1[2]);


 VAR_13 = VAR_5;
 for ( VAR_12 = 0 ; VAR_12 < VAR_0 ; VAR_12++, VAR_13++ ) {
  if ( !VAR_13->thesfx ) {
   continue;
  }

  if (VAR_13->entnum == VAR_2) {
   VAR_13->leftvol = VAR_13->master_vol;
   VAR_13->rightvol = VAR_13->master_vol;
  } else {
   if (VAR_13->fixed_origin) {
    FUNC_2( VAR_13->origin, VAR_14 );
   } else {
    FUNC_2( VAR_4[ VAR_13->entnum ].origin, VAR_14 );
   }

   FUNC_1 (VAR_14, VAR_13->master_vol, &VAR_13->leftvol, &VAR_13->rightvol);
  }
 }


 FUNC_0 ();
}
