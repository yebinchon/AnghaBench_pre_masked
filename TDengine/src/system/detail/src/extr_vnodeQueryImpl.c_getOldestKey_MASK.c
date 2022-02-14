
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_3__ {int daysPerFile; size_t precision; } ;
typedef TYPE_1__ SVnodeCfg ;


 int* VAR_0 ;

__attribute__((used)) static int64_t FUNC_0(int32_t VAR_1, int64_t VAR_2, SVnodeCfg *VAR_3) {
  int64_t VAR_4 = VAR_3->daysPerFile * VAR_0[VAR_3->precision];
  return (VAR_2 - VAR_1 + 1) * VAR_4;
}
