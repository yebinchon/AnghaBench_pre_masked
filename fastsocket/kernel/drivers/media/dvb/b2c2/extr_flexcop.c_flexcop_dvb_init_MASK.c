
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_18__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_11__ ;


struct TYPE_20__ {struct flexcop_device* priv; } ;
struct TYPE_23__ {int capabilities; int (* add_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* connect_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* remove_frontend ) (TYPE_1__*,TYPE_2__*) ;} ;
struct TYPE_22__ {TYPE_1__ dmx; int feednum; int * write_to_decoder; int stop_feed; int start_feed; int filternum; struct flexcop_device* priv; } ;
struct TYPE_21__ {scalar_t__ capabilities; TYPE_1__* demux; int filternum; } ;
struct TYPE_24__ {int source; } ;
struct flexcop_device {TYPE_11__ dvb_adapter; TYPE_18__ demux; TYPE_15__ dmxdev; TYPE_2__ hw_frontend; TYPE_2__ mem_frontend; int init_state; int dvbnet; int dev; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_18__*) ;
 int FUNC_1 (TYPE_18__*) ;
 int FUNC_2 (TYPE_15__*,TYPE_11__*) ;
 int FUNC_3 (TYPE_15__*) ;
 int FUNC_4 (TYPE_11__*,int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_11__*,char*,int ,int ,int ) ;
 int FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(struct flexcop_device *VAR_10)
{
 int VAR_11 = FUNC_5(&VAR_10->dvb_adapter,
   "FlexCop Digital TV device", VAR_10->owner,
   VAR_10->dev, VAR_7);
 if (VAR_11 < 0) {
  FUNC_7("error registering DVB adapter");
  return VAR_11;
 }
 VAR_10->dvb_adapter.priv = VAR_10;

 VAR_10->demux.dmx.capabilities = (VAR_4 | VAR_3
   | VAR_1);
 VAR_10->demux.priv = VAR_10;
 VAR_10->demux.filternum = VAR_10->demux.feednum = VAR_5;
 VAR_10->demux.start_feed = VAR_8;
 VAR_10->demux.stop_feed = VAR_9;
 VAR_10->demux.write_to_decoder = ((void*)0);

 if ((VAR_11 = FUNC_0(&VAR_10->demux)) < 0) {
  FUNC_7("dvb_dmx failed: error %d", VAR_11);
  goto err_dmx;
 }

 VAR_10->hw_frontend.source = VAR_0;

 VAR_10->dmxdev.filternum = VAR_10->demux.feednum;
 VAR_10->dmxdev.demux = &VAR_10->demux.dmx;
 VAR_10->dmxdev.capabilities = 0;
 if ((VAR_11 = FUNC_2(&VAR_10->dmxdev, &VAR_10->dvb_adapter)) < 0) {
  FUNC_7("dvb_dmxdev_init failed: error %d", VAR_11);
  goto err_dmx_dev;
 }

 if ((VAR_11 = VAR_10->demux.dmx.add_frontend(&VAR_10->demux.dmx, &VAR_10->hw_frontend)) < 0) {
  FUNC_7("adding hw_frontend to dmx failed: error %d", VAR_11);
  goto err_dmx_add_hw_frontend;
 }

 VAR_10->mem_frontend.source = VAR_2;
 if ((VAR_11 = VAR_10->demux.dmx.add_frontend(&VAR_10->demux.dmx, &VAR_10->mem_frontend)) < 0) {
  FUNC_7("adding mem_frontend to dmx failed: error %d", VAR_11);
  goto err_dmx_add_mem_frontend;
 }

 if ((VAR_11 = VAR_10->demux.dmx.connect_frontend(&VAR_10->demux.dmx, &VAR_10->hw_frontend)) < 0) {
  FUNC_7("connect frontend failed: error %d", VAR_11);
  goto err_connect_frontend;
 }

 FUNC_4(&VAR_10->dvb_adapter, &VAR_10->dvbnet, &VAR_10->demux.dmx);

 VAR_10->init_state |= VAR_6;
 return 0;

err_connect_frontend:
 VAR_10->demux.dmx.remove_frontend(&VAR_10->demux.dmx, &VAR_10->mem_frontend);
err_dmx_add_mem_frontend:
 VAR_10->demux.dmx.remove_frontend(&VAR_10->demux.dmx, &VAR_10->hw_frontend);
err_dmx_add_hw_frontend:
 FUNC_3(&VAR_10->dmxdev);
err_dmx_dev:
 FUNC_1(&VAR_10->demux);
err_dmx:
 FUNC_6(&VAR_10->dvb_adapter);
 return VAR_11;
}
