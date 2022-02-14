
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_interval; int speed; int channel; int buf_packets; int data_buf_size; } ;
struct raw1394_iso_status {int overflows; int xmit_cycle; int n_packets; TYPE_1__ config; } ;
struct hpsb_iso {int xmit_cycle; int irq_interval; int speed; int channel; int buf_packets; int buf_size; int skips; int overflows; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hpsb_iso*) ;

__attribute__((used)) static void FUNC_2(struct hpsb_iso *VAR_0,
        struct raw1394_iso_status *VAR_1)
{
 int VAR_2 = FUNC_0(&VAR_0->overflows);
 int VAR_3 = FUNC_0(&VAR_0->skips);

 VAR_1->config.data_buf_size = VAR_0->buf_size;
 VAR_1->config.buf_packets = VAR_0->buf_packets;
 VAR_1->config.channel = VAR_0->channel;
 VAR_1->config.speed = VAR_0->speed;
 VAR_1->config.irq_interval = VAR_0->irq_interval;
 VAR_1->n_packets = FUNC_1(VAR_0);
 VAR_1->overflows = ((VAR_3 & 0xFFFF) << 16) | ((VAR_2 & 0xFFFF));
 VAR_1->xmit_cycle = VAR_0->xmit_cycle;
}
