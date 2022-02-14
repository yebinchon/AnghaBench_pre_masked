
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Range* var ;
struct Range {int step; int stop; int start; } ;



__attribute__((used)) static size_t FUNC_0(var VAR_0) {
  struct Range* VAR_1 = VAR_0;
  if (VAR_1->step == 0) { return 0; }
  if (VAR_1->step > 0) { return ((VAR_1->stop-1) - VAR_1->start) / VAR_1->step + 1; }
  if (VAR_1->step < 0) { return ((VAR_1->stop-1) - VAR_1->start) / -VAR_1->step + 1; }
  return 0;
}
