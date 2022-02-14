
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pt_regs {unsigned int cp0_cause; char** regs; char* acx; char* hi; char* lo; int cp0_status; char* cp0_badvaddr; scalar_t__ cp0_epc; } ;
struct TYPE_2__ {scalar_t__ isa_level; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_0 () ;
 TYPE_1__ VAR_16 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int const FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(const struct pt_regs *VAR_17)
{
 const int VAR_18 = 2 * sizeof(unsigned long);
 unsigned int VAR_19 = VAR_17->cp0_cause;
 int VAR_20;

 FUNC_2("Cpu %d\n", FUNC_4());




 for (VAR_20 = 0; VAR_20 < 32; ) {
  if ((VAR_20 % 4) == 0)
   FUNC_2("$%2d   :", VAR_20);
  if (VAR_20 == 0)
   FUNC_2(" %0*lx", VAR_18, 0UL);
  else if (VAR_20 == 26 || VAR_20 == 27)
   FUNC_2(" %*s", VAR_18, "");
  else
   FUNC_2(" %0*lx", VAR_18, VAR_17->regs[VAR_20]);

  VAR_20++;
  if ((VAR_20 % 4) == 0)
   FUNC_2("\n");
 }




 FUNC_2("Hi    : %0*lx\n", VAR_18, VAR_17->hi);
 FUNC_2("Lo    : %0*lx\n", VAR_18, VAR_17->lo);




 FUNC_2("epc   : %0*lx %pS\n", VAR_18, VAR_17->cp0_epc,
        (void *) VAR_17->cp0_epc);
 FUNC_2("    %s\n", FUNC_1());
 FUNC_2("ra    : %0*lx %pS\n", VAR_18, VAR_17->regs[31],
        (void *) VAR_17->regs[31]);

 FUNC_2("Status: %08x    ", (uint32_t) VAR_17->cp0_status);

 if (VAR_16.isa_level == VAR_2) {
  if (VAR_17->cp0_status & VAR_11)
   FUNC_2("KUo ");
  if (VAR_17->cp0_status & VAR_7)
   FUNC_2("IEo ");
  if (VAR_17->cp0_status & VAR_12)
   FUNC_2("KUp ");
  if (VAR_17->cp0_status & VAR_8)
   FUNC_2("IEp ");
  if (VAR_17->cp0_status & VAR_10)
   FUNC_2("KUc ");
  if (VAR_17->cp0_status & VAR_6)
   FUNC_2("IEc ");
 } else {
  if (VAR_17->cp0_status & VAR_13)
   FUNC_2("KX ");
  if (VAR_17->cp0_status & VAR_14)
   FUNC_2("SX ");
  if (VAR_17->cp0_status & VAR_15)
   FUNC_2("UX ");
  switch (VAR_17->cp0_status & VAR_9) {
  case 128:
   FUNC_2("USER ");
   break;
  case 129:
   FUNC_2("SUPERVISOR ");
   break;
  case 130:
   FUNC_2("KERNEL ");
   break;
  default:
   FUNC_2("BAD_MODE ");
   break;
  }
  if (VAR_17->cp0_status & VAR_3)
   FUNC_2("ERL ");
  if (VAR_17->cp0_status & VAR_4)
   FUNC_2("EXL ");
  if (VAR_17->cp0_status & VAR_5)
   FUNC_2("IE ");
 }
 FUNC_2("\n");

 FUNC_2("Cause : %08x\n", VAR_19);

 VAR_19 = (VAR_19 & VAR_1) >> VAR_0;
 if (1 <= VAR_19 && VAR_19 <= 5)
  FUNC_2("BadVA : %0*lx\n", VAR_18, VAR_17->cp0_badvaddr);

 FUNC_2("PrId  : %08x (%s)\n", FUNC_3(),
        FUNC_0());
}
