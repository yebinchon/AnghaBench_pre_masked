
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ code; scalar_t__ offset; } ;
struct TYPE_9__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4 (Instruction *VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_1[VAR_2].i.code != VAR_0; VAR_2 += FUNC_2(VAR_1 + VAR_2)) {
    if (FUNC_1(VAR_1 + VAR_2))
      VAR_1[VAR_2].i.offset = FUNC_3(VAR_1, FUNC_0(VAR_1, VAR_2)) - VAR_2;
  }
}
