
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_5__ {int painTime; scalar_t__ painDirection; } ;
struct TYPE_6__ {TYPE_1__ pe; } ;
typedef TYPE_2__ centity_t ;
struct TYPE_7__ {int time; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_0( centity_t *VAR_3, vec3_t VAR_4 ) {
 int VAR_5;
 float VAR_6;

 VAR_5 = VAR_2.time - VAR_3->pe.painTime;
 if ( VAR_5 >= VAR_0 ) {
  return;
 }

 VAR_6 = 1.0 - (float)VAR_5 / VAR_0;

 if ( VAR_3->pe.painDirection ) {
  VAR_4[VAR_1] += 20 * VAR_6;
 } else {
  VAR_4[VAR_1] -= 20 * VAR_6;
 }
}
