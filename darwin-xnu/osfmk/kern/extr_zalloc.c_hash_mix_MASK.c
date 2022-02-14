
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
uintptr_t
FUNC_0(uintptr_t VAR_0)
{
 VAR_0 += ~(VAR_0 << 32);
 VAR_0 ^= (VAR_0 >> 22);
 VAR_0 += ~(VAR_0 << 13);
 VAR_0 ^= (VAR_0 >> 8 );
 VAR_0 += (VAR_0 << 3 );
 VAR_0 ^= (VAR_0 >> 15);
 VAR_0 += ~(VAR_0 << 27);
 VAR_0 ^= (VAR_0 >> 31);

 return VAR_0;
}
