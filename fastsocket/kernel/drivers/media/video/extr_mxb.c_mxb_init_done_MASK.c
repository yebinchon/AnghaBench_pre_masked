
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef struct tuner_setup* v4l2_std_id ;
struct tuner_setup {int frequency; int type; scalar_t__ tuner; int addr; int mode_mask; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {size_t cur_input; int cur_mute; int i2c_adapter; int cur_mode; struct tuner_setup cur_freq; } ;
struct i2c_msg {int addr; int len; int * buf; scalar_t__ flags; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int hps_sync; int hps_source; } ;
struct TYPE_4__ {int length; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
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
 struct tuner_setup* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_3__ VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int *,struct i2c_msg*,int) ;
 TYPE_2__* VAR_20 ;
 TYPE_1__* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (struct mxb*,int ,int ,struct tuner_setup*,...) ;
 int FUNC_4 (struct saa7146_dev*,int ,int ) ;
 int FUNC_5 (struct saa7146_dev*,int ,int) ;
 int FUNC_6 (struct mxb*,int ,int ,int,int,int ) ;
 int FUNC_7 (struct mxb*,int) ;
 int FUNC_8 (struct mxb*,int) ;
 int VAR_26 ;
 int FUNC_9 (struct mxb*,int ,int ,struct tuner_setup*) ;
 int VAR_27 ;

__attribute__((used)) static int FUNC_10(struct saa7146_dev* VAR_28)
{
 struct mxb* VAR_29 = (struct mxb*)VAR_28->ext_priv;
 struct i2c_msg VAR_30;
 struct tuner_setup VAR_31;
 v4l2_std_id VAR_32 = VAR_14;

 int VAR_33 = 0, VAR_34 = 0;


 FUNC_3(VAR_29, VAR_17, VAR_24, VAR_32);


 VAR_33 = 0;
 FUNC_3(VAR_29, VAR_27, VAR_23, VAR_10,
  VAR_8 | VAR_9, 0);


 VAR_31.mode_mask = VAR_13;
 VAR_31.addr = VAR_0;
 VAR_31.type = VAR_12;
 FUNC_9(VAR_29, VAR_26, VAR_25, &VAR_31);

 VAR_29->cur_freq.tuner = 0;
 VAR_29->cur_freq.type = VAR_15;
 VAR_29->cur_freq.frequency = VAR_19;
 FUNC_9(VAR_29, VAR_26, VAR_22, &VAR_29->cur_freq);


 FUNC_9(VAR_29, VAR_17, VAR_24, VAR_32);


 FUNC_8(VAR_29, 6);
 FUNC_7(VAR_29, 6);


 FUNC_6(VAR_29, VAR_27, VAR_23, 3, 17, 0);


 FUNC_6(VAR_29, VAR_27, VAR_23, 3, 13, 0);


 VAR_29->cur_input = 0;
 VAR_29->cur_mute = 1;

 VAR_29->cur_mode = VAR_16;





 VAR_30.addr = 0x1b;
 VAR_30.flags = 0;
 VAR_30.len = VAR_21[0].length;
 VAR_30.buf = &VAR_21[0].data[0];

 VAR_34 = FUNC_2(&VAR_29->i2c_adapter, &VAR_30, 1);
 if (VAR_34 == 1) {





  VAR_18.flags &= ~VAR_11;
  for (VAR_33 = 1; ; VAR_33++) {
   if (-1 == VAR_21[VAR_33].length)
    break;

   VAR_30.len = VAR_21[VAR_33].length;
   VAR_30.buf = &VAR_21[VAR_33].data[0];
   VAR_34 = FUNC_2(&VAR_29->i2c_adapter, &VAR_30, 1);
   if (VAR_34 != 1) {
    FUNC_0(("failed to initialize 'sound arena module'.\n"));
    goto err;
   }
  }
  FUNC_1(("'sound arena module' detected.\n"));
 }
err:






 FUNC_4(VAR_28, VAR_20[VAR_29->cur_input].hps_source,
   VAR_20[VAR_29->cur_input].hps_sync);





 FUNC_5(VAR_28, VAR_2, 0x00000000);
 FUNC_5(VAR_28, VAR_1, 0x02000200);
 FUNC_5(VAR_28, VAR_7, (VAR_3 | VAR_5 | VAR_4 | VAR_6));

 return 0;
}
