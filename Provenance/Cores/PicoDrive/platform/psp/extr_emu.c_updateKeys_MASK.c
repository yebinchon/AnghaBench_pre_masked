
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int* VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
 unsigned int VAR_10, VAR_11[2] = { 0, 0 }, VAR_12;
 static unsigned int VAR_13 = 0;
 int VAR_14;


 VAR_10 = FUNC_5(0);
 if (VAR_10 & VAR_4)
  FUNC_6();

 if (VAR_10 & VAR_2)
  VAR_7 = VAR_3;

 VAR_10 &= VAR_0;

 VAR_6[0] = VAR_11[0] & 0xfff;
 VAR_6[1] = VAR_11[1] & 0xfff;

 if (VAR_11[0] & 0x7000) FUNC_2(&VAR_6[0], VAR_11[0]);
 if (VAR_11[1] & 0x7000) FUNC_2(&VAR_6[1], VAR_11[1]);

 VAR_12 = (VAR_11[0] | VAR_11[1]) >> 16;

 if ((VAR_12 ^ VAR_13) & 0x40) {
  FUNC_3(VAR_12 & 0x40);
  VAR_9 = 1;
 }

 VAR_12 &= ~VAR_13;

 if (VAR_5 == VAR_1)
  FUNC_1(VAR_12, VAR_10);
 if (VAR_12) FUNC_0(VAR_12);
 if (VAR_8) FUNC_4();

 VAR_13 = (VAR_11[0] | VAR_11[1]) >> 16;
}
