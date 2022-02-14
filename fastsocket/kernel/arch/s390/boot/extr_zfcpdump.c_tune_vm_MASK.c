
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(void)
{
 char *VAR_0[] = {"/proc/sys/vm/dirty_ratio",
    "/proc/sys/vm/dirty_background_ratio",
    "/proc/sys/vm/dirty_writeback_centisecs",
    "/proc/sys/vm/dirty_expire_centisecs",
    "/proc/sys/vm/vfs_cache_pressure",
    "/proc/sys/vm/lowmem_reserve_ratio",
    ((void*)0)};
 char *VAR_1[] = {"2", "5", "50", "50", "500", "32", ((void*)0)};
 int VAR_2;

 VAR_2 = 0;
 while (VAR_0[VAR_2]) {
  if (FUNC_0(VAR_0[VAR_2], VAR_1[VAR_2]))
   return -1;
  VAR_2++;
 }
 return 0;
}
