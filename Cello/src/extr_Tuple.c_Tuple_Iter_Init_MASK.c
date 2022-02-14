
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Tuple* var ;
struct Tuple {struct Tuple** items; } ;



__attribute__((used)) static var FUNC_0(var VAR_0) {
  struct Tuple* VAR_1 = VAR_0;
  return VAR_1->items[0];
}
