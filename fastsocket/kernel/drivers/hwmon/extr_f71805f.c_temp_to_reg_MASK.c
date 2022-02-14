
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;



__attribute__((used)) static inline u8 FUNC_0(long VAR_0)
{
 if (VAR_0 < 0)
  VAR_0 = 0;
 else if (VAR_0 > 1000 * 0xff)
  VAR_0 = 0xff;
 return ((VAR_0 + 500) / 1000);
}
