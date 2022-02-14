
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pvr2_hdw {TYPE_1__* hdw_desc; } ;
struct pvr2_dvb_props {scalar_t__ (* frontend_attach ) (struct pvr2_dvb_adapter*) ;int (* tuner_attach ) (struct pvr2_dvb_adapter*) ;} ;
struct TYPE_12__ {struct pvr2_hdw* hdw; } ;
struct pvr2_dvb_adapter {TYPE_5__ channel; TYPE_4__* fe; int dvb_adap; } ;
struct TYPE_9__ {int (* standby ) (TYPE_4__*) ;} ;
struct TYPE_10__ {int ts_bus_ctrl; TYPE_2__ analog_ops; } ;
struct TYPE_11__ {TYPE_3__ ops; } ;
struct TYPE_8__ {struct pvr2_dvb_props* dvb_props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (struct pvr2_dvb_adapter*) ;
 int FUNC_5 (struct pvr2_dvb_adapter*) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(struct pvr2_dvb_adapter *VAR_5)
{
 struct pvr2_hdw *VAR_6 = VAR_5->channel.hdw;
 const struct pvr2_dvb_props *VAR_7 = VAR_6->hdw_desc->dvb_props;
 int VAR_8 = 0;

 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_3, "fe_props not defined!");
  return -VAR_0;
 }

 VAR_8 = FUNC_2(
     &VAR_5->channel,
     (1 << VAR_2));
 if (VAR_8) {
  FUNC_3(VAR_3,
      "failed to grab control of dtv input (code=%d)",
      VAR_8);
  return VAR_8;
 }

 if (VAR_7->frontend_attach == ((void*)0)) {
  FUNC_3(VAR_3,
      "frontend_attach not defined!");
  VAR_8 = -VAR_0;
  goto done;
 }

 if ((VAR_7->frontend_attach(VAR_5) == 0) && (VAR_5->fe)) {

  if (FUNC_1(&VAR_5->dvb_adap, VAR_5->fe)) {
   FUNC_3(VAR_3,
       "frontend registration failed!");
   FUNC_0(VAR_5->fe);
   VAR_5->fe = ((void*)0);
   VAR_8 = -VAR_1;
   goto done;
  }

  if (VAR_7->tuner_attach)
   VAR_7->tuner_attach(VAR_5);

  if (VAR_5->fe->ops.analog_ops.standby)
   VAR_5->fe->ops.analog_ops.standby(VAR_5->fe);


  VAR_5->fe->ops.ts_bus_ctrl = VAR_4;

 } else {
  FUNC_3(VAR_3,
      "no frontend was attached!");
  VAR_8 = -VAR_1;
  return VAR_8;
 }

 done:
 FUNC_2(&VAR_5->channel, 0);
 return VAR_8;
}
