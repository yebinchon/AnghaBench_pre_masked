
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ code; int offset; int aux; } ;
struct TYPE_10__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6 (Instruction *VAR_1) {
  FUNC_0(VAR_1->i.code == VAR_0);
  if (FUNC_2(VAR_1 + 1)) {
    int VAR_2 = FUNC_5(VAR_1 + 1);
    FUNC_4(VAR_1, VAR_2, 1);
    FUNC_0(FUNC_2(VAR_1) && (VAR_1 + VAR_2)->i.code == VAR_0);
    (VAR_1 + VAR_2)->i.aux = FUNC_3(VAR_1);
    FUNC_1(VAR_1, (VAR_1 + VAR_2)->i.offset);
    (VAR_1 + VAR_2)->i.offset -= VAR_2;
  }
}
