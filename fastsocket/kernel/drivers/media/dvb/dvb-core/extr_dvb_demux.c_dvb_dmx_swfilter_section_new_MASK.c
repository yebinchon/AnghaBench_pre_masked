
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmx_section_feed {scalar_t__ secbufp; scalar_t__ tsfeedp; int* secbuf; int seclen; int* secbuf_base; } ;
struct TYPE_2__ {struct dmx_section_feed sec; } ;
struct dvb_demux_feed {TYPE_1__ feed; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct dvb_demux_feed *VAR_0)
{
 struct dmx_section_feed *VAR_1 = &VAR_0->feed.sec;
 VAR_1->tsfeedp = VAR_1->secbufp = VAR_1->seclen = 0;
 VAR_1->secbuf = VAR_1->secbuf_base;
}
