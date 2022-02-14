
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpsb_iso_packet_info {scalar_t__ total_len; } ;
struct hpsb_iso {scalar_t__ type; size_t first_packet; int buf_packets; scalar_t__ n_ready_packets; scalar_t__ bytes_discarded; int lock; TYPE_2__* host; int * infos; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* isoctl ) (struct hpsb_iso*,int ,unsigned long) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct hpsb_iso*,int ,unsigned long) ;
 int FUNC_3 (struct hpsb_iso*,int ,unsigned long) ;

int FUNC_4(struct hpsb_iso *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;
 int VAR_6 = 0;

 if (VAR_2->type != VAR_0)
  return -1;

 FUNC_0(&VAR_2->lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = VAR_2->host->driver->isoctl(VAR_2, VAR_1,
            (unsigned long)&VAR_2->infos[VAR_2->
           first_packet]);
  if (VAR_6)
   break;

  VAR_2->first_packet = (VAR_2->first_packet + 1) % VAR_2->buf_packets;
  VAR_2->n_ready_packets--;


  if (VAR_2->n_ready_packets == 0) {
   if (VAR_2->bytes_discarded != 0) {
    struct hpsb_iso_packet_info VAR_7;
    VAR_7.total_len = VAR_2->bytes_discarded;
    VAR_2->host->driver->isoctl(VAR_2, VAR_1,
         (unsigned long)&VAR_7);
    VAR_2->bytes_discarded = 0;
   }
  }
 }
 FUNC_1(&VAR_2->lock, VAR_4);
 return VAR_6;
}
