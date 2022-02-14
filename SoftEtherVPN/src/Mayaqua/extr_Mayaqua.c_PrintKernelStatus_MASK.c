
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (char*,...) ;
 int VAR_22 ;

void FUNC_6()
{
 bool VAR_23 = 0;

 FUNC_5("\n");
 FUNC_5(
  "     --------- Mayaqua Kernel Status ---------\n"
  "        Malloc Count ............... %u\n"
  "        ReAlloc Count .............. %u\n"
  "        Free Count ................. %u\n"
  "        Total Memory Size .......... %I64u bytes\n"
  "      * Current Memory Blocks ...... %u Blocks (Peek: %u)\n"
  "        Total Memory Blocks ........ %u Blocks\n"
  "      * Current MemPool Blocks ..... %u Blocks (Peek: %u)\n"
  "        Total MemPool Mallocs ...... %u Mallocs\n"
  "        Total MemPool ReAllocs ..... %u ReAllocs\n"
  "        NewLock Count .............. %u\n"
  "        DeleteLock Count ........... %u\n"
  "      * Current Lock Objects ....... %u Objects\n"
  "      * Current Locked Objects ..... %u Objects\n"
  "        NewRef Count ............... %u\n"
  "        FreeRef Count .............. %u\n"
  "      * Current Ref Objects ........ %u Objects\n"
  "      * Current Ref Count .......... %u Refs\n"
  "        GetTime Count .............. %u\n"
  "        GetTick Count .............. %u\n"
  "        NewThread Count ............ %u\n"
  "        FreeThread Count ........... %u\n"
  "      * Current Threads ............ %u Threads\n"
  "        Wait For Event Count ....... %u\n\n",
  FUNC_2(VAR_11),
  FUNC_2(VAR_18),
  FUNC_2(VAR_8),
  FUNC_3(VAR_20),
  FUNC_2(VAR_2),
  FUNC_4(VAR_2),
  FUNC_2(VAR_19),
  FUNC_2(VAR_12),
  FUNC_4(VAR_12),
  FUNC_2(VAR_13),
  FUNC_2(VAR_14),
  FUNC_2(VAR_15),
  FUNC_2(VAR_5),
  FUNC_2(VAR_1),
  FUNC_2(VAR_0),
  FUNC_2(VAR_16),
  FUNC_2(VAR_6),
  FUNC_2(VAR_4),
  FUNC_2(VAR_3),
  FUNC_2(VAR_10),
  FUNC_2(VAR_9),
  FUNC_2(VAR_17),
  FUNC_2(VAR_7),
  FUNC_2(VAR_17) - FUNC_2(VAR_7),
  FUNC_2(VAR_21)
  );

 if (FUNC_2(VAR_2) != 0 || FUNC_2(VAR_1) != 0 ||
  FUNC_2(VAR_12) != 0 ||
  FUNC_2(VAR_0) != 0 || FUNC_2(VAR_4) != 0)
 {
  VAR_23 = 1;
 }

 if (VAR_23)
 {
  FUNC_5("      !!! MEMORY LEAKS DETECTED !!!\n\n");
  if (VAR_22 == 0)
  {
   if (FUNC_1())
   {
    FUNC_5("    Enable /memcheck startup option to see the leaking memory heap.\n");
    FUNC_5("    Press Enter key to exit the process.\n");
   }
   FUNC_0(((void*)0), 0);
  }
 }
 else
 {
  FUNC_5("        @@@ NO MEMORY LEAKS @@@\n\n");
 }
}
