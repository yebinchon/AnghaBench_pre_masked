
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int secbufp; int seclen; int is_filtering; } ;
struct TYPE_10__ {int is_filtering; } ;
struct TYPE_9__ {TYPE_3__ sec; TYPE_5__ ts; } ;
struct TYPE_6__ {int (* ts ) (int const*,int,int *,int ,TYPE_5__*,int ) ;} ;
struct dvb_demux_feed {int type; int ts_type; TYPE_4__ feed; TYPE_2__* demux; TYPE_1__ cb; } ;
struct TYPE_7__ {int (* write_to_decoder ) (struct dvb_demux_feed*,int const*,int) ;} ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_demux_feed*,int const*) ;
 int FUNC_1 (struct dvb_demux_feed*,int const*) ;
 int FUNC_2 (int const*,int,int *,int ,TYPE_5__*,int ) ;
 int FUNC_3 (struct dvb_demux_feed*,int const*,int) ;

__attribute__((used)) static inline void FUNC_4(struct dvb_demux_feed *VAR_4,
      const u8 *VAR_5)
{
 switch (VAR_4->type) {
 case 128:
  if (!VAR_4->feed.ts.is_filtering)
   break;
  if (VAR_4->ts_type & VAR_2) {
   if (VAR_4->ts_type & VAR_3)
    FUNC_0(VAR_4, VAR_5);
   else
    VAR_4->cb.ts(VAR_5, 188, ((void*)0), 0, &VAR_4->feed.ts,
         VAR_0);
  }
  if (VAR_4->ts_type & VAR_1)
   if (VAR_4->demux->write_to_decoder)
    VAR_4->demux->write_to_decoder(VAR_4, VAR_5, 188);
  break;

 case 129:
  if (!VAR_4->feed.sec.is_filtering)
   break;
  if (FUNC_1(VAR_4, VAR_5) < 0)
   VAR_4->feed.sec.seclen = VAR_4->feed.sec.secbufp = 0;
  break;

 default:
  break;
 }
}
