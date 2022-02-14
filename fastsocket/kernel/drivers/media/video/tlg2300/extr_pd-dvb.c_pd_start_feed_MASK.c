
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pd_dvb_adapter {int active_feed; } ;
struct dvb_demux_feed {TYPE_1__* demux; } ;
struct TYPE_2__ {struct pd_dvb_adapter* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pd_dvb_adapter*) ;

__attribute__((used)) static int FUNC_2(struct dvb_demux_feed *VAR_0)
{
 struct pd_dvb_adapter *VAR_1 = VAR_0->demux->priv;
 int VAR_2 = 0;

 if (!VAR_1)
  return -1;
 if (FUNC_0(&VAR_1->active_feed) == 1)
  VAR_2 = FUNC_1(VAR_1);
 return VAR_2;
}
