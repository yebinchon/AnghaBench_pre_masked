
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Range* var ;
struct Range {int step; int stop; int start; int value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct Range* FUNC_1 (struct Range*,int ) ;

__attribute__((used)) static void FUNC_2(var VAR_1, var VAR_2) {
  struct Range* VAR_3 = VAR_1;
  struct Range* VAR_4 = FUNC_1(VAR_2, VAR_0);
  FUNC_0(VAR_3->value, VAR_4->value);
  VAR_3->start = VAR_4->start;
  VAR_3->stop = VAR_4->stop;
  VAR_3->step = VAR_4->step;
}
