
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ (* __block_search_fn_t ) (char*,scalar_t__,scalar_t__,int ) ;
struct TYPE_5__ {int order; } ;
struct TYPE_6__ {scalar_t__ ekey; scalar_t__ pos; TYPE_1__ order; } ;
typedef TYPE_2__ SQuery ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int32_t FUNC_2(int32_t VAR_0, __block_search_fn_t VAR_1, SQuery *VAR_2,
                                      int64_t *VAR_3) {
  int32_t VAR_4 = VAR_1((char *)VAR_3, VAR_0, VAR_2->ekey, VAR_2->order.order);
  int32_t VAR_5 = 0;

  if (VAR_4 >= 0) {
    VAR_5 = FUNC_0(VAR_2) ? (VAR_4 - VAR_2->pos) : (VAR_2->pos - VAR_4);
    FUNC_1(VAR_5 >= 0);


    if (VAR_3[VAR_4] == VAR_2->ekey) {
      VAR_5 += 1;
    }
  }
  return VAR_5;
}
