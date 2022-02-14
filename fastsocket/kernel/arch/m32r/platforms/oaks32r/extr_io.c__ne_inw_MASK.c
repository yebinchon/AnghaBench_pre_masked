
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ portp ;



__attribute__((used)) static inline unsigned short FUNC_0(void *VAR_0)
{
 unsigned short VAR_1;

 VAR_1 = *(unsigned short *)(VAR_0) & 0xff;
 VAR_1 |= *(unsigned short *)(VAR_0+2) << 8;
 return VAR_1;
}
