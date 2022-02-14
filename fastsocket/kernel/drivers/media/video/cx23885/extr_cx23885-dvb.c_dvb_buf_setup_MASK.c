
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {struct cx23885_tsport* priv_data; } ;
struct cx23885_tsport {int ts_packet_size; int ts_packet_count; } ;



__attribute__((used)) static int FUNC_0(struct videobuf_queue *VAR_0,
    unsigned int *VAR_1, unsigned int *VAR_2)
{
 struct cx23885_tsport *VAR_3 = VAR_0->priv_data;

 VAR_3->ts_packet_size = 188 * 4;
 VAR_3->ts_packet_count = 32;

 *VAR_2 = VAR_3->ts_packet_size * VAR_3->ts_packet_count;
 *VAR_1 = 32;
 return 0;
}
