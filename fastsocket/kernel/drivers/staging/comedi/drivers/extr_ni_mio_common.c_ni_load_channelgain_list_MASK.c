
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {int reg_type; int adbits; size_t gainlkup; } ;
struct TYPE_3__ {int changain_state; unsigned int changain_spec; int ai_calib_source_enabled; unsigned int ai_calib_source; unsigned int* ai_offset; int (* stc_writew ) (struct comedi_device*,int,int ) ;} ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;




 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;
 TYPE_1__* VAR_15 ;
 int FUNC_4 (int) ;
 unsigned int** VAR_16 ;
 int FUNC_5 (struct comedi_device*,unsigned int,unsigned int*) ;
 int FUNC_6 (struct comedi_device*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_20,
         unsigned int VAR_21, unsigned int *VAR_22)
{
 unsigned int VAR_23, VAR_24, VAR_25;
 unsigned int VAR_26;
 unsigned int VAR_27, VAR_28;
 unsigned VAR_29;
 unsigned int VAR_30;

 if (VAR_14.reg_type & VAR_19) {
  FUNC_5(VAR_20, VAR_21, VAR_22);
  return;
 }
 if (VAR_21 == 1 && (VAR_14.reg_type != VAR_17)
     && (VAR_14.reg_type != VAR_18)) {
  if (VAR_15->changain_state
      && VAR_15->changain_spec == VAR_22[0]) {

   return;
  }
  VAR_15->changain_state = 1;
  VAR_15->changain_spec = VAR_22[0];
 } else {
  VAR_15->changain_state = 0;
 }

 VAR_15->stc_writew(VAR_20, 1, VAR_11);


 if (VAR_14.reg_type == VAR_18) {
  if ((VAR_22[0] & VAR_6)
      && !VAR_15->ai_calib_source_enabled) {

   FUNC_7(VAR_15->ai_calib_source |
      VAR_9,
      VAR_7);
   FUNC_7(VAR_15->ai_calib_source,
      VAR_7);
   VAR_15->ai_calib_source_enabled = 1;
   FUNC_4(100);
  } else if (!(VAR_22[0] & VAR_6)
      && VAR_15->ai_calib_source_enabled) {

   FUNC_7(VAR_15->ai_calib_source |
      VAR_8,
      VAR_7);
   FUNC_7(VAR_15->ai_calib_source,
      VAR_7);
   VAR_15->ai_calib_source_enabled = 0;
   FUNC_4(100);
  }
 }

 VAR_29 = 1 << (VAR_14.adbits - 1);
 for (VAR_26 = 0; VAR_26 < VAR_21; VAR_26++) {
  if ((VAR_14.reg_type != VAR_18)
      && (VAR_22[VAR_26] & VAR_6)) {
   VAR_23 = VAR_15->ai_calib_source;
  } else {
   VAR_23 = FUNC_2(VAR_22[VAR_26]);
  }
  VAR_25 = FUNC_1(VAR_22[VAR_26]);
  VAR_24 = FUNC_3(VAR_22[VAR_26]);
  VAR_30 = ((VAR_22[VAR_26] & VAR_5) != 0);


  VAR_24 = VAR_16[VAR_14.gainlkup][VAR_24];
  if (VAR_14.reg_type == VAR_17)
   VAR_15->ai_offset[VAR_26] = VAR_29;
  else
   VAR_15->ai_offset[VAR_26] = (VAR_24 & 0x100) ? 0 : VAR_29;

  VAR_27 = 0;
  if ((VAR_22[VAR_26] & VAR_6)) {
   if (VAR_14.reg_type == VAR_17)
    FUNC_7(FUNC_2(VAR_22[VAR_26]) & 0x0003,
       VAR_10);
  } else {
   if (VAR_14.reg_type == VAR_17)
    VAR_25 = 130;
   else if (VAR_14.reg_type == VAR_18)
    VAR_25 = 128;
   switch (VAR_25) {
   case 130:
    VAR_27 |= VAR_1;
    break;
   case 131:
    VAR_27 |= VAR_0;
    break;
   case 129:
    VAR_27 |= VAR_3;
    break;
   case 128:
    break;
   }
  }
  VAR_27 |= FUNC_0(VAR_23);

  FUNC_7(VAR_27, VAR_12);

  if (VAR_14.reg_type != VAR_18) {
   VAR_28 = VAR_24;
   if (VAR_26 == VAR_21 - 1)
    VAR_28 |= VAR_4;
   if (VAR_30)
    VAR_28 |= VAR_2;

   FUNC_7(VAR_28, VAR_13);
  }
 }


 if ((VAR_14.reg_type != VAR_17)
     && (VAR_14.reg_type != VAR_18)) {
  FUNC_6(VAR_20);
 }
}
