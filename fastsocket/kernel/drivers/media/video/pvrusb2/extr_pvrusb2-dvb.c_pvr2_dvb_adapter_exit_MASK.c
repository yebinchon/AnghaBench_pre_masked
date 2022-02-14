
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* close ) (TYPE_1__*) ;} ;
struct TYPE_4__ {TYPE_1__ dmx; } ;
struct pvr2_dvb_adapter {int dvb_adap; TYPE_2__ demux; int dmxdev; int dvb_net; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct pvr2_dvb_adapter *VAR_1)
{
 FUNC_4(VAR_0, "unregistering DVB devices");
 FUNC_2(&VAR_1->dvb_net);
 VAR_1->demux.dmx.close(&VAR_1->demux.dmx);
 FUNC_1(&VAR_1->dmxdev);
 FUNC_0(&VAR_1->demux);
 FUNC_3(&VAR_1->dvb_adap);
 return 0;
}
