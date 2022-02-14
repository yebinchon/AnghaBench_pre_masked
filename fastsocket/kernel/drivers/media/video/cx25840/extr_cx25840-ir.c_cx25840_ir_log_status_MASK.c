
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {struct i2c_client* c; } ;


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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 scalar_t__ FUNC_3 (struct cx25840_state*) ;
 scalar_t__ FUNC_4 (struct cx25840_state*) ;
 scalar_t__ FUNC_5 (struct cx25840_state*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 struct cx25840_state* FUNC_10 (struct v4l2_subdev*) ;
 int FUNC_11 (struct v4l2_subdev*,char*,...) ;

int FUNC_12(struct v4l2_subdev *VAR_36)
{
 struct cx25840_state *VAR_37 = FUNC_10(VAR_36);
 struct i2c_client *VAR_38 = VAR_37->c;
 char *VAR_39;
 int VAR_40, VAR_41;
 u32 VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48;


 if (FUNC_5(VAR_37))
  return 0;

 VAR_42 = FUNC_2(VAR_38, VAR_15);
 VAR_43 = FUNC_2(VAR_38, VAR_20) & VAR_35;
 VAR_44 = FUNC_2(VAR_38, VAR_18) & VAR_28;
 VAR_45 = FUNC_2(VAR_38, VAR_14) & VAR_0;
 VAR_46 = FUNC_2(VAR_38, VAR_19);
 VAR_47 = FUNC_2(VAR_38, VAR_17);
 if (FUNC_3(VAR_37) || FUNC_4(VAR_37))
  VAR_47 ^= VAR_23;
 VAR_48 = FUNC_2(VAR_38, VAR_16) & VAR_22;

 FUNC_11(VAR_36, "IR Receiver:\n");
 FUNC_11(VAR_36, "\tEnabled:                           %s\n",
    VAR_42 & VAR_9 ? "yes" : "no");
 FUNC_11(VAR_36, "\tDemodulation from a carrier:       %s\n",
    VAR_42 & VAR_2 ? "enabled" : "disabled");
 FUNC_11(VAR_36, "\tFIFO:                              %s\n",
    VAR_42 & VAR_7 ? "enabled" : "disabled");
 switch (VAR_42 & VAR_3) {
 case 133:
  VAR_39 = "disabled";
  break;
 case 134:
  VAR_39 = "falling edge";
  break;
 case 132:
  VAR_39 = "rising edge";
  break;
 case 135:
  VAR_39 = "rising & falling edges";
  break;
 default:
  VAR_39 = "??? edge";
  break;
 }
 FUNC_11(VAR_36, "\tPulse timers' start/stop trigger:  %s\n", VAR_39);
 FUNC_11(VAR_36, "\tFIFO data on pulse timer overflow: %s\n",
    VAR_42 & VAR_6 ? "not loaded" : "overflow marker");
 FUNC_11(VAR_36, "\tFIFO interrupt watermark:          %s\n",
    VAR_42 & VAR_8 ? "not empty" : "half full or greater");
 FUNC_11(VAR_36, "\tLoopback mode:                     %s\n",
    VAR_42 & VAR_4 ? "loopback active" : "normal receive");
 if (VAR_42 & VAR_2) {
  FUNC_11(VAR_36, "\tExpected carrier (16 clocks):      %u Hz\n",
     FUNC_0(VAR_44));
  switch (VAR_42 & VAR_13) {
  case 131:
   VAR_40 = 3;
   VAR_41 = 3;
   break;
  case 129:
   VAR_40 = 4;
   VAR_41 = 3;
   break;
  case 130:
   VAR_40 = 3;
   VAR_41 = 4;
   break;
  case 128:
   VAR_40 = 4;
   VAR_41 = 4;
   break;
  default:
   VAR_40 = 0;
   VAR_41 = 0;
   break;
  }
  FUNC_11(VAR_36, "\tNext carrier edge window:          16 clocks "
     "-%1d/+%1d, %u to %u Hz\n", VAR_40, VAR_41,
     FUNC_1(VAR_44, 16 + VAR_41),
     FUNC_1(VAR_44, 16 - VAR_40));
 }
 FUNC_11(VAR_36, "\tMax measurable pulse width:        %u us, %llu ns\n",
    FUNC_9(VAR_21, VAR_44),
    FUNC_8(VAR_21, VAR_44));
 FUNC_11(VAR_36, "\tLow pass filter:                   %s\n",
    VAR_48 ? "enabled" : "disabled");
 if (VAR_48)
  FUNC_11(VAR_36, "\tMin acceptable pulse width (LPF):  %u us, "
     "%u ns\n",
     FUNC_7(VAR_48),
     FUNC_6(VAR_48));
 FUNC_11(VAR_36, "\tPulse width timer timed-out:       %s\n",
    VAR_46 & VAR_32 ? "yes" : "no");
 FUNC_11(VAR_36, "\tPulse width timer time-out intr:   %s\n",
    VAR_47 & VAR_26 ? "enabled" : "disabled");
 FUNC_11(VAR_36, "\tFIFO overrun:                      %s\n",
    VAR_46 & VAR_30 ? "yes" : "no");
 FUNC_11(VAR_36, "\tFIFO overrun interrupt:            %s\n",
    VAR_47 & VAR_24 ? "enabled" : "disabled");
 FUNC_11(VAR_36, "\tBusy:                              %s\n",
    VAR_46 & VAR_29 ? "yes" : "no");
 FUNC_11(VAR_36, "\tFIFO service requested:            %s\n",
    VAR_46 & VAR_31 ? "yes" : "no");
 FUNC_11(VAR_36, "\tFIFO service request interrupt:    %s\n",
    VAR_47 & VAR_25 ? "enabled" : "disabled");

 FUNC_11(VAR_36, "IR Transmitter:\n");
 FUNC_11(VAR_36, "\tEnabled:                           %s\n",
    VAR_42 & VAR_12 ? "yes" : "no");
 FUNC_11(VAR_36, "\tModulation onto a carrier:         %s\n",
    VAR_42 & VAR_5 ? "enabled" : "disabled");
 FUNC_11(VAR_36, "\tFIFO:                              %s\n",
    VAR_42 & VAR_10 ? "enabled" : "disabled");
 FUNC_11(VAR_36, "\tFIFO interrupt watermark:          %s\n",
    VAR_42 & VAR_11 ? "not empty" : "half full or less");
 FUNC_11(VAR_36, "\tCarrier polarity:                  %s\n",
    VAR_42 & VAR_1 ? "space:burst mark:noburst"
        : "space:noburst mark:burst");
 if (VAR_42 & VAR_5) {
  FUNC_11(VAR_36, "\tCarrier (16 clocks):               %u Hz\n",
     FUNC_0(VAR_43));
  FUNC_11(VAR_36, "\tCarrier duty cycle:                %2u/16\n",
     VAR_45 + 1);
 }
 FUNC_11(VAR_36, "\tMax pulse width:                   %u us, %llu ns\n",
    FUNC_9(VAR_21, VAR_43),
    FUNC_8(VAR_21, VAR_43));
 FUNC_11(VAR_36, "\tBusy:                              %s\n",
    VAR_46 & VAR_33 ? "yes" : "no");
 FUNC_11(VAR_36, "\tFIFO service requested:            %s\n",
    VAR_46 & VAR_34 ? "yes" : "no");
 FUNC_11(VAR_36, "\tFIFO service request interrupt:    %s\n",
    VAR_47 & VAR_27 ? "enabled" : "disabled");

 return 0;
}
