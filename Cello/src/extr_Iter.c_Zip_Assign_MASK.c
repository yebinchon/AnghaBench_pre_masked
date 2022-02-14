
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Zip* var ;
struct Zip {int values; int iters; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct Zip* FUNC_1 (struct Zip*,int ) ;

__attribute__((used)) static void FUNC_2(var VAR_1, var VAR_2) {
  struct Zip* VAR_3 = VAR_1;
  struct Zip* VAR_4 = FUNC_1(VAR_2, VAR_0);
  FUNC_0(VAR_3->iters, VAR_4->iters);
  FUNC_0(VAR_3->values, VAR_4->values);
}
