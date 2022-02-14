
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline volatile __u16 *
FUNC_0(unsigned int VAR_2)
{
 if (VAR_2 >= 0x2000 && VAR_2 < 0x2020)
  return (volatile __u16 *) (VAR_0 + (VAR_2 - 0x2000));
 else if (VAR_2 >= 0x300 && VAR_2 < 0x310)
  return (volatile __u16 *) (VAR_1 + (VAR_2 - 0x300));

 return (volatile __u16 *)VAR_2;
}
