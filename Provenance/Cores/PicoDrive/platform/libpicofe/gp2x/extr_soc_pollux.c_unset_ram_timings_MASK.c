
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (char*) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2;

 VAR_0[0x14802>>1] = VAR_1[0];
 VAR_0[0x14804>>1] = VAR_1[1] | 0x8000;

 for (VAR_2 = 0; VAR_2 < 0x100000; VAR_2++)
  if (!(VAR_0[0x14804>>1] & 0x8000))
   break;

 FUNC_0("RAM timings reset to startup values.\n");
}
