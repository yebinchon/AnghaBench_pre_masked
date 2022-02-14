
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
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_9, short VAR_10)
{
 unsigned int VAR_11[] = { VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 };
 unsigned long VAR_12, VAR_13;

 if (VAR_9 > VAR_6)
  return;

 FUNC_3(VAR_13);

 VAR_12 = FUNC_0(VAR_7 + VAR_8);
 if (VAR_10)
  VAR_12 &= ~VAR_11[VAR_9];
 else
  VAR_12 |= VAR_11[VAR_9];
 FUNC_1(VAR_12, VAR_7 + VAR_8);

 FUNC_2(VAR_13);
}
