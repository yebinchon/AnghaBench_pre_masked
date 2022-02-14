
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; float pixelAspect; } ;
typedef TYPE_1__ vidmode_t ;
typedef int qboolean ;
struct TYPE_9__ {float value; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {int integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

qboolean FUNC_0( int *VAR_7, int *VAR_8, float *VAR_9, int VAR_10 ) {
 vidmode_t *VAR_11;

    if ( VAR_10 < -1 ) {
        return VAR_0;
 }
 if ( VAR_10 >= VAR_6 ) {
  return VAR_0;
 }

 if ( VAR_10 == -1 ) {
  *VAR_7 = VAR_4->integer;
  *VAR_8 = VAR_3->integer;
  *VAR_9 = VAR_2->value;
  return VAR_1;
 }

 VAR_11 = &VAR_5[VAR_10];

    *VAR_7 = VAR_11->width;
    *VAR_8 = VAR_11->height;
    *VAR_9 = (float)VAR_11->width / ( VAR_11->height * VAR_11->pixelAspect );

    return VAR_1;
}
