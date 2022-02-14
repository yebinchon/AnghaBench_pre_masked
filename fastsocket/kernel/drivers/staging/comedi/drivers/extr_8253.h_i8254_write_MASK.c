
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 if (VAR_2 > 2)
  return;

 VAR_4 = VAR_3 & 0xff;
 FUNC_0(VAR_4, VAR_0 + (VAR_2 << VAR_1));
 VAR_4 = (VAR_3 >> 8) & 0xff;
 FUNC_0(VAR_4, VAR_0 + (VAR_2 << VAR_1));
}
