
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ reg_type; } ;
struct TYPE_3__ {int (* stc_writew ) (struct comedi_device*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int FUNC_3 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int FUNC_4 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 TYPE_2__ VAR_36 ;
 TYPE_1__* VAR_37 ;
 int FUNC_5 (struct comedi_device*) ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct comedi_device*,int ,int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct comedi_device*,int,int ) ;
 int FUNC_10 (struct comedi_device*,int,int ) ;
 int FUNC_11 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_12 (struct comedi_device*,int,int ) ;
 int FUNC_13 (struct comedi_device*,int,int ) ;
 int FUNC_14 (struct comedi_device*,int,int ) ;
 int FUNC_15 (struct comedi_device*,int,int ) ;
 int FUNC_16 (struct comedi_device*,int,int ) ;
 int FUNC_17 (struct comedi_device*,int,int ) ;
 int FUNC_18 (struct comedi_device*,int,int ) ;
 int FUNC_19 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_20 (struct comedi_device*,int,int ) ;
 int FUNC_21 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_22(struct comedi_device *VAR_41, struct comedi_subdevice *VAR_42)
{
 FUNC_6(VAR_41);

 VAR_37->stc_writew(VAR_41, VAR_5 | VAR_17,
       VAR_34);

 FUNC_7(VAR_41, VAR_33,
      VAR_20 | VAR_24 |
      VAR_26 | VAR_28 |
      VAR_30 | VAR_8 |
      VAR_9, 0);

 FUNC_5(VAR_41);

 if (VAR_36.reg_type != VAR_39)
  FUNC_8(0, VAR_35);

 VAR_37->stc_writew(VAR_41, VAR_6, VAR_3);
 VAR_37->stc_writew(VAR_41,
       VAR_31 | VAR_12
                              ,
       VAR_11);
 VAR_37->stc_writew(VAR_41, 0x0000, VAR_13);

 VAR_37->stc_writew(VAR_41, (0 << 6) | 0x0000, VAR_14);
 if (VAR_36.reg_type == VAR_38) {
  VAR_37->stc_writew(VAR_41, VAR_21 |
        VAR_22 |
        VAR_10,
        VAR_16);
  VAR_37->stc_writew(VAR_41,
        FUNC_3(3) |
        FUNC_1(0) |
        FUNC_2(2) |
        FUNC_4(3) |
        FUNC_0
        (VAR_0),
        VAR_15);
 } else if (VAR_36.reg_type == VAR_39) {
  VAR_37->stc_writew(VAR_41, VAR_21 |
        VAR_22 |
        VAR_10,
        VAR_16);
  VAR_37->stc_writew(VAR_41,
        FUNC_3(3) |
        FUNC_1(0) |
        FUNC_2(2) |
        FUNC_4(3) |
        FUNC_0
        (VAR_1),
        VAR_15);
 } else {
  unsigned VAR_43;
  VAR_37->stc_writew(VAR_41, VAR_21 |
        VAR_22 |
        VAR_2 |
        VAR_10,
        VAR_16);
  VAR_43 =
      FUNC_3(3) |
      FUNC_1(0) |
      FUNC_2(2) |
      FUNC_4(3);
  if (VAR_36.reg_type == VAR_40)
   VAR_43 |=
       FUNC_0
       (VAR_0);
  else
   VAR_43 |=
       FUNC_0
       (VAR_1);
  VAR_37->stc_writew(VAR_41, VAR_43,
        VAR_15);
 }
 VAR_37->stc_writew(VAR_41, VAR_18 | VAR_27 | VAR_25 | VAR_23 | VAR_19 | VAR_7 | VAR_29, VAR_32);

 VAR_37->stc_writew(VAR_41, VAR_4, VAR_34);

 return 0;
}
