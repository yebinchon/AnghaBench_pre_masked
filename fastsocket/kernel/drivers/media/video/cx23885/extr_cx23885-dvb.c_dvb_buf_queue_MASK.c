
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {struct cx23885_tsport* priv_data; } ;
struct videobuf_buffer {int dummy; } ;
struct cx23885_tsport {int dummy; } ;
struct cx23885_buffer {int dummy; } ;


 int FUNC_0 (struct cx23885_tsport*,struct cx23885_buffer*) ;

__attribute__((used)) static void FUNC_1(struct videobuf_queue *VAR_0, struct videobuf_buffer *VAR_1)
{
 struct cx23885_tsport *VAR_2 = VAR_0->priv_data;
 FUNC_0(VAR_2, (struct cx23885_buffer *)VAR_1);
}
