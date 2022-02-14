
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int* awardsEarned; int* awardsLevels; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int,int,int ) ;
 int FUNC_2 (int,int,char*,int ,int ) ;
 int VAR_2 ;
 int* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_3( int VAR_6 ) {
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;
 char VAR_12[16];

 for( VAR_7 = 0; VAR_7 < VAR_6; VAR_7++ ) {
  VAR_10 = VAR_3[VAR_7];
  VAR_11 = 64;
  VAR_8 = VAR_4.awardsEarned[VAR_7];
  VAR_9 = VAR_4.awardsLevels[VAR_7];

  FUNC_1( VAR_10, VAR_11, 48, 48, VAR_5[VAR_8] );

  if( VAR_8 == VAR_0 ) {
   FUNC_0( VAR_12, sizeof(VAR_12), "%i%%", VAR_9 );
  }
  else {
   if( VAR_9 == 1 ) {
    continue;
   }
   FUNC_0( VAR_12, sizeof(VAR_12), "%i", VAR_9 );
  }

  FUNC_2( VAR_10 + 24, VAR_11 + 52, VAR_12, VAR_1, VAR_2 );
 }
}
