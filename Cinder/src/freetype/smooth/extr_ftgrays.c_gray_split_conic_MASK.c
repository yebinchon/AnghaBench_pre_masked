
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef int TPos ;
typedef TYPE_1__ FT_Vector ;



__attribute__((used)) static void
  FUNC_0( FT_Vector* VAR_0 )
  {
    TPos VAR_1, VAR_2;


    VAR_0[4].x = VAR_0[2].x;
    VAR_2 = VAR_0[1].x;
    VAR_1 = VAR_0[3].x = ( VAR_0[2].x + VAR_2 ) / 2;
    VAR_2 = VAR_0[1].x = ( VAR_0[0].x + VAR_2 ) / 2;
    VAR_0[2].x = ( VAR_1 + VAR_2 ) / 2;

    VAR_0[4].y = VAR_0[2].y;
    VAR_2 = VAR_0[1].y;
    VAR_1 = VAR_0[3].y = ( VAR_0[2].y + VAR_2 ) / 2;
    VAR_2 = VAR_0[1].y = ( VAR_0[0].y + VAR_2 ) / 2;
    VAR_0[2].y = ( VAR_1 + VAR_2 ) / 2;
  }
