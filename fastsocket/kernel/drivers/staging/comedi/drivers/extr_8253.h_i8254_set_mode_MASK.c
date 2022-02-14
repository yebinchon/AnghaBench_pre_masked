
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,unsigned long) ;

__attribute__((used)) static inline int FUNC_1(unsigned long VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 if (VAR_5 > 2)
  return -1;
 if (VAR_6 > (VAR_1 | VAR_0))
  return -1;

 VAR_7 = VAR_5 << 6;
 VAR_7 |= 0x30;
 VAR_7 |= VAR_6;
 FUNC_0(VAR_7, VAR_3 + (VAR_2 << VAR_4));

 return 0;
}
