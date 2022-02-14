
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Zip* var ;
struct Zip {int * items; struct Zip* iters; struct Zip* values; } ;
struct Tuple {int * items; struct Tuple* iters; struct Tuple* values; } ;


 int FUNC_0 (int ,struct Zip*) ;
 size_t FUNC_1 (struct Zip*) ;

__attribute__((used)) static var FUNC_2(var VAR_0, var VAR_1) {
  struct Zip* VAR_2 = VAR_0;
  struct Tuple* VAR_3 = VAR_2->values;
  struct Tuple* VAR_4 = VAR_2->iters;
  size_t VAR_5 = FUNC_1(VAR_4);

  for (size_t VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    VAR_3->items[VAR_6] = FUNC_0(VAR_4->items[VAR_6], VAR_1);
  }

  return VAR_3;
}
