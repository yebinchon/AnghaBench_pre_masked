
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct cx8802_fh* priv_data; } ;
struct cx8802_fh {TYPE_1__* dev; } ;
struct TYPE_2__ {int ts_packet_size; unsigned int ts_packet_count; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct videobuf_queue *VAR_1,
   unsigned int *VAR_2, unsigned int *VAR_3)
{
 struct cx8802_fh *VAR_4 = VAR_1->priv_data;

 VAR_4->dev->ts_packet_size = 188 * 4;
 VAR_4->dev->ts_packet_count = VAR_0;

 *VAR_3 = VAR_4->dev->ts_packet_size * VAR_4->dev->ts_packet_count;
 *VAR_2 = VAR_4->dev->ts_packet_count;
 return 0;
}
