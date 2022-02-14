
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static __inline__ short FUNC_0(int VAR_0)
{
 if((VAR_0+32768)&~65535) return (VAR_0>>31)^32767;
 else return VAR_0;
}
