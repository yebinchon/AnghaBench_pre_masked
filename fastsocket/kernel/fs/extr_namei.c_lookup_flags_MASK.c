
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_4)
{
 unsigned long VAR_5 = VAR_1;

 if (VAR_4 & VAR_3)
  VAR_5 &= ~VAR_1;

 if (VAR_4 & VAR_2)
  VAR_5 |= VAR_0;

 return VAR_5;
}
