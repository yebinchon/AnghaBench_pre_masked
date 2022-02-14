
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct dvb_demux_feed {int pes_type; struct dvb_demux* demux; } ;
struct TYPE_6__ {TYPE_1__* frontend; } ;
struct dvb_demux {TYPE_2__ dmx; scalar_t__ priv; } ;
struct TYPE_8__ {int stream_source; } ;
struct TYPE_7__ {int stream_source; } ;
struct av7110 {TYPE_4__ videostate; TYPE_3__ audiostate; scalar_t__ full_ts; } ;
struct TYPE_5__ {scalar_t__ source; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,struct av7110*) ;
 int FUNC_1 (struct av7110*,int ,int const*,size_t) ;

int FUNC_2(struct dvb_demux_feed *VAR_4, const u8 *VAR_5, size_t VAR_6)
{
 struct dvb_demux *VAR_7 = VAR_4->demux;
 struct av7110 *VAR_8 = (struct av7110 *) VAR_7->priv;

 FUNC_0(2, "av7110:%p, \n", VAR_8);

 if (VAR_8->full_ts && VAR_7->dmx.frontend->source != VAR_1)
  return 0;

 switch (VAR_4->pes_type) {
 case 0:
  if (VAR_8->audiostate.stream_source == VAR_0)
   return -VAR_2;
  break;
 case 1:
  if (VAR_8->videostate.stream_source == VAR_3)
   return -VAR_2;
  break;
 default:
  return -1;
 }

 return FUNC_1(VAR_8, VAR_4->pes_type, VAR_5, VAR_6);
}
