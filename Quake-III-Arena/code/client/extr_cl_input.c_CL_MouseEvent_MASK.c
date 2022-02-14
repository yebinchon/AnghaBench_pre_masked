
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* mouseDx; size_t mouseIndex; int* mouseDy; } ;
struct TYPE_3__ {int keyCatchers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

void FUNC_1( int VAR_8, int VAR_9, int VAR_10 ) {
 if ( VAR_6.keyCatchers & VAR_2 ) {
  FUNC_0( VAR_7, VAR_3, VAR_8, VAR_9 );
 } else if (VAR_6.keyCatchers & VAR_1) {
  FUNC_0 (VAR_4, VAR_0, VAR_8, VAR_9);
 } else {
  VAR_5.mouseDx[VAR_5.mouseIndex] += VAR_8;
  VAR_5.mouseDy[VAR_5.mouseIndex] += VAR_9;
 }
}
