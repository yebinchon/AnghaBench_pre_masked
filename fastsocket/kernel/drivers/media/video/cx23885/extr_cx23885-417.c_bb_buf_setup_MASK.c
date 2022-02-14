
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct cx23885_fh* priv_data; } ;
struct cx23885_fh {TYPE_2__* dev; } ;
struct TYPE_3__ {unsigned int ts_packet_size; unsigned int ts_packet_count; } ;
struct TYPE_4__ {TYPE_1__ ts1; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct videobuf_queue *VAR_3,
 unsigned int *VAR_4, unsigned int *VAR_5)
{
 struct cx23885_fh *VAR_6 = VAR_3->priv_data;

 VAR_6->dev->ts1.ts_packet_size = VAR_2;
 VAR_6->dev->ts1.ts_packet_count = VAR_1;

 *VAR_5 = VAR_6->dev->ts1.ts_packet_size * VAR_6->dev->ts1.ts_packet_count;
 *VAR_4 = VAR_0;

 return 0;
}
