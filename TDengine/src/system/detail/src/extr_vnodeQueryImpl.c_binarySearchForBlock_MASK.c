
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_4__ {int order; } ;
struct TYPE_5__ {TYPE_1__ order; int numOfBlocks; int pBlock; } ;
typedef TYPE_2__ SQuery ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int32_t FUNC_1(SQuery *VAR_0, int64_t VAR_1) {
  return FUNC_0(VAR_0->pBlock, VAR_0->numOfBlocks, VAR_1, VAR_0->order.order);
}
