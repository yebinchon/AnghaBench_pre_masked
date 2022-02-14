
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {scalar_t__ startSample; TYPE_1__* thesfx; } ;
typedef TYPE_2__ channel_t ;
struct TYPE_5__ {scalar_t__ soundLength; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;

qboolean FUNC_1( void ) {
 channel_t *VAR_6;
 int VAR_7;
 qboolean VAR_8;

 VAR_8 = VAR_2;
 VAR_6 = VAR_4;

 for (VAR_7=0; VAR_7<VAR_0 ; VAR_7++, VAR_6++) {
  if ( !VAR_6->thesfx ) {
   continue;
  }



  if ( VAR_6->startSample == VAR_1 ) {
   VAR_6->startSample = VAR_5;
   VAR_8 = VAR_3;
   continue;
  }


  if ( VAR_6->startSample + (VAR_6->thesfx->soundLength) <= VAR_5 ) {
   FUNC_0(VAR_6);
  }
 }

 return VAR_8;
}
