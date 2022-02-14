
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_dvb {int nfeeds; int lock; int * thread; int name; } ;
struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct TYPE_2__ {int frontend; } ;
struct dvb_demux {TYPE_1__ dmx; struct videobuf_dvb* priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,struct videobuf_dvb*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct dvb_demux_feed *VAR_2)
{
 struct dvb_demux *VAR_3 = VAR_2->demux;
 struct videobuf_dvb *VAR_4 = VAR_3->priv;
 int VAR_5;

 if (!VAR_3->dmx.frontend)
  return -VAR_0;

 FUNC_3(&VAR_4->lock);
 VAR_4->nfeeds++;
 VAR_5 = VAR_4->nfeeds;

 if (((void*)0) != VAR_4->thread)
  goto out;
 VAR_4->thread = FUNC_2(VAR_1,
      VAR_4, "%s dvb", VAR_4->name);
 if (FUNC_0(VAR_4->thread)) {
  VAR_5 = FUNC_1(VAR_4->thread);
  VAR_4->thread = ((void*)0);
 }

out:
 FUNC_4(&VAR_4->lock);
 return VAR_5;
}
