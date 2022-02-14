
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_3(void)
{
 FUNC_1("  - /proc/mm...");
 if (FUNC_0("/proc/mm", VAR_0) < 0)
  FUNC_2("not found");
 else if (VAR_1)
  FUNC_1("found but disabled on command line\n");
 else {
  VAR_2 = 1;
  FUNC_1("found\n");
 }
}
