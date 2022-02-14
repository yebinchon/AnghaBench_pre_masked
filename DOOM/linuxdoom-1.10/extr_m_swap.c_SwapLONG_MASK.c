
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long FUNC_0( unsigned long VAR_0)
{
    return
 (VAR_0>>24)
 | ((VAR_0>>8) & 0xff00)
 | ((VAR_0<<8) & 0xff0000)
 | (VAR_0<<24);
}
