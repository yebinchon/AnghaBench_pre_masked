
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ code; } ;
struct TYPE_8__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3 (Instruction *VAR_1) {
  if (!FUNC_0(VAR_1)) return 0;

  for (VAR_1 += FUNC_2(VAR_1); VAR_1->i.code != VAR_0; VAR_1 += FUNC_2(VAR_1))
    if (!FUNC_1(VAR_1)) return 0;
  return 1;
}
