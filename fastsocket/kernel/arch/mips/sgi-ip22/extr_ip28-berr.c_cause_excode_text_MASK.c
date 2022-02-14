
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline const char *FUNC_0(int VAR_0)
{
 static const char *VAR_1[32] =
 { "Interrupt",
  "TLB modification",
  "TLB (load or instruction fetch)",
  "TLB (store)",
  "Address error (load or instruction fetch)",
  "Address error (store)",
  "Bus error (instruction fetch)",
  "Bus error (data: load or store)",
  "Syscall",
  "Breakpoint",
  "Reserved instruction",
  "Coprocessor unusable",
  "Arithmetic Overflow",
  "Trap",
  "14",
  "Floating-Point",
  "16", "17", "18", "19", "20", "21", "22",
  "Watch Hi/Lo",
  "24", "25", "26", "27", "28", "29", "30", "31",
 };
 return VAR_1[(VAR_0 & 0x7c) >> 2];
}
