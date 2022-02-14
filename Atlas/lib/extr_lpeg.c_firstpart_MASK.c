
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int offset; scalar_t__ code; } ;
struct TYPE_6__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1 (Instruction *VAR_3, int VAR_4) {
  if (FUNC_0(VAR_3)) {
    int VAR_5 = VAR_3[0].i.offset - 1;
    if ((VAR_3[VAR_5].i.code == VAR_2 || VAR_3[VAR_5].i.code == VAR_1) &&
        VAR_5 + VAR_3[VAR_5].i.offset == VAR_4)
      return VAR_5 + 1;
  }
  else if (VAR_3[0].i.code == VAR_0) {
    int VAR_6 = VAR_3[0].i.offset - 1;
    if (VAR_3[VAR_6].i.code == VAR_1 && VAR_6 + VAR_3[VAR_6].i.offset == VAR_4)
      return VAR_6 + 1;
  }
  return 0;
}
