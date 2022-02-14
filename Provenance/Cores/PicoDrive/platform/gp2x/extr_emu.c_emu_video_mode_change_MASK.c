
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ scaling; scalar_t__ vscaling; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

void FUNC_4(int VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16 = 320, VAR_17 = 240;
 int VAR_18 = 0;

 if (VAR_8)
  return;

 VAR_11 = VAR_4;
 VAR_12 = 232;


 VAR_6 &= ~VAR_5;
 if (VAR_15 && VAR_7.scaling == VAR_0) {
  VAR_16 = 256;
  VAR_6 |= VAR_5;
  VAR_11 = VAR_4 - 64;
 }

 if (VAR_7.vscaling == VAR_0) {
  VAR_18 = VAR_13;
  VAR_17 = VAR_14;
  VAR_12 = VAR_13 + VAR_14 - 8;
 }

 FUNC_2(VAR_18, VAR_16, VAR_17);


 if (VAR_7.vscaling == VAR_1 && VAR_14 < 240) {
  VAR_10 = VAR_9 = VAR_14 / (240 - VAR_14);
  FUNC_0(VAR_2, VAR_3);
 }


 if (!FUNC_3())
  FUNC_1(0, 0xe0, 320*240);
 else
  FUNC_1(0, 0, 320*240*2);
}
