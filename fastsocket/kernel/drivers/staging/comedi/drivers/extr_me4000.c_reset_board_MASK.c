
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ me4000_regbase; scalar_t__ plx_regbase; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_1__* VAR_19 ;
 int FUNC_1 (struct comedi_device*,scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_20)
{
 unsigned long VAR_21;

 FUNC_0("In reset_board()\n");


 VAR_21 = FUNC_1(VAR_20, VAR_19->plx_regbase + VAR_17);
 VAR_21 |= 0x40000000;
 FUNC_2(VAR_20, VAR_21, VAR_19->plx_regbase + VAR_17);
 VAR_21 &= ~0x40000000;
 FUNC_2(VAR_20, VAR_21, VAR_19->plx_regbase + VAR_17);


 FUNC_2(VAR_20, 0x8000,
      VAR_19->me4000_regbase + VAR_4);
 FUNC_2(VAR_20, 0x8000,
      VAR_19->me4000_regbase + VAR_6);
 FUNC_2(VAR_20, 0x8000,
      VAR_19->me4000_regbase + VAR_8);
 FUNC_2(VAR_20, 0x8000,
      VAR_19->me4000_regbase + VAR_10);


 FUNC_2(VAR_20,
      VAR_0 | VAR_1,
      VAR_19->me4000_regbase + VAR_2);


 FUNC_2(VAR_20,
      VAR_11 | VAR_12,
      VAR_19->me4000_regbase + VAR_3);
 FUNC_2(VAR_20,
      VAR_11 | VAR_12,
      VAR_19->me4000_regbase + VAR_5);
 FUNC_2(VAR_20,
      VAR_11 | VAR_12,
      VAR_19->me4000_regbase + VAR_7);
 FUNC_2(VAR_20,
      VAR_11 | VAR_12,
      VAR_19->me4000_regbase + VAR_9);


 FUNC_2(VAR_20, 0x43, VAR_19->plx_regbase + VAR_18);


 FUNC_2(VAR_20, VAR_14,
      VAR_19->me4000_regbase + VAR_13);


 if (!(FUNC_1(VAR_20, VAR_19->me4000_regbase + VAR_16) & 0x1)) {
  FUNC_2(VAR_20, 0x1,
       VAR_19->me4000_regbase + VAR_15);
 }

 return 0;
}
