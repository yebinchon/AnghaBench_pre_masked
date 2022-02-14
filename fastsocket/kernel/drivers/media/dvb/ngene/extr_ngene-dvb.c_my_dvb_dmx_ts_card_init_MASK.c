
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capabilities; } ;
struct dvb_demux {int filternum; int feednum; int (* start_feed ) (struct dvb_demux_feed*) ;int (* stop_feed ) (struct dvb_demux_feed*) ;TYPE_1__ dmx; int * write_to_decoder; void* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_demux*) ;

int FUNC_1(struct dvb_demux *VAR_3, char *VAR_4,
       int (*VAR_5)(struct dvb_demux_feed *),
       int (*VAR_6)(struct dvb_demux_feed *),
       void *VAR_7)
{
 VAR_3->priv = VAR_7;

 VAR_3->filternum = 256;
 VAR_3->feednum = 256;
 VAR_3->start_feed = VAR_5;
 VAR_3->stop_feed = VAR_6;
 VAR_3->write_to_decoder = ((void*)0);
 VAR_3->dmx.capabilities = (VAR_2 |
          VAR_1 |
          VAR_0);
 return FUNC_0(VAR_3);
}
