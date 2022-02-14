
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int maxBlocks; } ;
typedef TYPE_1__ SCacheInfo ;



__attribute__((used)) static int32_t FUNC_0(int32_t VAR_0, int32_t VAR_1, SCacheInfo *VAR_2) {
  return (VAR_1 - VAR_0 + 1 + VAR_2->maxBlocks) % VAR_2->maxBlocks;
}
