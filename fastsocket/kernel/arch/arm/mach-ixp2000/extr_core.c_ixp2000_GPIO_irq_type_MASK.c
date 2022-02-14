
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_10, unsigned int VAR_11)
{
 int VAR_12 = VAR_10 - VAR_4;




 FUNC_0(VAR_9, 1 << VAR_12);




 if (VAR_11 & VAR_5)
  VAR_0 |= 1 << VAR_12;
 else
  VAR_0 &= ~(1 << VAR_12);
 if (VAR_11 & VAR_6)
  VAR_3 |= 1 << VAR_12;
 else
  VAR_3 &= ~(1 << VAR_12);
 if (VAR_11 & VAR_8)
  VAR_2 |= 1 << VAR_12;
 else
  VAR_2 &= ~(1 << VAR_12);
 if (VAR_11 & VAR_7)
  VAR_1 |= 1 << VAR_12;
 else
  VAR_1 &= ~(1 << VAR_12);
 FUNC_1();

 return 0;
}
