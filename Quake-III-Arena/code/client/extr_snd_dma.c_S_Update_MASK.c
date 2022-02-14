
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* thesfx; scalar_t__ rightvol; scalar_t__ leftvol; } ;
typedef TYPE_2__ channel_t ;
struct TYPE_7__ {int integer; } ;
struct TYPE_5__ {int soundName; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ,...) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_4( void ) {
 int VAR_6;
 int VAR_7;
 channel_t *VAR_8;

 if ( !VAR_5 || VAR_4 ) {
  FUNC_0 ("not started or muted\n");
  return;
 }




 if ( VAR_3->integer == 2 ) {
  VAR_7 = 0;
  VAR_8 = VAR_1;
  for (VAR_6=0 ; VAR_6<VAR_0; VAR_6++, VAR_8++) {
   if (VAR_8->thesfx && (VAR_8->leftvol || VAR_8->rightvol) ) {
    FUNC_1 ("%f %f %s\n", VAR_8->leftvol, VAR_8->rightvol, VAR_8->thesfx->soundName);
    VAR_7++;
   }
  }

  FUNC_1 ("----(%i)---- painted: %i\n", VAR_7, VAR_2);
 }


 FUNC_2();


 FUNC_3();
}
