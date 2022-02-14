
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_demux_filter {struct dvb_demux_filter* next; } ;
struct dmx_section_feed {int* secbuf; scalar_t__ seclen; scalar_t__ is_filtering; scalar_t__ check_crc; } ;
struct TYPE_2__ {struct dmx_section_feed sec; } ;
struct dvb_demux_feed {TYPE_1__ feed; struct dvb_demux_filter* filter; struct dvb_demux* demux; } ;
struct dvb_demux {scalar_t__ (* check_crc32 ) (struct dvb_demux_feed*,int*,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (struct dvb_demux_feed*,struct dvb_demux_filter*) ;
 scalar_t__ FUNC_1 (struct dvb_demux_feed*,int*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct dvb_demux_feed *VAR_0)
{
 struct dvb_demux *VAR_1 = VAR_0->demux;
 struct dvb_demux_filter *VAR_2 = VAR_0->filter;
 struct dmx_section_feed *VAR_3 = &VAR_0->feed.sec;
 int VAR_4;

 if (!VAR_3->is_filtering)
  return 0;

 if (!VAR_2)
  return 0;

 if (VAR_3->check_crc) {
  VAR_4 = ((VAR_3->secbuf[1] & 0x80) != 0);
  if (VAR_4 &&
      VAR_1->check_crc32(VAR_0, VAR_3->secbuf, VAR_3->seclen))
   return -1;
 }

 do {
  if (FUNC_0(VAR_0, VAR_2) < 0)
   return -1;
 } while ((VAR_2 = VAR_2->next) && VAR_3->is_filtering);

 VAR_3->seclen = 0;

 return 0;
}
