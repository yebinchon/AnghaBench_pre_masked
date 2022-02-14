
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2()
{
 FUNC_1(VAR_0,
  "usage: pool [-a]    Turn affinity on (off)\n"
  "            [-b B]  Number of buffers per producer (2)\n"
  "            [-i I]  Number of buffers to produce (10000)\n"
  "            [-s S]  Number of stages (2)\n"
  "            [-p P]  Number of pages per buffer (256=1MB)]\n"
  "            [-w]    Consumer writes data\n"
  "            [-v V]  Verbosity level 0..2 (1)\n"
  "            [N [M]] Number of producer and consumers (2)\n"
 );
 FUNC_0(1);
}
