
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {scalar_t__ nAggTimeInterval; } ;
typedef TYPE_1__ SQuery ;



bool FUNC_0(SQuery *VAR_0, int16_t VAR_1) {
  return (VAR_0->nAggTimeInterval == 0) || ((VAR_1 == 1) && (VAR_0->nAggTimeInterval > 0));
}
