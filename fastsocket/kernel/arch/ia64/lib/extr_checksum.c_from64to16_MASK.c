
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned short
FUNC_0 (unsigned long VAR_0)
{

 VAR_0 = (VAR_0 & 0xffffffff) + (VAR_0 >> 32);

 VAR_0 = (VAR_0 & 0xffff) + (VAR_0 >> 16);

 VAR_0 = (VAR_0 & 0xffff) + (VAR_0 >> 16);

 VAR_0 = (VAR_0 & 0xffff) + (VAR_0 >> 16);
 return VAR_0;
}
