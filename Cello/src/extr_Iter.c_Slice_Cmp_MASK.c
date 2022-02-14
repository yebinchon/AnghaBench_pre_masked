
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Slice* var ;
struct Slice {scalar_t__ iter; int range; } ;


 int VAR_0 ;
 struct Slice* FUNC_0 (struct Slice*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(var VAR_1, var VAR_2) {
  struct Slice* VAR_3 = VAR_1;
  struct Slice* VAR_4 = FUNC_0(VAR_2, VAR_0);
  if (VAR_3->iter > VAR_4->iter) { return 1; }
  if (VAR_3->iter < VAR_4->iter) { return -1; }
  return FUNC_1(VAR_3->range, VAR_4->range);
}
