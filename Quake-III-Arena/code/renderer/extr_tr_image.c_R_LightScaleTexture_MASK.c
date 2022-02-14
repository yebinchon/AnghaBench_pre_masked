
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef size_t byte ;
struct TYPE_2__ {scalar_t__ deviceSupportsGamma; } ;


 TYPE_1__ VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;

void FUNC_0 (unsigned *VAR_3, int VAR_4, int VAR_5, qboolean VAR_6 )
{
 if ( VAR_6 )
 {
  if ( !VAR_0.deviceSupportsGamma )
  {
   int VAR_7, VAR_8;
   byte *VAR_9;

   VAR_9 = (byte *)VAR_3;

   VAR_8 = VAR_4*VAR_5;
   for (VAR_7=0 ; VAR_7<VAR_8 ; VAR_7++, VAR_9+=4)
   {
    VAR_9[0] = VAR_1[VAR_9[0]];
    VAR_9[1] = VAR_1[VAR_9[1]];
    VAR_9[2] = VAR_1[VAR_9[2]];
   }
  }
 }
 else
 {
  int VAR_10, VAR_11;
  byte *VAR_12;

  VAR_12 = (byte *)VAR_3;

  VAR_11 = VAR_4*VAR_5;

  if ( VAR_0.deviceSupportsGamma )
  {
   for (VAR_10=0 ; VAR_10<VAR_11 ; VAR_10++, VAR_12+=4)
   {
    VAR_12[0] = VAR_2[VAR_12[0]];
    VAR_12[1] = VAR_2[VAR_12[1]];
    VAR_12[2] = VAR_2[VAR_12[2]];
   }
  }
  else
  {
   for (VAR_10=0 ; VAR_10<VAR_11 ; VAR_10++, VAR_12+=4)
   {
    VAR_12[0] = VAR_1[VAR_2[VAR_12[0]]];
    VAR_12[1] = VAR_1[VAR_2[VAR_12[1]]];
    VAR_12[2] = VAR_1[VAR_2[VAR_12[2]]];
   }
  }
 }
}
