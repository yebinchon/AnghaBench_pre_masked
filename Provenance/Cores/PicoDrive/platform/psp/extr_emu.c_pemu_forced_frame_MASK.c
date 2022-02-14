
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int EmuOpt; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_4 () ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 (int*,int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;

void FUNC_9(int VAR_10, int VAR_11)
{
 int VAR_12 = VAR_6;
 int VAR_13 = VAR_8.EmuOpt;

 VAR_6 &= ~VAR_4;
 VAR_6 |= VAR_3;
 if (!VAR_10)
  VAR_6 |= VAR_5;
 VAR_8.EmuOpt |= 0x80;

 FUNC_8();
 FUNC_5(VAR_7, 0xe0e0e0e0, 512*8/4);
 FUNC_5((int *)VAR_7 + 512*232/4, 0xe0e0e0e0, 512*8/4);
 FUNC_6((int *)VAR_9 + 512*264*2/4, 0, 512*8*2/4);

 FUNC_2(VAR_2, 0);
 FUNC_1(VAR_0, VAR_1);
 FUNC_0();
 FUNC_3();
 FUNC_4();
 FUNC_7(0,0);

 VAR_6 = VAR_12;
 VAR_8.EmuOpt = VAR_13;
}
