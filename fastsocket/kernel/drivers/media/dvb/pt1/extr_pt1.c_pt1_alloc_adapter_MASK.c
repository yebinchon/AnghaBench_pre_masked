
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dmxdev {int filternum; scalar_t__ capabilities; TYPE_2__* demux; } ;
struct TYPE_4__ {int capabilities; } ;
struct dvb_demux {int feednum; int filternum; TYPE_2__ dmx; int * write_to_decoder; int stop_feed; int start_feed; struct pt1_adapter* priv; } ;
struct dvb_adapter {struct pt1_adapter* priv; } ;
struct pt1_adapter {int sleep; int net; struct dmxdev dmxdev; struct dvb_demux demux; struct dvb_adapter adap; scalar_t__ packet_count; scalar_t__ upacket_count; void* buf; int voltage; struct pt1* pt1; } ;
struct pt1 {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pt1_adapter* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (struct dvb_demux*) ;
 int FUNC_3 (struct dvb_demux*) ;
 int FUNC_4 (struct dmxdev*,struct dvb_adapter*) ;
 int FUNC_5 (struct dvb_adapter*,int *,TYPE_2__*) ;
 int FUNC_6 (struct dvb_adapter*,int ,int ,int *,int ) ;
 int FUNC_7 (struct dvb_adapter*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct pt1_adapter*) ;
 struct pt1_adapter* FUNC_10 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static struct pt1_adapter *
FUNC_11(struct pt1 *VAR_10)
{
 struct pt1_adapter *VAR_11;
 void *VAR_12;
 struct dvb_adapter *VAR_13;
 struct dvb_demux *VAR_14;
 struct dmxdev *VAR_15;
 int VAR_16;

 VAR_11 = FUNC_10(sizeof(struct pt1_adapter), VAR_4);
 if (!VAR_11) {
  VAR_16 = -VAR_3;
  goto err;
 }

 VAR_11->pt1 = VAR_10;

 VAR_11->voltage = VAR_5;
 VAR_11->sleep = 1;

 VAR_12 = (u8 *)FUNC_1(VAR_4);
 if (!VAR_12) {
  VAR_16 = -VAR_3;
  goto err_kfree;
 }

 VAR_11->buf = VAR_12;
 VAR_11->upacket_count = 0;
 VAR_11->packet_count = 0;

 VAR_13 = &VAR_11->adap;
 VAR_13->priv = VAR_11;
 VAR_16 = FUNC_6(VAR_13, VAR_2, VAR_6,
       &VAR_10->pdev->dev, VAR_7);
 if (VAR_16 < 0)
  goto err_free_page;

 VAR_14 = &VAR_11->demux;
 VAR_14->dmx.capabilities = VAR_1 | VAR_0;
 VAR_14->priv = VAR_11;
 VAR_14->feednum = 256;
 VAR_14->filternum = 256;
 VAR_14->start_feed = VAR_8;
 VAR_14->stop_feed = VAR_9;
 VAR_14->write_to_decoder = ((void*)0);
 VAR_16 = FUNC_2(VAR_14);
 if (VAR_16 < 0)
  goto err_unregister_adapter;

 VAR_15 = &VAR_11->dmxdev;
 VAR_15->filternum = 256;
 VAR_15->demux = &VAR_14->dmx;
 VAR_15->capabilities = 0;
 VAR_16 = FUNC_4(VAR_15, VAR_13);
 if (VAR_16 < 0)
  goto err_dmx_release;

 FUNC_5(VAR_13, &VAR_11->net, &VAR_14->dmx);

 return VAR_11;

err_dmx_release:
 FUNC_3(VAR_14);
err_unregister_adapter:
 FUNC_7(VAR_13);
err_free_page:
 FUNC_8((unsigned long)VAR_12);
err_kfree:
 FUNC_9(VAR_11);
err:
 return FUNC_0(VAR_16);
}
