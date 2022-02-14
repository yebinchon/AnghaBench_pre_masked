
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dvb_filter_pes2ts {scalar_t__ priv; } ;
struct TYPE_4__ {int ts; } ;
struct TYPE_3__ {int (* ts ) (int*,size_t,int *,int ,int *,int ) ;} ;
struct dvb_demux_feed {int ts_type; TYPE_2__ feed; TYPE_1__ cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_filter_pes2ts*,int*,size_t,int) ;
 int FUNC_1 (int*,size_t,int *,int ,int *,int ) ;

int FUNC_2(struct dvb_filter_pes2ts *VAR_3, u8 *VAR_4, size_t VAR_5)
{
 struct dvb_demux_feed *VAR_6 = (struct dvb_demux_feed *) VAR_3->priv;

 if (!(VAR_6->ts_type & VAR_1))
  return 0;
 if (VAR_4[3] == 0xe0)
  VAR_4[4] = VAR_4[5] = 0;
 if (VAR_6->ts_type & VAR_2)
  return VAR_6->cb.ts(VAR_4, VAR_5, ((void*)0), 0,
      &VAR_6->feed.ts, VAR_0);
 else
  return FUNC_0(VAR_3, VAR_4, VAR_5, 1);
}
