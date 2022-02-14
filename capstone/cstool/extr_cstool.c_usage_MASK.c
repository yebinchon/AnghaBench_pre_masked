
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(char *VAR_16)
{
 FUNC_1("Cstool for Capstone Disassembler Engine v%u.%u.%u\n\n", VAR_14, VAR_15, VAR_13);
 FUNC_1("Syntax: %s [-u|-d|-s|-v] <arch+mode> <assembly-hexstring> [start-address-in-hex-format]\n", VAR_16);
 FUNC_1("\nThe following <arch+mode> options are supported:\n");

 if (FUNC_0(VAR_11)) {
  FUNC_1("        x16         16-bit mode (X86)\n");
  FUNC_1("        x32         32-bit mode (X86)\n");
  FUNC_1("        x64         64-bit mode (X86)\n");
  FUNC_1("        x16att      16-bit mode (X86), syntax AT&T\n");
  FUNC_1("        x32att      32-bit mode (X86), syntax AT&T\n");
  FUNC_1("        x64att      64-bit mode (X86), syntax AT&T\n");
 }

 if (FUNC_0(VAR_0)) {
  FUNC_1("        arm         arm\n");
  FUNC_1("        armbe       arm + big endian\n");
  FUNC_1("        thumb       thumb mode\n");
  FUNC_1("        thumbbe     thumb + big endian\n");
  FUNC_1("        cortexm     thumb + cortex-m extensions\n");
 }

 if (FUNC_0(VAR_1)) {
  FUNC_1("        arm64       aarch64 mode\n");
  FUNC_1("        arm64be     aarch64 + big endian\n");
 }

 if (FUNC_0(VAR_5)) {
  FUNC_1("        mips        mips32 + little endian\n");
  FUNC_1("        mipsbe      mips32 + big endian\n");
  FUNC_1("        mips64      mips64 + little endian\n");
  FUNC_1("        mips64be    mips64 + big endian\n");
 }

 if (FUNC_0(VAR_7)) {
  FUNC_1("        ppc64       ppc64 + little endian\n");
  FUNC_1("        ppc64be     ppc64 + big endian\n");
 }

 if (FUNC_0(VAR_8)) {
  FUNC_1("        sparc       sparc\n");
 }

 if (FUNC_0(VAR_9)) {
  FUNC_1("        systemz     systemz (s390x)\n");
 }

 if (FUNC_0(VAR_12)) {
  FUNC_1("        xcore       xcore\n");
 }

 if (FUNC_0(VAR_4)) {
  FUNC_1("        m68k        m68k + big endian\n");
  FUNC_1("        m68k40      m68k_040\n");
 }

 if (FUNC_0(VAR_10)) {
  FUNC_1("        tms320c64x  TMS320C64x\n");
 }

 if (FUNC_0(VAR_3)) {
  FUNC_1("        m6800       M6800/2\n");
  FUNC_1("        m6801       M6801/3\n");
  FUNC_1("        m6805       M6805\n");
  FUNC_1("        m6808       M68HC08\n");
  FUNC_1("        m6809       M6809\n");
  FUNC_1("        m6811       M68HC11\n");
  FUNC_1("        cpu12       M68HC12/HCS12\n");
  FUNC_1("        hd6301      HD6301/3\n");
  FUNC_1("        hd6309      HD6309\n");
  FUNC_1("        hcs08       HCS08\n");
 }

 if (FUNC_0(VAR_2)) {
  FUNC_1("        evm         Ethereum Virtual Machine\n");
 }

 if (FUNC_0(VAR_6)) {
  FUNC_1("        mos65xx     MOS65XX family\n");
 }

 FUNC_1("\nExtra options:\n");
 FUNC_1("        -d show detailed information of the instructions\n");
 FUNC_1("        -u show immediates as unsigned\n");
 FUNC_1("        -s decode in SKIPDATA mode\n");
 FUNC_1("        -v show version & Capstone core build info\n\n");
}
