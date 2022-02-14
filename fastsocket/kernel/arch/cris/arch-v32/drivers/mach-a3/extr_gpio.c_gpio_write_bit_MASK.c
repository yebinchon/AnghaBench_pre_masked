
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (unsigned long*) ;
 int FUNC_1 (unsigned long,unsigned long*) ;

__attribute__((used)) static void FUNC_2(unsigned long *VAR_0, unsigned char VAR_1, int VAR_2,
 unsigned char VAR_3, unsigned char VAR_4)
{
 unsigned long VAR_5 = FUNC_0(VAR_0) & ~VAR_3;
 FUNC_1(VAR_5, VAR_0);
 if (VAR_1 & 1 << VAR_2)
  VAR_5 |= VAR_4;
 else
  VAR_5 &= ~VAR_4;
 FUNC_1(VAR_5, VAR_0);

 VAR_5 |= VAR_3;
 FUNC_1(VAR_5, VAR_0);
}
