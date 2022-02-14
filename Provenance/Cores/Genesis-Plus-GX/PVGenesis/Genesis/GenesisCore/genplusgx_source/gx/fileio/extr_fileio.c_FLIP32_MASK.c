
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0 (u32 VAR_0)
{
  unsigned int VAR_1;
  VAR_1 = (VAR_0 & 0xff000000) >> 24;
  VAR_1 |= (VAR_0 & 0xff0000) >> 8;
  VAR_1 |= (VAR_0 & 0xff00) << 8;
  VAR_1 |= (VAR_0 & 0xff) << 24;
  return VAR_1;
}
