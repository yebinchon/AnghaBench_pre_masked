
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Slice* var ;
struct Slice {int iter; struct Range* range; } ;
struct Range {scalar_t__ step; } ;
typedef scalar_t__ int64_t ;


 struct Slice* FUNC_0 (int ,struct Slice*) ;
 struct Slice* FUNC_1 (int ,struct Slice*) ;

__attribute__((used)) static var FUNC_2(var VAR_0, var VAR_1) {
  struct Slice* VAR_2 = VAR_0;
  struct Range* VAR_3 = VAR_2->range;

  if (VAR_3->step > 0) {
    for (int64_t VAR_4 = 0; VAR_4 < VAR_3->step; VAR_4++) {
      VAR_1 = FUNC_0(VAR_2->iter, VAR_1);
    }
  }

  if (VAR_3->step < 0) {
    for (int64_t VAR_5 = 0; VAR_5 < -VAR_3->step; VAR_5++) {
      VAR_1 = FUNC_1(VAR_2->iter, VAR_1);
    }
  }

  return VAR_1;
}
