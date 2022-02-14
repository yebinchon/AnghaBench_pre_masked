
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct hpsb_iso_packet_info {void* sy; void* tag; int len; int offset; } ;
struct hpsb_iso {scalar_t__ type; scalar_t__ n_ready_packets; size_t first_packet; int buf_packets; int xmit_cycle; scalar_t__ prebuffer; int lock; int start_cycle; TYPE_2__* host; struct hpsb_iso_packet_info* infos; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* isoctl ) (struct hpsb_iso*,int ,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hpsb_iso*,int ) ;
 scalar_t__ FUNC_1 (struct hpsb_iso*,int ,int ,int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct hpsb_iso*,int ,unsigned long) ;

int FUNC_5(struct hpsb_iso *VAR_5, u32 VAR_6, u16 VAR_7,
          u8 VAR_8, u8 VAR_9)
{
 struct hpsb_iso_packet_info *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 if (VAR_5->type != VAR_3)
  return -VAR_2;


 if (VAR_5->n_ready_packets <= 0) {
  return -VAR_0;
 }

 VAR_10 = &VAR_5->infos[VAR_5->first_packet];


 if (FUNC_1
     (VAR_5, VAR_6, VAR_7, &VAR_10->offset, &VAR_10->len))
  return -VAR_1;

 VAR_10->tag = VAR_8;
 VAR_10->sy = VAR_9;

 FUNC_2(&VAR_5->lock, VAR_11);

 VAR_12 = VAR_5->host->driver->isoctl(VAR_5, VAR_4, (unsigned long)VAR_10);
 if (VAR_12)
  goto out;


 VAR_5->first_packet = (VAR_5->first_packet + 1) % VAR_5->buf_packets;
 VAR_5->xmit_cycle = (VAR_5->xmit_cycle + 1) % 8000;
 VAR_5->n_ready_packets--;

 if (VAR_5->prebuffer != 0) {
  VAR_5->prebuffer--;
  if (VAR_5->prebuffer <= 0) {
   VAR_5->prebuffer = 0;
   VAR_12 = FUNC_0(VAR_5, VAR_5->start_cycle);
  }
 }

      out:
 FUNC_3(&VAR_5->lock, VAR_11);
 return VAR_12;
}
