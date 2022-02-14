
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(uint32_t VAR_2)
{
 if (VAR_2 & VAR_0)
  return (VAR_2 & 0xff) + 0x7f;
 else if (VAR_2 & VAR_1)
  return (VAR_2 & 0xff) - 0x7f - 0xff;
 else
  return (VAR_2 & 0xff) - 0x7f;
}
