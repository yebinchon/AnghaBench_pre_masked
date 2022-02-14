
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int coutPolarity; int autoLoadResetRcap; int hwCtEnableSource; int ctEnableCtrl; int clockSource; int countDir; int countDirCtrl; int preloadRegSel; int reserved; int outputRegLatchCtrl; int coutSource; } ;
union cmReg {short value; TYPE_2__ reg; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int* data; int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* s526_gpct_config; } ;
struct TYPE_4__ {int* data; int app; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
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
 TYPE_3__* VAR_16 ;
 int FUNC_2 (short,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_17,
     struct comedi_subdevice *VAR_18,
     struct comedi_insn *VAR_19, unsigned int *VAR_20)
{
 int VAR_21 = FUNC_1(VAR_19->chanspec);
 int VAR_22;
 short VAR_23;
 union cmReg VAR_24;



 for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
  VAR_16->s526_gpct_config[VAR_21].data[VAR_22] =
      VAR_19->data[VAR_22];

 }



 switch (VAR_19->data[0]) {
 case 129:






  FUNC_3("s526: GPCT_INSN_CONFIG: Configuring Encoder\n");
  VAR_16->s526_gpct_config[VAR_21].app =
      VAR_9;
  VAR_24.value = VAR_19->data[1] & 0xFFFF;


  FUNC_2(VAR_24.value, FUNC_0(VAR_14, VAR_21));


  if (VAR_24.reg.autoLoadResetRcap == 0) {
   FUNC_2(0x8000, FUNC_0(VAR_11, VAR_21));

  }
  break;

 case 128:







  FUNC_3("s526: GPCT_INSN_CONFIG: Configuring SPG\n");
  VAR_16->s526_gpct_config[VAR_21].app =
      VAR_15;


  VAR_24.value = (short)(VAR_19->data[1] & 0xFFFF);
  VAR_24.reg.preloadRegSel = 0;
  FUNC_2(VAR_24.value, FUNC_0(VAR_14, VAR_21));


  VAR_23 = (short)((VAR_19->data[2] >> 16) & 0xFFFF);
  FUNC_2(VAR_23, FUNC_0(VAR_12, VAR_21));


  VAR_23 = (short)(VAR_19->data[2] & 0xFFFF);
  FUNC_2(VAR_23, FUNC_0(VAR_13, VAR_21));


  VAR_24.value = (short)(VAR_19->data[1] & 0xFFFF);
  VAR_24.reg.preloadRegSel = 1;
  FUNC_2(VAR_24.value, FUNC_0(VAR_14, VAR_21));


  VAR_23 = (short)((VAR_19->data[3] >> 16) & 0xFFFF);
  FUNC_2(VAR_23, FUNC_0(VAR_12, VAR_21));


  VAR_23 = (short)(VAR_19->data[3] & 0xFFFF);
  FUNC_2(VAR_23, FUNC_0(VAR_13, VAR_21));


  if (VAR_19->data[4] != 0) {
   VAR_23 = (short)(VAR_19->data[4] & 0xFFFF);
   FUNC_2(VAR_23, FUNC_0(VAR_11, VAR_21));
  }
  break;

 case 130:







  FUNC_3("s526: GPCT_INSN_CONFIG: Configuring PTG\n");
  VAR_16->s526_gpct_config[VAR_21].app =
      VAR_10;


  VAR_24.value = (short)(VAR_19->data[1] & 0xFFFF);
  VAR_24.reg.preloadRegSel = 0;
  FUNC_2(VAR_24.value, FUNC_0(VAR_14, VAR_21));


  VAR_23 = (short)((VAR_19->data[2] >> 16) & 0xFFFF);
  FUNC_2(VAR_23, FUNC_0(VAR_12, VAR_21));


  VAR_23 = (short)(VAR_19->data[2] & 0xFFFF);
  FUNC_2(VAR_23, FUNC_0(VAR_13, VAR_21));


  VAR_24.value = (short)(VAR_19->data[1] & 0xFFFF);
  VAR_24.reg.preloadRegSel = 1;
  FUNC_2(VAR_24.value, FUNC_0(VAR_14, VAR_21));


  VAR_23 = (short)((VAR_19->data[3] >> 16) & 0xFFFF);
  FUNC_2(VAR_23, FUNC_0(VAR_12, VAR_21));


  VAR_23 = (short)(VAR_19->data[3] & 0xFFFF);
  FUNC_2(VAR_23, FUNC_0(VAR_13, VAR_21));


  if (VAR_19->data[4] != 0) {
   VAR_23 = (short)(VAR_19->data[4] & 0xFFFF);
   FUNC_2(VAR_23, FUNC_0(VAR_11, VAR_21));
  }
  break;

 default:
  FUNC_3("s526: unsupported GPCT_insn_config\n");
  return -VAR_0;
  break;
 }

 return VAR_19->n;
}
