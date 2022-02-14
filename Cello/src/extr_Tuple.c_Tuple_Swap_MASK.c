
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var ;
struct Tuple {int * items; } ;



__attribute__((used)) static void FUNC_0(struct Tuple* VAR_0, size_t VAR_1, size_t VAR_2) {
  var VAR_3 = VAR_0->items[VAR_1];
  VAR_0->items[VAR_1] = VAR_0->items[VAR_2];
  VAR_0->items[VAR_2] = VAR_3;
}
