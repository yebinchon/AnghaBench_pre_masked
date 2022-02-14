
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {struct av7110* priv; } ;
struct TYPE_2__ {int mute_state; int AV_sync_state; int bypass_mode; int channel_select; int stream_source; void* play_state; } ;
struct av7110 {int playing; int * ipack; int aout; int arm_app; TYPE_1__ audiostate; int adac_type; } ;
struct audio_status {int dummy; } ;
struct audio_mixer {int volume_right; int volume_left; } ;
typedef int audio_stream_source_t ;
typedef int audio_channel_select_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;






 void* VAR_13 ;

 void* VAR_14 ;







 int VAR_15 ;


 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (struct av7110*,int) ;
 int FUNC_2 (struct av7110*,int ) ;
 int FUNC_3 (struct av7110*,int ) ;
 int FUNC_4 (struct av7110*,int ,int ,int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct av7110*,int ,int ) ;
 int FUNC_7 (int,char*,struct av7110*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct av7110*,int,int,int) ;
 int FUNC_10 (void*,TYPE_1__*,int) ;
 int FUNC_11 (struct av7110*,int ,int,int) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_30, struct file *VAR_31,
      unsigned int VAR_32, void *VAR_33)
{
 struct dvb_device *VAR_34 = VAR_31->private_data;
 struct av7110 *VAR_35 = VAR_34->priv;
 unsigned long VAR_36 = (unsigned long) VAR_33;
 int VAR_37 = 0;

 FUNC_7(1, "av7110:%p, cmd=%04x\n", VAR_35,VAR_32);

 if (((VAR_31->f_flags & VAR_25) == VAR_26) &&
     (VAR_32 != 141))
  return -VAR_23;

 switch (VAR_32) {
 case 128:
  if (VAR_35->audiostate.stream_source == VAR_15)
   VAR_37 = FUNC_3(VAR_35, VAR_27);
  else
   VAR_37 = FUNC_1(VAR_35, VAR_7);
  if (!VAR_37)
   VAR_35->audiostate.play_state = VAR_16;
  break;

 case 137:
  if (VAR_35->audiostate.stream_source == VAR_15)
   VAR_37 = FUNC_2(VAR_35, VAR_27);
  if (!VAR_37)
   VAR_37 = FUNC_1(VAR_35, VAR_12);
  if (!VAR_37)
   VAR_35->audiostate.play_state = VAR_14;
  break;

 case 138:
  VAR_37 = FUNC_1(VAR_35, VAR_7);
  if (!VAR_37)
   VAR_35->audiostate.play_state = VAR_13;
  break;

 case 143:
  if (VAR_35->audiostate.play_state == VAR_13) {
   VAR_35->audiostate.play_state = VAR_14;
   VAR_37 = FUNC_1(VAR_35, VAR_12 | VAR_8);
  }
  break;

 case 136:
  VAR_35->audiostate.stream_source = (audio_stream_source_t) VAR_36;
  break;

 case 131:
 {
  VAR_37 = FUNC_1(VAR_35, VAR_36 ? VAR_7 : VAR_12);
  if (!VAR_37)
   VAR_35->audiostate.mute_state = (int) VAR_36;
  break;
 }

 case 135:
  VAR_35->audiostate.AV_sync_state = (int) VAR_36;
  VAR_37 = FUNC_1(VAR_35, VAR_36 ? VAR_11 : VAR_10);
  break;

 case 134:
  if (FUNC_0(VAR_35->arm_app) < 0x2621)
   VAR_37 = -VAR_21;
  VAR_35->audiostate.bypass_mode = (int)VAR_36;
  break;

 case 145:
  VAR_35->audiostate.channel_select = (audio_channel_select_t) VAR_36;
  switch(VAR_35->audiostate.channel_select) {
  case 129:
   VAR_37 = FUNC_1(VAR_35, VAR_9);
   if (!VAR_37) {
    if (VAR_35->adac_type == VAR_19)
     FUNC_9(VAR_35, 0x20, 0x02, 0x49);
    else if (VAR_35->adac_type == VAR_20)
     FUNC_11(VAR_35, VAR_24, 0x0008, 0x0220);
   }
   break;
  case 140:
   VAR_37 = FUNC_1(VAR_35, VAR_5);
   if (!VAR_37) {
    if (VAR_35->adac_type == VAR_19)
     FUNC_9(VAR_35, 0x20, 0x02, 0x4a);
    else if (VAR_35->adac_type == VAR_20)
     FUNC_11(VAR_35, VAR_24, 0x0008, 0x0200);
   }
   break;
  case 139:
   VAR_37 = FUNC_1(VAR_35, VAR_6);
   if (!VAR_37) {
    if (VAR_35->adac_type == VAR_19)
     FUNC_9(VAR_35, 0x20, 0x02, 0x45);
    else if (VAR_35->adac_type == VAR_20)
     FUNC_11(VAR_35, VAR_24, 0x0008, 0x0210);
   }
   break;
  default:
   VAR_37 = -VAR_21;
   break;
  }
  break;

 case 141:
  FUNC_10(VAR_33, &VAR_35->audiostate, sizeof(struct audio_status));
  break;

 case 142:
  if (FUNC_0(VAR_35->arm_app) < 0x2621)
   *(unsigned int *)VAR_33 = VAR_2 | VAR_3 | VAR_4;
  else
   *(unsigned int *)VAR_33 = VAR_2 | VAR_1 | VAR_0 |
      VAR_3 | VAR_4;
  break;

 case 144:
  FUNC_8(&VAR_35->aout);
  FUNC_5(&VAR_35->ipack[0]);
  if (VAR_35->playing == VAR_28)
   VAR_37 = FUNC_4(VAR_35, VAR_18,
         VAR_29, 2, VAR_17, 0);
  break;

 case 133:
  break;

 case 132:
 {
  struct audio_mixer *VAR_38 = (struct audio_mixer *)VAR_33;
  VAR_37 = FUNC_6(VAR_35, VAR_38->volume_left, VAR_38->volume_right);
  break;
 }

 case 130:
  break;

 default:
  VAR_37 = -VAR_22;
 }

 return VAR_37;
}
