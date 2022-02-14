
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cx25840_ir_fifo_rec {int hw_fifo_data; } ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int dummy; } ;
struct cx25840_ir_state {int rx_kfifo; struct i2c_client* c; } ;


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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int VAR_28 ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 scalar_t__ FUNC_3 (struct cx25840_state*) ;
 scalar_t__ FUNC_4 (struct cx25840_state*) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ,unsigned char*,unsigned int) ;
 struct cx25840_ir_state* FUNC_7 (struct v4l2_subdev*) ;
 struct cx25840_state* FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (int,int ,struct v4l2_subdev*,char*,char*,char*,char*,char*,...) ;
 int FUNC_10 (struct v4l2_subdev*,char*) ;
 int FUNC_11 (struct v4l2_subdev*,int ,int*) ;

int FUNC_12(struct v4l2_subdev *VAR_29, u32 VAR_30, bool *VAR_31)
{
 struct cx25840_state *VAR_32 = FUNC_8(VAR_29);
 struct cx25840_ir_state *VAR_33 = FUNC_7(VAR_29);
 struct i2c_client *VAR_34 = ((void*)0);

 union cx25840_ir_fifo_rec VAR_35[VAR_8];
 unsigned int VAR_36, VAR_37, VAR_38;
 u32 VAR_39, VAR_40;
 int VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
 u32 VAR_50, VAR_51, VAR_52;

 *VAR_31 = 0;
 if (VAR_33 == ((void*)0))
  return -VAR_7;

 VAR_34 = VAR_33->c;


 if (!(FUNC_3(VAR_32) || FUNC_4(VAR_32)))
  return -VAR_7;

 VAR_50 = FUNC_0(VAR_34, VAR_2);
 VAR_51 = FUNC_0(VAR_34, VAR_4);
 if (FUNC_3(VAR_32) || FUNC_4(VAR_32))
  VAR_51 ^= VAR_10;
 VAR_52 = FUNC_0(VAR_34, VAR_6);

 VAR_41 = VAR_52 & VAR_20;
 VAR_42 = VAR_52 & VAR_17;
 VAR_43 = VAR_52 & VAR_18;
 VAR_44 = VAR_52 & VAR_16;

 VAR_45 = VAR_51 & VAR_14;
 VAR_46 = VAR_51 & VAR_12;
 VAR_47 = VAR_51 & VAR_13;
 VAR_48 = VAR_51 & VAR_11;

 FUNC_9(2, VAR_28, VAR_29, "IR IRQ Status:  %s %s %s %s %s %s\n",
   VAR_41 ? "tsr" : "   ", VAR_42 ? "rsr" : "   ",
   VAR_43 ? "rto" : "   ", VAR_44 ? "ror" : "   ",
   VAR_52 & VAR_19 ? "tby" : "   ",
   VAR_52 & VAR_15 ? "rby" : "   ");

 FUNC_9(2, VAR_28, VAR_29, "IR IRQ Enables: %s %s %s %s\n",
   VAR_45 ? "tse" : "   ", VAR_46 ? "rse" : "   ",
   VAR_47 ? "rte" : "   ", VAR_48 ? "roe" : "   ");




 if (VAR_45 && VAR_41) {
  FUNC_2(VAR_29, 0);
  VAR_39 = VAR_26;
  FUNC_11(VAR_29, VAR_27, &VAR_39);
  *VAR_31 = 1;
 }




 VAR_49 = 0;
 if ((VAR_46 && VAR_42) || (VAR_47 && VAR_43)) {





  for (VAR_36 = 0, VAR_40 = VAR_9;
       (VAR_40 & VAR_9) && !VAR_49; VAR_36 = 0) {
   for (VAR_37 = 0;
        (VAR_40 & VAR_9) && VAR_37 < VAR_8; VAR_37++) {
    VAR_40 = FUNC_0(VAR_34, VAR_3);
    VAR_35[VAR_36].hw_fifo_data = VAR_40 & ~VAR_9;
    VAR_36++;
   }
   if (VAR_36 == 0)
    break;
   VAR_37 = VAR_36 * sizeof(union cx25840_ir_fifo_rec);
   VAR_38 = FUNC_6(VAR_33->rx_kfifo,
         (unsigned char *) VAR_35, VAR_37);
   if (VAR_38 != VAR_37)
    VAR_49++;
  }
  *VAR_31 = 1;
 }

 VAR_39 = 0;
 VAR_40 = 0;
 if (VAR_49) {
  VAR_39 |= VAR_25;
  FUNC_10(VAR_29, "IR receiver software FIFO overrun\n");
 }
 if (VAR_48 && VAR_44) {




  VAR_40 |= VAR_0;
  VAR_39 |= VAR_23;
  FUNC_10(VAR_29, "IR receiver hardware FIFO overrun\n");
 }
 if (VAR_47 && VAR_43) {




  VAR_40 |= VAR_1;
  VAR_39 |= VAR_21;
 }
 if (VAR_40) {

  FUNC_1(VAR_34, VAR_2, VAR_50 & ~VAR_40);
  FUNC_1(VAR_34, VAR_2, VAR_50);
  *VAR_31 = 1;
 }
 if (FUNC_5(VAR_33->rx_kfifo) >= VAR_5 / 2)
  VAR_39 |= VAR_22;

 if (VAR_39)
  FUNC_11(VAR_29, VAR_24, &VAR_39);
 return 0;
}
