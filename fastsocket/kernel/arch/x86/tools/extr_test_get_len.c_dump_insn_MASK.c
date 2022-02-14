
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn {int attr; int opnd_bytes; int addr_bytes; int length; int x86_64; int kaddr; int immediate2; int immediate1; int displacement; int sib; int modrm; int opcode; int vex_prefix; int rex_prefix; int prefixes; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,int *) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_0, struct insn *VAR_1)
{
 FUNC_1(VAR_0, "Instruction = {\n");
 FUNC_0(VAR_0, "prefixes", "\t", &VAR_1->prefixes);
 FUNC_0(VAR_0, "rex_prefix", "\t", &VAR_1->rex_prefix);
 FUNC_0(VAR_0, "vex_prefix", "\t", &VAR_1->vex_prefix);
 FUNC_0(VAR_0, "opcode", "\t", &VAR_1->opcode);
 FUNC_0(VAR_0, "modrm", "\t", &VAR_1->modrm);
 FUNC_0(VAR_0, "sib", "\t", &VAR_1->sib);
 FUNC_0(VAR_0, "displacement", "\t", &VAR_1->displacement);
 FUNC_0(VAR_0, "immediate1", "\t", &VAR_1->immediate1);
 FUNC_0(VAR_0, "immediate2", "\t", &VAR_1->immediate2);
 FUNC_1(VAR_0, "\t.attr = %x, .opnd_bytes = %d, .addr_bytes = %d,\n",
  VAR_1->attr, VAR_1->opnd_bytes, VAR_1->addr_bytes);
 FUNC_1(VAR_0, "\t.length = %d, .x86_64 = %d, .kaddr = %p}\n",
  VAR_1->length, VAR_1->x86_64, VAR_1->kaddr);
}
