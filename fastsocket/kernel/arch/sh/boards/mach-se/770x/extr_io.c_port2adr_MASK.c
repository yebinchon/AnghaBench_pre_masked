
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline volatile __u16 *
FUNC_0(unsigned int VAR_3)
{
 if (VAR_3 & 0xff000000)
  return ( volatile __u16 *) VAR_3;
 if (VAR_3 >= 0x2000)
  return (volatile __u16 *) (VAR_1 + (VAR_3 - 0x2000));
 else if (VAR_3 >= 0x1000)
  return (volatile __u16 *) (VAR_0 + (VAR_3 << 1));
 else
  return (volatile __u16 *) (VAR_2 + (VAR_3 << 1));
}
