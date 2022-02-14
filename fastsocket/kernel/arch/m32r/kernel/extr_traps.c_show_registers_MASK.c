
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {unsigned long spu; scalar_t__ bpc; } ;
struct TYPE_4__ {int comm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char,unsigned char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (TYPE_1__*,unsigned long*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_7(struct pt_regs *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 1;
 unsigned long VAR_5;

 FUNC_1("CPU:    %d\n", FUNC_4());
 FUNC_2(VAR_2);

 VAR_5 = (unsigned long) (1+VAR_2);
 if (FUNC_6(VAR_2)) {
  VAR_4 = 0;
  VAR_5 = VAR_2->spu;
  FUNC_1("SPU: %08lx\n", VAR_5);
 } else {
  FUNC_1("SPI: %08lx\n", VAR_5);
 }
 FUNC_1("Process %s (pid: %d, process nr: %d, stackpage=%08lx)",
  VAR_1->comm, FUNC_5(VAR_1), 0xffff & VAR_3, 4096+(unsigned long)VAR_1);





 if (VAR_4) {
  FUNC_1("\nStack: ");
  FUNC_3(VAR_1, (unsigned long*) VAR_5);

  FUNC_1("\nCode: ");
  if (VAR_2->bpc < VAR_0)
   goto bad;

  for(VAR_3=0;VAR_3<20;VAR_3++) {
   unsigned char VAR_6;
   if (FUNC_0(VAR_6, &((unsigned char*)VAR_2->bpc)[VAR_3])) {
bad:
    FUNC_1(" Bad PC value.");
    break;
   }
   FUNC_1("%02x ", VAR_6);
  }
 }
 FUNC_1("\n");
}
