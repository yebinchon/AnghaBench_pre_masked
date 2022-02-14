
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static const char *FUNC_0(unsigned int VAR_8)
{
 if (VAR_8 & VAR_2)
  return "host bus error";
 if (VAR_8 & VAR_0)
  return "ATA bus error";
 if (VAR_8 & VAR_7)
  return "timeout";
 if (VAR_8 & VAR_3)
  return "HSM violation";
 if (VAR_8 & VAR_6)
  return "internal error";
 if (VAR_8 & VAR_5)
  return "media error";
 if (VAR_8 & VAR_4)
  return "invalid argument";
 if (VAR_8 & VAR_1)
  return "device error";
 return "unknown error";
}
