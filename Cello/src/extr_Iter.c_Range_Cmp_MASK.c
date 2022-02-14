
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Range* var ;
struct Range {int start; } ;
typedef int int64_t ;


 int VAR_0 ;
 struct Range* FUNC_0 (struct Range*,int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(var VAR_1, var VAR_2) {
  struct Range* VAR_3 = VAR_1;
  struct Range* VAR_4 = FUNC_0(VAR_2, VAR_0);
  return FUNC_1(&VAR_3->start, &VAR_4->start, sizeof(int64_t) * 3);
}
