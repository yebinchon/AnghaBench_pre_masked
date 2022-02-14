
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int axis; double dist; struct TYPE_4__** children; } ;
typedef TYPE_1__ worldSector_t ;
typedef scalar_t__* vec3_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

worldSector_t *FUNC_2( int VAR_3, vec3_t VAR_4, vec3_t VAR_5 ) {
 worldSector_t *VAR_6;
 vec3_t VAR_7;
 vec3_t VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_6 = &VAR_2[VAR_1];
 VAR_1++;

 if (VAR_3 == VAR_0) {
  VAR_6->axis = -1;
  VAR_6->children[0] = VAR_6->children[1] = ((void*)0);
  return VAR_6;
 }

 FUNC_1 (VAR_5, VAR_4, VAR_7);
 if (VAR_7[0] > VAR_7[1]) {
  VAR_6->axis = 0;
 } else {
  VAR_6->axis = 1;
 }

 VAR_6->dist = 0.5 * (VAR_5[VAR_6->axis] + VAR_4[VAR_6->axis]);
 FUNC_0 (VAR_4, VAR_8);
 FUNC_0 (VAR_4, VAR_10);
 FUNC_0 (VAR_5, VAR_9);
 FUNC_0 (VAR_5, VAR_11);

 VAR_9[VAR_6->axis] = VAR_10[VAR_6->axis] = VAR_6->dist;

 VAR_6->children[0] = FUNC_2 (VAR_3+1, VAR_10, VAR_11);
 VAR_6->children[1] = FUNC_2 (VAR_3+1, VAR_8, VAR_9);

 return VAR_6;
}
