
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Slice* var ;
struct Slice {int range; int iter; } ;


 int FUNC_0 (int ,struct Slice*) ;
 struct Slice* FUNC_1 (int ,int ) ;

__attribute__((used)) static var FUNC_2(var VAR_0, var VAR_1) {
  struct Slice* VAR_2 = VAR_0;
  return FUNC_1(VAR_2->iter, FUNC_0(VAR_2->range, VAR_1));
}
