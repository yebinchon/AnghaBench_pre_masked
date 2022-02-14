
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_3__ {unsigned int error; unsigned int error_addr; } ;
struct TYPE_4__ {TYPE_1__ pci; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_14, void *VAR_15)
{
 char VAR_16;
 unsigned int VAR_17 = VAR_13->pci.error;
 unsigned int VAR_18 = VAR_13->pci.error_addr;

 if (VAR_17 & VAR_6)
  VAR_16 = 'M';
 else if (VAR_17 & VAR_1)
  VAR_16 = 'C';
 else
  VAR_16 = 'X';

 if (VAR_17 & VAR_5) {
  FUNC_0("MACEPCI: Master abort at 0x%08x (%c)\n", VAR_18, VAR_16);
  VAR_17 &= ~VAR_5;
 }
 if (VAR_17 & VAR_12) {
  FUNC_0("MACEPCI: Target abort at 0x%08x (%c)\n", VAR_18, VAR_16);
  VAR_17 &= ~VAR_12;
 }
 if (VAR_17 & VAR_2) {
  FUNC_0("MACEPCI: Data parity error at 0x%08x (%c)\n", VAR_18, VAR_16);
  VAR_17 &= ~VAR_2;
 }
 if (VAR_17 & VAR_9) {
  FUNC_0("MACEPCI: Retry error at 0x%08x (%c)\n", VAR_18, VAR_16);
  VAR_17 &= ~VAR_9;
 }
 if (VAR_17 & VAR_3) {
  FUNC_0("MACEPCI: Illegal command at 0x%08x (%c)\n", VAR_18, VAR_16);
  VAR_17 &= ~VAR_3;
 }
 if (VAR_17 & VAR_11) {
  FUNC_0("MACEPCI: System error at 0x%08x (%c)\n", VAR_18, VAR_16);
  VAR_17 &= ~VAR_11;
 }
 if (VAR_17 & VAR_8) {
  FUNC_0("MACEPCI: Parity error at 0x%08x (%c)\n", VAR_18, VAR_16);
  VAR_17 &= ~VAR_8;
 }
 if (VAR_17 & VAR_7) {
  FUNC_0("MACEPCI: Overrun error at 0x%08x (%c)\n", VAR_18, VAR_16);
  VAR_17 &= ~VAR_7;
 }
 if (VAR_17 & VAR_10) {
  FUNC_0("MACEPCI: Signaled target abort (clearing)\n");
  VAR_17 &= ~VAR_10;
 }
 if (VAR_17 & VAR_4) {
  FUNC_0("MACEPCI: Interrupt test triggered (clearing)\n");
  VAR_17 &= ~VAR_4;
 }

 VAR_13->pci.error = VAR_17;

 return VAR_0;
}
