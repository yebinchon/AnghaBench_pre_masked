
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0( unsigned char *VAR_0 )
{
    if( ( VAR_0[0x26] == 0x00 &&
          VAR_0[0x27] == 0x00 &&
          VAR_0[0x28] == 0x01 &&
          VAR_0[0x29] == 0xbf &&
          VAR_0[0x2c] == 0x00 ) &&
        ( VAR_0[0x400] == 0x00 &&
          VAR_0[0x401] == 0x00 &&
          VAR_0[0x402] == 0x01 &&
          VAR_0[0x403] == 0xbf &&
          VAR_0[0x406] == 0x01 ) )
    {
        return ( 1 );
    } else {
        return ( 0 );
    }
}
