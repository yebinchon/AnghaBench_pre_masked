
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct SStream {int dummy; } ;
typedef int csh ;
struct TYPE_3__ {scalar_t__ Opcode; int * evm_data; scalar_t__ csh; } ;
typedef TYPE_1__ MCInst ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct SStream*,char*,...) ;
 int FUNC_2 (struct SStream*,char*) ;

void FUNC_3(MCInst *VAR_2, struct SStream *VAR_3, void *VAR_4)
{
 FUNC_1(VAR_3, FUNC_0((csh)VAR_2->csh, VAR_2->Opcode));

 if (VAR_2->Opcode >= VAR_0 && VAR_2->Opcode <= VAR_1) {
  unsigned int VAR_5;

  FUNC_2(VAR_3, "\t");
  for (VAR_5 = 0; VAR_5 < VAR_2->Opcode - VAR_0 + 1; VAR_5++) {
   FUNC_1(VAR_3, "%02x", VAR_2->evm_data[VAR_5]);
  }
 }
}
