
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flexcop_device {int dummy; } ;
struct dvb_demux_feed {TYPE_1__* demux; } ;
struct TYPE_2__ {struct flexcop_device* priv; } ;


 int FUNC_0 (struct flexcop_device*,struct dvb_demux_feed*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_demux_feed *VAR_0)
{
 struct flexcop_device *VAR_1 = VAR_0->demux->priv;
 return FUNC_0(VAR_1, VAR_0, 1);
}
