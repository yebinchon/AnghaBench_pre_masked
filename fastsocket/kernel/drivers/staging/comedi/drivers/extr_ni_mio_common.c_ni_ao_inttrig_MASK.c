
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_6__ {int reg_type; } ;
struct TYPE_5__ {int ao_mode3; int (* stc_readw ) (struct comedi_device*,int ) ;int ao_cmd1; int ao_cmd2; int (* stc_writew ) (struct comedi_device*,int,int ) ;} ;
struct TYPE_4__ {int * inttrig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_3__ VAR_22 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_23 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*,int,int ) ;
 int VAR_24 ;
 int FUNC_5 (struct comedi_device*,int ,int,int) ;
 int FUNC_6 (struct comedi_device*,int,int ) ;
 int FUNC_7 (struct comedi_device*,int,int ) ;
 int FUNC_8 (struct comedi_device*,int,int ) ;
 int FUNC_9 (struct comedi_device*,int ) ;
 int FUNC_10 (struct comedi_device*,int,int ) ;
 int FUNC_11 (struct comedi_device*,int,int ) ;
 int FUNC_12 (struct comedi_device*,int,int ) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct comedi_device *VAR_25, struct comedi_subdevice *VAR_26,
    unsigned int VAR_27)
{
 int VAR_28;
 int VAR_29;
 int VAR_30;
 static const int VAR_31 = 1000;

 if (VAR_27 != 0)
  return -VAR_16;




 VAR_26->async->inttrig = ((void*)0);

 FUNC_5(VAR_25, VAR_20,
      VAR_7 | VAR_6, 0);
 VAR_29 = VAR_6;
 VAR_28 = FUNC_1(VAR_25, VAR_26);
 if (VAR_28 == 0)
  return -VAR_18;

 VAR_29 |= VAR_7;


 VAR_23->stc_writew(VAR_25, VAR_23->ao_mode3 | VAR_10,
       VAR_9);
 VAR_23->stc_writew(VAR_25, VAR_23->ao_mode3, VAR_9);

 for (VAR_30 = 0; VAR_30 < VAR_31; VAR_30++) {
  FUNC_13(1);
  if ((VAR_23->stc_readw(VAR_25,
     VAR_21) &
       VAR_12) == 0)
   break;
 }
 if (VAR_30 == VAR_31) {
  FUNC_0(VAR_25,
        "timed out waiting for AO_TMRDACWRs_In_Progress_St to clear");
  return -VAR_17;
 }

 VAR_23->stc_writew(VAR_25, VAR_5,
       VAR_19);

 FUNC_5(VAR_25, VAR_20, VAR_29, 1);

 VAR_23->stc_writew(VAR_25,
       VAR_23->ao_cmd1 | VAR_14 | VAR_13 | VAR_0
       | VAR_4 | VAR_3,
       VAR_1);

 VAR_23->stc_writew(VAR_25, VAR_23->ao_cmd2 | VAR_11,
       VAR_2);

 return 0;
}
