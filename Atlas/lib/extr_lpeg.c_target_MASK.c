
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ code; scalar_t__ offset; } ;
struct TYPE_5__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0 (Instruction *VAR_1, int VAR_2) {
  while (VAR_1[VAR_2].i.code == VAR_0) VAR_2 += VAR_1[VAR_2].i.offset;
  return VAR_2;
}
