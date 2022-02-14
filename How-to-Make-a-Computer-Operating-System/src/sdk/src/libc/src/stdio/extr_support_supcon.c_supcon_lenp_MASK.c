
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned int VAR_0)
{
 if ( VAR_0 < 0x10 ) return 1;
 if ( VAR_0 < 0x100 ) return 2;
 if ( VAR_0 < 0x1000 ) return 3;
 if ( VAR_0 < 0x10000 ) return 4;
 if ( VAR_0 < 0x100000 ) return 5;
 if ( VAR_0 < 0x1000000 ) return 6;
 if ( VAR_0 < 0x10000000 ) return 7;

  return 8;
}
