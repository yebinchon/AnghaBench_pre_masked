
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {size_t gainlkup; int reg_type; } ;
struct TYPE_3__ {unsigned int ai_calib_source; unsigned int* ai_offset; int (* stc_writew ) (struct comedi_device*,int,int ) ;} ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_4 (int ,unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int FUNC_6 (unsigned int) ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_2__ VAR_18 ;
 TYPE_1__* VAR_19 ;
 unsigned int** VAR_20 ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (unsigned int,int ) ;
 int FUNC_9 (unsigned int,int ) ;
 int FUNC_10 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_11(struct comedi_device *VAR_21,
           unsigned int VAR_22,
           unsigned int *VAR_23)
{
 unsigned int VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27;
 unsigned VAR_28;
 unsigned int VAR_29;
 unsigned VAR_30;

 VAR_19->stc_writew(VAR_21, 1, VAR_2);


 if ((VAR_23[0] & VAR_1)) {
  unsigned VAR_31;
  VAR_24 = FUNC_1(VAR_23[0]);
  VAR_25 = FUNC_2(VAR_23[0]);
  VAR_30 = VAR_20[VAR_18.gainlkup][VAR_25];
  VAR_29 = ((VAR_23[0] & VAR_0) != 0);
  VAR_31 = VAR_5;
  VAR_31 |= VAR_24;
  VAR_31 |=
      (VAR_19->ai_calib_source) &
      (VAR_4 |
       VAR_3 |
       VAR_7 |
       VAR_15);
  VAR_31 |= FUNC_3(VAR_30);
  if (VAR_29)
   VAR_31 |= VAR_6;

  VAR_31 |= VAR_8;
  FUNC_8(VAR_31, VAR_16);
 } else {
  FUNC_8(0, VAR_16);
 }
 VAR_28 = 0;
 for (VAR_27 = 0; VAR_27 < VAR_22; VAR_27++) {
  unsigned VAR_32 = 0;
  VAR_24 = FUNC_1(VAR_23[VAR_27]);
  VAR_26 = FUNC_0(VAR_23[VAR_27]);
  VAR_25 = FUNC_2(VAR_23[VAR_27]);
  VAR_29 = ((VAR_23[VAR_27] & VAR_0) != 0);

  VAR_30 = VAR_20[VAR_18.gainlkup][VAR_25];
  VAR_19->ai_offset[VAR_27] = VAR_28;
  switch (VAR_26) {
  case 130:
   VAR_32 |=
       VAR_10;
   break;
  case 131:
   VAR_32 |=
       VAR_9;
   break;
  case 129:
   VAR_32 |=
       VAR_11;
   break;
  case 128:
   break;
  }
  VAR_32 |= FUNC_5(VAR_24);
  VAR_32 |=
      FUNC_4(VAR_18.reg_type, VAR_24);
  VAR_32 |= FUNC_6(VAR_30);
  if (VAR_27 == VAR_22 - 1)
   VAR_32 |= VAR_13;
  if (VAR_29)
   VAR_32 |= VAR_12;

  VAR_32 |= VAR_14;
  FUNC_9(VAR_32, VAR_17);
 }
 FUNC_7(VAR_21);
}
