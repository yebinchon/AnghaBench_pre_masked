
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_7__ {size_t numOpenLeafs; int* openLeafNumbers; TYPE_1__* trace; } ;
typedef TYPE_2__ traceWork_t ;
struct TYPE_8__ {int type; float dist; float* normal; int* children; } ;
typedef TYPE_3__ tnode_t ;
struct TYPE_6__ {int passSolid; int hit; } ;


 size_t VAR_0 ;



 float VAR_1 ;
 int FUNC_0 (float* const,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;

int FUNC_1( int VAR_5, const vec3_t VAR_6, const vec3_t VAR_7, traceWork_t *VAR_8 ) {
 tnode_t *VAR_9;
 float VAR_10, VAR_11;
 vec3_t VAR_12;
 float VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_5 & (1<<31)) {
  if (VAR_5 & ( 1 << 30 ) ) {
   FUNC_0 (VAR_6, VAR_8->trace->hit);
   VAR_8->trace->passSolid = VAR_3;
   return VAR_3;
  } else {

   if ( VAR_8->numOpenLeafs == VAR_0 ) {
    return VAR_2;
   }
   VAR_8->openLeafNumbers[ VAR_8->numOpenLeafs ] = VAR_5 & ~(3 << 30);
   VAR_8->numOpenLeafs++;
   return VAR_2;
  }
 }

 VAR_9 = &VAR_4[VAR_5];
 switch (VAR_9->type) {
 case 130:
  VAR_10 = VAR_6[0] - VAR_9->dist;
  VAR_11 = VAR_7[0] - VAR_9->dist;
  break;
 case 129:
  VAR_10 = VAR_6[1] - VAR_9->dist;
  VAR_11 = VAR_7[1] - VAR_9->dist;
  break;
 case 128:
  VAR_10 = VAR_6[2] - VAR_9->dist;
  VAR_11 = VAR_7[2] - VAR_9->dist;
  break;
 default:
  VAR_10 = (VAR_6[0]*VAR_9->normal[0] + VAR_6[1]*VAR_9->normal[1] + VAR_6[2]*VAR_9->normal[2]) - VAR_9->dist;
  VAR_11 = (VAR_7[0]*VAR_9->normal[0] + VAR_7[1]*VAR_9->normal[1] + VAR_7[2]*VAR_9->normal[2]) - VAR_9->dist;
  break;
 }

 if (VAR_10 >= -VAR_1 && VAR_11 >= -VAR_1) {
  return FUNC_1 (VAR_9->children[0], VAR_6, VAR_7, VAR_8);
 }

 if (VAR_10 < VAR_1 && VAR_11 < VAR_1) {
  return FUNC_1 (VAR_9->children[1], VAR_6, VAR_7, VAR_8);
 }

 VAR_14 = VAR_10 < 0;

 VAR_13 = VAR_10 / (VAR_10-VAR_11);

 VAR_12[0] = VAR_6[0] + (VAR_7[0] - VAR_6[0])*VAR_13;
 VAR_12[1] = VAR_6[1] + (VAR_7[1] - VAR_6[1])*VAR_13;
 VAR_12[2] = VAR_6[2] + (VAR_7[2] - VAR_6[2])*VAR_13;

 VAR_15 = FUNC_1 (VAR_9->children[VAR_14], VAR_6, VAR_12, VAR_8);

 if (VAR_15) {
  return VAR_15;
 }


 return FUNC_1 (VAR_9->children[!VAR_14], VAR_12, VAR_7, VAR_8);
}
