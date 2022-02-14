
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (char const*,int ,int ,int,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * FUNC_3 (char const*,char*) ;

int
FUNC_4(const char* VAR_8)
{



 if (VAR_6)
  return VAR_1;

 if (FUNC_1(VAR_8, "dtrace_") && !FUNC_1(VAR_8, "dtrace_safe_")) {






  return VAR_3;
 }




 if (FUNC_2( VAR_8, VAR_5, VAR_0, sizeof(VAR_8), VAR_4 ) != ((void*)0))
  return VAR_3;




 if (FUNC_2( VAR_8, VAR_7, VAR_2, sizeof(VAR_8), VAR_4 ) != ((void*)0)) {
  return VAR_3;
 }






 if (FUNC_1(VAR_8, "cpu_") ||
  FUNC_1(VAR_8, "platform_") ||
  FUNC_1(VAR_8, "machine_") ||
  FUNC_1(VAR_8, "ml_") ||
  FUNC_1(VAR_8, "PE_") ||
  FUNC_1(VAR_8, "rtc_") ||
  FUNC_1(VAR_8, "_rtc_") ||
  FUNC_1(VAR_8, "rtclock_") ||
  FUNC_1(VAR_8, "clock_") ||
  FUNC_1(VAR_8, "bcopy") ||
  FUNC_1(VAR_8, "pmap_") ||
  FUNC_1(VAR_8, "hw_") ||
  FUNC_1(VAR_8, "lapic_") ||
  FUNC_1(VAR_8, "OSAdd") ||
  FUNC_1(VAR_8, "OSBit") ||
  FUNC_1(VAR_8, "OSDecrement") ||
  FUNC_1(VAR_8, "OSIncrement") ||
  FUNC_1(VAR_8, "OSCompareAndSwap") ||
  FUNC_1(VAR_8, "etimer_") ||
  FUNC_1(VAR_8, "dtxnu_kern_") ||
  FUNC_1(VAR_8, "flush_mmu_tlb_"))
  return VAR_3;




 if (FUNC_1(VAR_8, "fasttrap_") ||
  FUNC_1(VAR_8, "fuword") ||
  FUNC_1(VAR_8, "suword"))
  return VAR_3;

 if (FUNC_1(VAR_8, "_dtrace"))
  return VAR_3;

 if (FUNC_1(VAR_8, "hibernate_"))
  return VAR_3;
 if (FUNC_1(VAR_8, "machine_") ||
  FUNC_1(VAR_8, "idt64") ||
  FUNC_1(VAR_8, "ks_") ||
  FUNC_1(VAR_8, "hndl_") ||
  FUNC_1(VAR_8, "_intr_") ||
  FUNC_1(VAR_8, "mapping_") ||
  FUNC_1(VAR_8, "tsc_") ||
  FUNC_1(VAR_8, "pmCPU") ||
  FUNC_1(VAR_8, "pms") ||
  FUNC_1(VAR_8, "usimple_") ||
  FUNC_1(VAR_8, "lck_spin_lock") ||
  FUNC_1(VAR_8, "lck_spin_unlock") ||
  FUNC_1(VAR_8, "absolutetime_to_") ||
  FUNC_1(VAR_8, "commpage_") ||
  FUNC_1(VAR_8, "ml_") ||
  FUNC_1(VAR_8, "PE_") ||
  FUNC_1(VAR_8, "act_machine") ||
  FUNC_1(VAR_8, "acpi_") ||
  FUNC_1(VAR_8, "pal_")) {
  return VAR_3;
 }

 if (FUNC_1(VAR_8, "dsmos_"))
  return VAR_3;






 if (FUNC_1(VAR_8, "kdp_") ||
  FUNC_1(VAR_8, "kdb_") ||
  FUNC_1(VAR_8, "debug_")) {
  return VAR_3;
 }
 if (((void*)0) != FUNC_3(VAR_8, "panic_"))
  return VAR_3;

 return VAR_1;
}
