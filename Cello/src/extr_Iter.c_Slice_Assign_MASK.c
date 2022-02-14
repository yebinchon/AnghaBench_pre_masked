
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Slice* var ;
struct Slice {int range; int iter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct Slice* FUNC_1 (struct Slice*,int ) ;

__attribute__((used)) static void FUNC_2(var VAR_1, var VAR_2) {
  struct Slice* VAR_3 = VAR_1;
  struct Slice* VAR_4 = FUNC_1(VAR_2, VAR_0);
  VAR_3->iter = VAR_4->iter;
  FUNC_0(VAR_3->range, VAR_4->range);
}
