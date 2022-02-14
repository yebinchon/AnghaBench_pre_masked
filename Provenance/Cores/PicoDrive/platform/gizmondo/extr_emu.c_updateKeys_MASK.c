
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int volume; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,int) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int* VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (unsigned int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (unsigned int*,unsigned int) ;
 int FUNC_5 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void FUNC_7(void)
{
 unsigned int VAR_10, VAR_11[2] = { 0, 0 }, VAR_12;
 static unsigned int VAR_13 = 0;
 int VAR_14;


 VAR_10 = FUNC_1();
 if (VAR_10 & VAR_1)
  VAR_6 = VAR_2;

 VAR_10 &= VAR_0;

 VAR_3[0] = VAR_11[0] & 0xfff;
 VAR_3[1] = VAR_11[1] & 0xfff;

 if (VAR_11[0] & 0x7000) FUNC_4(&VAR_3[0], VAR_11[0]);
 if (VAR_11[1] & 0x7000) FUNC_4(&VAR_3[1], VAR_11[1]);

 VAR_12 = (VAR_11[0] | VAR_11[1]) >> 16;


 if ((VAR_12 & 0x6000) && VAR_4 != ((void*)0))
 {
  int VAR_15 = VAR_5.volume;
  if (VAR_12 & 0x2000) {
   if (VAR_15 < 100) VAR_15++;
  } else {
   if (VAR_15 > 0) VAR_15--;
  }
  FUNC_0(VAR_15, VAR_15);
  FUNC_6(VAR_8, "VOL: %02i ", VAR_15);
  VAR_9 = FUNC_2();
  VAR_5.volume = VAR_15;
 }

 VAR_12 &= ~VAR_13;
 if (VAR_12) FUNC_3(VAR_12);
 if (VAR_7) FUNC_5();

 VAR_13 = (VAR_11[0] | VAR_11[1]) >> 16;
}
