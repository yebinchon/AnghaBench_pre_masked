
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_18__ {int proposed_mac; struct dvb_usb_adapter* priv; } ;
struct TYPE_19__ {int capabilities; } ;
struct TYPE_13__ {TYPE_8__ dmx; int filternum; int * write_to_decoder; int stop_feed; int start_feed; int feednum; struct dvb_usb_adapter* priv; } ;
struct TYPE_20__ {scalar_t__ capabilities; TYPE_8__* demux; int filternum; } ;
struct dvb_usb_adapter {TYPE_5__ dvb_adap; TYPE_11__ demux; int state; int dvb_net; TYPE_9__ dmxdev; int max_feed_count; TYPE_4__* dev; } ;
struct TYPE_16__ {scalar_t__ (* read_mac_address ) (TYPE_4__*,int ) ;} ;
struct TYPE_17__ {TYPE_3__ props; TYPE_2__* udev; int owner; TYPE_1__* desc; } ;
struct TYPE_15__ {int dev; } ;
struct TYPE_14__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (TYPE_9__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int *,TYPE_8__*) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int *,short*) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ) ;

int FUNC_10(struct dvb_usb_adapter *VAR_5, short *VAR_6)
{
 int VAR_7 = FUNC_5(&VAR_5->dvb_adap, VAR_5->dev->desc->name,
           VAR_5->dev->owner, &VAR_5->dev->udev->dev,
           VAR_6);

 if (VAR_7 < 0) {
  FUNC_0("dvb_register_adapter failed: error %d", VAR_7);
  goto err;
 }
 VAR_5->dvb_adap.priv = VAR_5;

 if (VAR_5->dev->props.read_mac_address) {
  if (VAR_5->dev->props.read_mac_address(VAR_5->dev,VAR_5->dvb_adap.proposed_mac) == 0)
   FUNC_8("MAC address: %pM",VAR_5->dvb_adap.proposed_mac);
  else
   FUNC_7("MAC address reading failed.");
 }


 VAR_5->demux.dmx.capabilities = VAR_1 | VAR_0;
 VAR_5->demux.priv = VAR_5;

 VAR_5->demux.feednum = VAR_5->demux.filternum = VAR_5->max_feed_count;
 VAR_5->demux.start_feed = VAR_3;
 VAR_5->demux.stop_feed = VAR_4;
 VAR_5->demux.write_to_decoder = ((void*)0);
 if ((VAR_7 = FUNC_1(&VAR_5->demux)) < 0) {
  FUNC_7("dvb_dmx_init failed: error %d",VAR_7);
  goto err_dmx;
 }

 VAR_5->dmxdev.filternum = VAR_5->demux.filternum;
 VAR_5->dmxdev.demux = &VAR_5->demux.dmx;
 VAR_5->dmxdev.capabilities = 0;
 if ((VAR_7 = FUNC_3(&VAR_5->dmxdev, &VAR_5->dvb_adap)) < 0) {
  FUNC_7("dvb_dmxdev_init failed: error %d",VAR_7);
  goto err_dmx_dev;
 }

 FUNC_4(&VAR_5->dvb_adap, &VAR_5->dvb_net, &VAR_5->demux.dmx);

 VAR_5->state |= VAR_2;
 return 0;

err_dmx_dev:
 FUNC_2(&VAR_5->demux);
err_dmx:
 FUNC_6(&VAR_5->dvb_adap);
err:
 return VAR_7;
}
