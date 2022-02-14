
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_adapter {int id; TYPE_1__* dev; } ;
struct dib0700_state {int fw_version; int disable_streaming_master_mode; int channel_state; int nb_packet_buffer_size; } ;
struct TYPE_3__ {struct dib0700_state* priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*,int*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

int FUNC_3(struct dvb_usb_adapter *VAR_1, int VAR_2)
{
 struct dib0700_state *VAR_3 = VAR_1->dev->priv;
 u8 VAR_4[4];
 int VAR_5;

 if ((VAR_2 != 0) && (VAR_3->fw_version >= 0x10201)) {


  VAR_5 = FUNC_2(VAR_1->dev,
   VAR_3->nb_packet_buffer_size);
  if (VAR_5 < 0) {
   FUNC_0("can not set the USB xfer len\n");
   return VAR_5;
  }
 }

 VAR_4[0] = VAR_0;
 VAR_4[1] = (VAR_2 << 4) | 0x00;

 if (VAR_3->disable_streaming_master_mode == 1)
  VAR_4[2] = 0x00;
 else
  VAR_4[2] = 0x01 << 4;

 VAR_4[3] = 0x00;

 FUNC_0("modifying (%d) streaming state for %d\n", VAR_2, VAR_1->id);

 if (VAR_2)
  VAR_3->channel_state |= 1 << VAR_1->id;
 else
  VAR_3->channel_state &= ~(1 << VAR_1->id);

 VAR_4[2] |= VAR_3->channel_state;

 FUNC_0("data for streaming: %x %x\n", VAR_4[1], VAR_4[2]);

 return FUNC_1(VAR_1->dev, VAR_4, 4);
}
