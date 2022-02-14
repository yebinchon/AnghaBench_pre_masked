
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long FUNC_0( unsigned long VAR_0 )
{

   return ((VAR_0 << 24) | ((VAR_0 & 0xFF00) << 8) | ((VAR_0 >> 8) & 0xFF00) | (VAR_0 >> 24));
}
