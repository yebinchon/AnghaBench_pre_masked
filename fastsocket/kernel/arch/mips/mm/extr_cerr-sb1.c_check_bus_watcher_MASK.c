
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned long uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7(void)
{
 uint32_t VAR_4, VAR_5, VAR_6;





 VAR_4 = FUNC_4(FUNC_3(VAR_3));

 if (VAR_4 & ~(1UL << 31)) {
  VAR_5 = FUNC_4(FUNC_3(VAR_0));



  VAR_6 = FUNC_4(FUNC_3(VAR_1));
  FUNC_6("Bus watcher error counters: %08x %08x\n", VAR_5, VAR_6);
  FUNC_6("\nLast recorded signature:\n");
  FUNC_6("Request %02x from %d, answered by %d with Dcode %d\n",
         (unsigned int)(FUNC_2(VAR_4) & 0x3f),
         (int)(FUNC_2(VAR_4) >> 6),
         (int)FUNC_1(VAR_4),
         (int)FUNC_0(VAR_4));



 } else {
  FUNC_6("Bus watcher indicates no error\n");
 }
}
