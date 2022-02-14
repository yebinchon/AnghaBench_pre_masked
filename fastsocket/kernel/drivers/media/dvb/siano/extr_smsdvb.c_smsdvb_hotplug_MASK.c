
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int capabilities; } ;
struct TYPE_13__ {int filternum; int feednum; TYPE_1__ dmx; int stop_feed; int start_feed; } ;
struct TYPE_12__ {int filternum; scalar_t__ capabilities; TYPE_1__* demux; } ;
struct TYPE_11__ {int ops; } ;
struct smsdvb_client_t {int event_fe_state; int event_unc_state; int adapter; TYPE_7__ demux; TYPE_5__ dmxdev; TYPE_3__ frontend; int entry; int tune_done; struct smscore_device_t* coredev; int smsclient; } ;
struct smscore_device_t {int dummy; } ;
struct smsclient_params_t {int initial_id; struct smsdvb_client_t* context; int onremove_handler; int onresponse_handler; int data_type; } ;
struct dvb_frontend_ops {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_10__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int ,int ,struct device*,int ) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct smsdvb_client_t*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct smsdvb_client_t* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (struct smsdvb_client_t*,int ) ;
 int FUNC_16 (struct smscore_device_t*) ;
 int FUNC_17 (char*,...) ;
 TYPE_2__* FUNC_18 (int ) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (struct smscore_device_t*) ;
 int FUNC_21 (struct smscore_device_t*,struct smsclient_params_t*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_22(struct smscore_device_t *VAR_14,
     struct device *VAR_15, int VAR_16)
{
 struct smsclient_params_t VAR_17;
 struct smsdvb_client_t *VAR_18;
 int VAR_19;


 if (!VAR_16)
  return 0;
 VAR_18 = FUNC_12(sizeof(struct smsdvb_client_t), VAR_3);
 if (!VAR_18) {
  FUNC_17("kmalloc() failed");
  return -VAR_2;
 }


 VAR_19 = FUNC_4(&VAR_18->adapter,
      FUNC_18(
     FUNC_20(VAR_14))->name,
      VAR_5, VAR_15, VAR_6);
 if (VAR_19 < 0) {
  FUNC_17("dvb_register_adapter() failed %d", VAR_19);
  goto adapter_error;
 }


 VAR_18->demux.dmx.capabilities = VAR_0;
 VAR_18->demux.filternum = 32;
 VAR_18->demux.feednum = 32;
 VAR_18->demux.start_feed = VAR_12;
 VAR_18->demux.stop_feed = VAR_13;

 VAR_19 = FUNC_0(&VAR_18->demux);
 if (VAR_19 < 0) {
  FUNC_17("dvb_dmx_init failed %d", VAR_19);
  goto dvbdmx_error;
 }


 VAR_18->dmxdev.filternum = 32;
 VAR_18->dmxdev.demux = &VAR_18->demux.dmx;
 VAR_18->dmxdev.capabilities = 0;

 VAR_19 = FUNC_2(&VAR_18->dmxdev, &VAR_18->adapter);
 if (VAR_19 < 0) {
  FUNC_17("dvb_dmxdev_init failed %d", VAR_19);
  goto dmxdev_error;
 }


 FUNC_14(&VAR_18->frontend.ops, &VAR_9,
        sizeof(struct dvb_frontend_ops));

 VAR_19 = FUNC_5(&VAR_18->adapter, &VAR_18->frontend);
 if (VAR_19 < 0) {
  FUNC_17("frontend registration failed %d", VAR_19);
  goto frontend_error;
 }

 VAR_17.initial_id = 1;
 VAR_17.data_type = VAR_4;
 VAR_17.onresponse_handler = VAR_11;
 VAR_17.onremove_handler = VAR_10;
 VAR_17.context = VAR_18;

 VAR_19 = FUNC_21(VAR_14, &VAR_17, &VAR_18->smsclient);
 if (VAR_19 < 0) {
  FUNC_17("smscore_register_client() failed %d", VAR_19);
  goto client_error;
 }

 VAR_18->coredev = VAR_14;

 FUNC_8(&VAR_18->tune_done);

 FUNC_10(&VAR_8);

 FUNC_13(&VAR_18->entry, &VAR_7);

 FUNC_11(&VAR_8);

 VAR_18->event_fe_state = -1;
 VAR_18->event_unc_state = -1;
 FUNC_15(VAR_18, VAR_1);

 FUNC_19("success");
 FUNC_16(VAR_14);

 return 0;

client_error:
 FUNC_7(&VAR_18->frontend);

frontend_error:
 FUNC_3(&VAR_18->dmxdev);

dmxdev_error:
 FUNC_1(&VAR_18->demux);

dvbdmx_error:
 FUNC_6(&VAR_18->adapter);

adapter_error:
 FUNC_9(VAR_18);
 return VAR_19;
}
