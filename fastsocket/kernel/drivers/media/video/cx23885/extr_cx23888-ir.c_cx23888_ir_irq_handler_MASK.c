
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cx23888_ir_fifo_rec {int hw_fifo_data; } ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx23888_ir_state {int rx_kfifo; struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;


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
 int FUNC_0 (struct cx23885_dev*,int ) ;
 int FUNC_1 (struct cx23885_dev*,int ,int) ;
 int VAR_26 ;
 int FUNC_2 (struct cx23885_dev*,int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ,unsigned char*,unsigned int) ;
 struct cx23888_ir_state* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int,int ,struct v4l2_subdev*,char*,char*,char*,char*,char*,...) ;
 int FUNC_7 (struct v4l2_subdev*,char*) ;
 int FUNC_8 (struct v4l2_subdev*,int ,int*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_27, u32 VAR_28,
      bool *VAR_29)
{
 struct cx23888_ir_state *VAR_30 = FUNC_5(VAR_27);
 struct cx23885_dev *VAR_31 = VAR_30->dev;

 u32 VAR_32 = FUNC_0(VAR_31, VAR_2);
 u32 VAR_33 = FUNC_0(VAR_31, VAR_4);
 u32 VAR_34 = FUNC_0(VAR_31, VAR_6);

 union cx23888_ir_fifo_rec VAR_35[VAR_7];
 unsigned int VAR_36, VAR_37, VAR_38;
 u32 VAR_39, VAR_40;
 int VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;

 VAR_41 = VAR_34 & VAR_18;
 VAR_42 = VAR_34 & VAR_15;
 VAR_43 = VAR_34 & VAR_16;
 VAR_44 = VAR_34 & VAR_14;

 VAR_45 = VAR_33 & VAR_12;
 VAR_46 = VAR_33 & VAR_10;
 VAR_47 = VAR_33 & VAR_11;
 VAR_48 = VAR_33 & VAR_9;

 *VAR_29 = 0;
 FUNC_6(2, VAR_26, VAR_27, "IRQ Status:  %s %s %s %s %s %s\n",
   VAR_41 ? "tsr" : "   ", VAR_42 ? "rsr" : "   ",
   VAR_43 ? "rto" : "   ", VAR_44 ? "ror" : "   ",
   VAR_34 & VAR_17 ? "tby" : "   ",
   VAR_34 & VAR_13 ? "rby" : "   ");

 FUNC_6(2, VAR_26, VAR_27, "IRQ Enables: %s %s %s %s\n",
   VAR_45 ? "tse" : "   ", VAR_46 ? "rse" : "   ",
   VAR_47 ? "rte" : "   ", VAR_48 ? "roe" : "   ");




 if (VAR_45 && VAR_41) {
  FUNC_2(VAR_31, 0);
  VAR_39 = VAR_24;
  FUNC_8(VAR_27, VAR_25, &VAR_39);
  *VAR_29 = 1;
 }




 VAR_49 = 0;
 if ((VAR_46 && VAR_42) || (VAR_47 && VAR_43)) {





  for (VAR_36 = 0, VAR_40 = VAR_8;
       (VAR_40 & VAR_8) && !VAR_49; VAR_36 = 0) {
   for (VAR_37 = 0;
        (VAR_40 & VAR_8) && VAR_37 < VAR_7; VAR_37++) {
    VAR_40 = FUNC_0(VAR_31, VAR_3);
    VAR_35[VAR_36].hw_fifo_data = VAR_40 & ~VAR_8;
    VAR_36++;
   }
   if (VAR_36 == 0)
    break;
   VAR_37 = VAR_36 * sizeof(u32);
   VAR_38 = FUNC_4(VAR_30->rx_kfifo,
          (unsigned char *) VAR_35, VAR_37);
   if (VAR_38 != VAR_37)
    VAR_49++;
  }
  *VAR_29 = 1;
 }

 VAR_39 = 0;
 VAR_40 = 0;
 if (VAR_49) {
  VAR_39 |= VAR_23;
  FUNC_7(VAR_27, "IR receiver software FIFO overrun\n");
 }
 if (VAR_48 && VAR_44) {




  VAR_40 |= VAR_0;
  VAR_39 |= VAR_21;
  FUNC_7(VAR_27, "IR receiver hardware FIFO overrun\n");
 }
 if (VAR_47 && VAR_43) {




  VAR_40 |= VAR_1;
  VAR_39 |= VAR_19;
 }
 if (VAR_40) {

  FUNC_1(VAR_31, VAR_2, VAR_32 & ~VAR_40);
  FUNC_1(VAR_31, VAR_2, VAR_32);
  *VAR_29 = 1;
 }

 if (FUNC_3(VAR_30->rx_kfifo) >= VAR_5 / 2)
  VAR_39 |= VAR_20;

 if (VAR_39)
  FUNC_8(VAR_27, VAR_22, &VAR_39);
 return 0;
}
