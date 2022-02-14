
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct dmx_section_feed {scalar_t__ tsfeedp; scalar_t__ secbuf_base; scalar_t__ secbuf; scalar_t__ secbufp; int crc_val; scalar_t__ seclen; } ;
struct TYPE_2__ {struct dmx_section_feed sec; } ;
struct dvb_demux_feed {scalar_t__ pusi_seen; TYPE_1__ feed; struct dvb_demux* demux; } ;
struct dvb_demux {int (* memcopy ) (struct dvb_demux_feed*,scalar_t__,scalar_t__ const*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dvb_demux_feed*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dvb_demux_feed*,scalar_t__,scalar_t__ const*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_2,
           const u8 *VAR_3, u8 VAR_4)
{
 struct dvb_demux *VAR_5 = VAR_2->demux;
 struct dmx_section_feed *VAR_6 = &VAR_2->feed.sec;
 u16 VAR_7, VAR_8, VAR_9;

 if (VAR_6->tsfeedp >= VAR_0)
  return 0;

 if (VAR_6->tsfeedp + VAR_4 > VAR_0) {





  VAR_4 = VAR_0 - VAR_6->tsfeedp;
 }

 if (VAR_4 <= 0)
  return 0;

 VAR_5->memcopy(VAR_2, VAR_6->secbuf_base + VAR_6->tsfeedp, VAR_3, VAR_4);
 VAR_6->tsfeedp += VAR_4;




 VAR_7 = VAR_6->tsfeedp;
 if (VAR_7 > VAR_0)
  return -1;


 VAR_6->secbuf = VAR_6->secbuf_base + VAR_6->secbufp;

 for (VAR_9 = 0; VAR_6->secbufp + 2 < VAR_7; VAR_9++) {
  VAR_8 = FUNC_2(VAR_6->secbuf);
  if (VAR_8 <= 0 || VAR_8 > VAR_1
      || VAR_8 + VAR_6->secbufp > VAR_7)
   return 0;
  VAR_6->seclen = VAR_8;
  VAR_6->crc_val = ~0;

  if (VAR_2->pusi_seen)
   FUNC_0(VAR_2);




  VAR_6->secbufp += VAR_8;
  VAR_6->secbuf += VAR_8;
 }

 return 0;
}
