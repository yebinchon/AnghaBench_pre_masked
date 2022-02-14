
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Zip* var ;
struct Zip {struct Tuple* values; int iters; } ;
struct Tuple {int * items; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;

var FUNC_1(var VAR_2) {
  struct Zip* VAR_3 = VAR_2;
  size_t VAR_4 = FUNC_0(VAR_3->iters);
  struct Tuple* VAR_5 = VAR_3->values;
  for (size_t VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
    VAR_5->items[VAR_6] = VAR_1;
  }
  VAR_5->items[VAR_4] = VAR_0;
  return VAR_3;
}
