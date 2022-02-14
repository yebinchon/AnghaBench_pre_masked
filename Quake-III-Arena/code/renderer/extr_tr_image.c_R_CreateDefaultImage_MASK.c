
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int data ;
typedef int byte ;
struct TYPE_2__ {int defaultImage; } ;


 int FUNC_0 (int***,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int*,int,int,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_2( void ) {
 int VAR_5;
 byte VAR_6[VAR_0][VAR_0][4];


 FUNC_0( VAR_6, 32, sizeof( VAR_6 ) );
 for ( VAR_5 = 0 ; VAR_5 < VAR_0 ; VAR_5++ ) {
  VAR_6[0][VAR_5][0] =
  VAR_6[0][VAR_5][1] =
  VAR_6[0][VAR_5][2] =
  VAR_6[0][VAR_5][3] = 255;

  VAR_6[VAR_5][0][0] =
  VAR_6[VAR_5][0][1] =
  VAR_6[VAR_5][0][2] =
  VAR_6[VAR_5][0][3] = 255;

  VAR_6[VAR_0-1][VAR_5][0] =
  VAR_6[VAR_0-1][VAR_5][1] =
  VAR_6[VAR_0-1][VAR_5][2] =
  VAR_6[VAR_0-1][VAR_5][3] = 255;

  VAR_6[VAR_5][VAR_0-1][0] =
  VAR_6[VAR_5][VAR_0-1][1] =
  VAR_6[VAR_5][VAR_0-1][2] =
  VAR_6[VAR_5][VAR_0-1][3] = 255;
 }
 VAR_4.defaultImage = FUNC_1("*default", (byte *)VAR_6, VAR_0, VAR_0, VAR_3, VAR_2, VAR_1 );
}
