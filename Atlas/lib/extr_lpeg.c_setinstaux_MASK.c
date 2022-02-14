
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; int aux; int code; } ;
struct TYPE_5__ {TYPE_1__ i; } ;
typedef int Opcode ;
typedef TYPE_2__ Instruction ;



__attribute__((used)) static void FUNC_0 (Instruction *VAR_0, Opcode VAR_1, int VAR_2, int VAR_3) {
  VAR_0->i.code = VAR_1;
  VAR_0->i.offset = VAR_2;
  VAR_0->i.aux = VAR_3;
}
