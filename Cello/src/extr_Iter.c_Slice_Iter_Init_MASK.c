
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Slice* var ;
struct Slice {int iter; struct Range* range; } ;
struct Range {scalar_t__ step; scalar_t__ start; scalar_t__ stop; } ;
typedef scalar_t__ int64_t ;


 struct Slice* VAR_0 ;
 struct Slice* FUNC_0 (int ) ;
 struct Slice* FUNC_1 (int ) ;
 struct Slice* FUNC_2 (int ,struct Slice*) ;
 struct Slice* FUNC_3 (int ,struct Slice*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static var FUNC_5(var VAR_1) {
  struct Slice* VAR_2 = VAR_1;
  struct Range* VAR_3 = VAR_2->range;

  if (VAR_3->step > 0) {
    var VAR_4 = FUNC_0(VAR_2->iter);
    for(int64_t VAR_5 = 0; VAR_5 < VAR_3->start; VAR_5++) {
      VAR_4 = FUNC_2(VAR_2->iter, VAR_4);
    }
    return VAR_4;
  }

  if (VAR_3->step < 0) {
    var VAR_6 = FUNC_1(VAR_2->iter);
    for (int64_t VAR_7 = 0; VAR_7 < (int64_t)FUNC_4(VAR_2->iter)-VAR_3->stop; VAR_7++) {
      VAR_6 = FUNC_3(VAR_2->iter, VAR_6);
    }
    return VAR_6;
  }

  return VAR_0;
}
