
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {int (* add_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* connect_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* remove_frontend ) (TYPE_1__*,TYPE_2__*) ;int (* close ) (TYPE_1__*) ;scalar_t__ capabilities; } ;
struct TYPE_13__ {int filternum; int feednum; TYPE_1__ dmx; int * write_to_decoder; int stop_feed; int start_feed; struct firedtv* priv; } ;
struct TYPE_16__ {int filternum; scalar_t__ capabilities; TYPE_1__* demux; } ;
struct TYPE_15__ {int source; } ;
struct firedtv {size_t type; int device; int adapter; TYPE_11__ demux; TYPE_9__ dmxdev; TYPE_2__ frontend; int dvbnet; int fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (TYPE_9__*,int *) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (int *,int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct firedtv*) ;
 int FUNC_12 (struct firedtv*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_14 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*) ;

int FUNC_17(struct firedtv *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_8(&VAR_6->adapter, VAR_3[VAR_6->type],
       VAR_1, VAR_6->device, VAR_2);
 if (VAR_7 < 0)
  goto fail_log;


 VAR_6->demux.dmx.capabilities = 0;

 VAR_6->demux.priv = VAR_6;
 VAR_6->demux.filternum = 16;
 VAR_6->demux.feednum = 16;
 VAR_6->demux.start_feed = VAR_4;
 VAR_6->demux.stop_feed = VAR_5;
 VAR_6->demux.write_to_decoder = ((void*)0);

 VAR_7 = FUNC_2(&VAR_6->demux);
 if (VAR_7)
  goto fail_unreg_adapter;

 VAR_6->dmxdev.filternum = 16;
 VAR_6->dmxdev.demux = &VAR_6->demux.dmx;
 VAR_6->dmxdev.capabilities = 0;

 VAR_7 = FUNC_4(&VAR_6->dmxdev, &VAR_6->adapter);
 if (VAR_7)
  goto fail_dmx_release;

 VAR_6->frontend.source = VAR_0;

 VAR_7 = VAR_6->demux.dmx.add_frontend(&VAR_6->demux.dmx, &VAR_6->frontend);
 if (VAR_7)
  goto fail_dmxdev_release;

 VAR_7 = VAR_6->demux.dmx.connect_frontend(&VAR_6->demux.dmx,
            &VAR_6->frontend);
 if (VAR_7)
  goto fail_rem_frontend;

 FUNC_6(&VAR_6->adapter, &VAR_6->dvbnet, &VAR_6->demux.dmx);

 FUNC_12(VAR_6);
 VAR_7 = FUNC_9(&VAR_6->adapter, &VAR_6->fe);
 if (VAR_7)
  goto fail_net_release;

 VAR_7 = FUNC_11(VAR_6);
 if (VAR_7)
  FUNC_1(VAR_6->device,
    "Conditional Access Module not enabled\n");
 return 0;

fail_net_release:
 FUNC_7(&VAR_6->dvbnet);
 VAR_6->demux.dmx.close(&VAR_6->demux.dmx);
fail_rem_frontend:
 VAR_6->demux.dmx.remove_frontend(&VAR_6->demux.dmx, &VAR_6->frontend);
fail_dmxdev_release:
 FUNC_5(&VAR_6->dmxdev);
fail_dmx_release:
 FUNC_3(&VAR_6->demux);
fail_unreg_adapter:
 FUNC_10(&VAR_6->adapter);
fail_log:
 FUNC_0(VAR_6->device, "DVB initialization failed\n");
 return VAR_7;
}
