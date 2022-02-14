
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ops; struct poseidon* demodulator_priv; } ;
struct TYPE_7__ {int filternum; scalar_t__ capabilities; TYPE_1__* demux; } ;
struct TYPE_5__ {int capabilities; } ;
struct dvb_demux {int feednum; int filternum; TYPE_1__ dmx; int * write_to_decoder; int stop_feed; int start_feed; struct pd_dvb_adapter* priv; } ;
struct pd_dvb_adapter {int ep_addr; int dvb_adap; TYPE_2__ dvb_fe; TYPE_4__ dmxdev; struct dvb_demux demux; struct poseidon* pd_device; int active_feed; int users; } ;
struct poseidon {struct pd_dvb_adapter dvb_data; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct dvb_demux*) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int *,char*,int ,int *,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_8(struct poseidon *VAR_7)
{
 struct pd_dvb_adapter *VAR_8 = &VAR_7->dvb_data;
 struct dvb_demux *VAR_9;
 int VAR_10 = 0;

 VAR_8->ep_addr = 0x82;
 FUNC_0(&VAR_8->users, 0);
 FUNC_0(&VAR_8->active_feed, 0);
 VAR_8->pd_device = VAR_7;

 VAR_10 = FUNC_3(&VAR_8->dvb_adap,
    "Poseidon dvbt adapter",
    VAR_2,
    ((void*)0) ,
    VAR_3);
 if (VAR_10 < 0)
  goto error1;


 VAR_8->dvb_fe.demodulator_priv = VAR_7;
 FUNC_7(&VAR_8->dvb_fe.ops, &VAR_6,
   sizeof(struct dvb_frontend_ops));
 VAR_10 = FUNC_4(&VAR_8->dvb_adap, &VAR_8->dvb_fe);
 if (VAR_10 < 0)
  goto error2;


 VAR_9 = &VAR_8->demux;
 VAR_9->dmx.capabilities = VAR_1 | VAR_0;
 VAR_9->priv = VAR_8;
 VAR_9->feednum = VAR_9->filternum = 64;
 VAR_9->start_feed = VAR_4;
 VAR_9->stop_feed = VAR_5;
 VAR_9->write_to_decoder = ((void*)0);

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10 < 0)
  goto error3;

 VAR_8->dmxdev.filternum = VAR_8->demux.filternum;
 VAR_8->dmxdev.demux = &VAR_8->demux.dmx;
 VAR_8->dmxdev.capabilities = 0;

 VAR_10 = FUNC_2(&VAR_8->dmxdev, &VAR_8->dvb_adap);
 if (VAR_10 < 0)
  goto error3;
 return 0;

error3:
 FUNC_6(&VAR_8->dvb_fe);
error2:
 FUNC_5(&VAR_8->dvb_adap);
error1:
 return VAR_10;
}
