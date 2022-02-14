
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
   FUNC_1("Usage: vchiq_test [<options>] <mode> <iters>\n");
   FUNC_1("  where <options> is any of:\n");
   FUNC_1("    -a <c> <s>  set the client and server bulk alignment (modulo 32)\n");
   FUNC_1("    -A <c> <s>  set the client and server bulk alignment (modulo 4096)\n");
   FUNC_1("    -e          disable echoing in the main bulk transfer mode\n");
   FUNC_1("    -k <n>      skip the first <n> func data tests\n");
   FUNC_1("    -m <n>      set the client message quota to <n>\n");
   FUNC_1("    -M <n>      set the server message quota to <n>\n");
   FUNC_1("    -q          disable data verification\n");
   FUNC_1("    -s ????     service (any 4 characters)\n");
   FUNC_1("    -v          enable more verbose output\n");
   FUNC_1("    -r <b> <s>  reserve <b> bytes for <s> seconds\n");
   FUNC_1("    -K <t>      send a SIGKILL after <t> ms\n");
   FUNC_1("  and <mode> is one of:\n");
   FUNC_1("    -c <size>   control test (size in bytes)\n");
   FUNC_1("    -b <size>   bulk test (size in kilobytes)\n");
   FUNC_1("    -f          functional test\n");
   FUNC_1("    -p          ping test\n");
   FUNC_1("    -t          check the timer\n");
   FUNC_1("  and <iters> is the number of test iterations\n");
   FUNC_0(1);
}
