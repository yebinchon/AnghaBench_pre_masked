
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {scalar_t__ offset; } ;
struct TYPE_6__ {TYPE_1__ limit; } ;
typedef TYPE_2__ SQuery ;


 int FUNC_0 (TYPE_2__*,int ) ;

bool FUNC_1(SQuery* VAR_0, int32_t* VAR_1, int32_t VAR_2) {
  (*VAR_1)++;
  if (!FUNC_0(VAR_0, VAR_2)) {
    return 0;
  }

  if (VAR_0->limit.offset > 0) {
    VAR_0->limit.offset--;
    return 0;
  }

  return 1;
}
