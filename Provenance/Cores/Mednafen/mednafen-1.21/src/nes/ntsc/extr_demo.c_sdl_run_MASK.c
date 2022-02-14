
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int w; int h; } ;
struct TYPE_6__ {scalar_t__ sym; } ;
struct TYPE_7__ {TYPE_1__ keysym; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ key; } ;
typedef TYPE_3__ SDL_Event ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int*,int*) ;
 unsigned long FUNC_2 () ;
 TYPE_5__* FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;

int FUNC_5()
{
 SDL_Event VAR_11;


 unsigned long VAR_12 = FUNC_2();
 if ( VAR_12 < VAR_10 && VAR_10 - VAR_12 > 10 )
  FUNC_0( VAR_10 - VAR_12 );
 while ( FUNC_2() < VAR_10 ) { }
 VAR_10 = VAR_12 + 1000 / 60;

 VAR_7 = 0;
 VAR_6 = 0;

 while ( FUNC_4( &VAR_11 ) )
 {
  if ( VAR_11.type == VAR_3 || VAR_11.type == VAR_5 )
   return 0;

  if ( VAR_11.type == VAR_2 )
  {
   if ( VAR_11.key.keysym.sym == VAR_0 || VAR_11.key.keysym.sym == VAR_1 )
    return 0;
   VAR_6 = VAR_11.key.keysym.sym;
  }

  if ( VAR_11.type == VAR_4 )
  {
   int VAR_13, VAR_14;
   FUNC_1( &VAR_13, &VAR_14 );
   VAR_7 = 1;
   VAR_8 = VAR_13 / (float) (FUNC_3()->w - 1);
   VAR_9 = 1 - VAR_14 / (float) (FUNC_3()->h - 1);
  }
 }
 return 1;
}
