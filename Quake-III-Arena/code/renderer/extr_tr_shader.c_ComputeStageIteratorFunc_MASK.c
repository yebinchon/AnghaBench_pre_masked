
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {int numUnfoggedPasses; int optimalStageIteratorFunc; scalar_t__ multitextureEnv; int numDeforms; int polygonOffset; scalar_t__ isSky; } ;
struct TYPE_6__ {scalar_t__ rgbGen; scalar_t__ alphaGen; TYPE_1__* bundle; } ;
struct TYPE_5__ {scalar_t__ tcGen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_4__* VAR_9 ;
 TYPE_3__ VAR_10 ;
 TYPE_2__* VAR_11 ;

__attribute__((used)) static void FUNC_0( void )
{
 VAR_10.optimalStageIteratorFunc = VAR_3;




 if ( VAR_10.isSky )
 {
  VAR_10.optimalStageIteratorFunc = VAR_5;
  goto done;
 }

 if ( VAR_9->integer )
 {
  return;
 }




 if ( VAR_10.numUnfoggedPasses == 1 )
 {
  if ( VAR_11[0].rgbGen == VAR_2 )
  {
   if ( VAR_11[0].alphaGen == VAR_0 )
   {
    if ( VAR_11[0].bundle[0].tcGen == VAR_8 )
    {
     if ( !VAR_10.polygonOffset )
     {
      if ( !VAR_10.multitextureEnv )
      {
       if ( !VAR_10.numDeforms )
       {
        VAR_10.optimalStageIteratorFunc = VAR_6;
        goto done;
       }
      }
     }
    }
   }
  }
 }




 if ( VAR_10.numUnfoggedPasses == 1 )
 {
  if ( ( VAR_11[0].rgbGen == VAR_1 ) && ( VAR_11[0].alphaGen == VAR_0 ) )
  {
   if ( VAR_11[0].bundle[0].tcGen == VAR_8 &&
    VAR_11[0].bundle[1].tcGen == VAR_7 )
   {
    if ( !VAR_10.polygonOffset )
    {
     if ( !VAR_10.numDeforms )
     {
      if ( VAR_10.multitextureEnv )
      {
       VAR_10.optimalStageIteratorFunc = VAR_4;
       goto done;
      }
     }
    }
   }
  }
 }

done:
 return;
}
