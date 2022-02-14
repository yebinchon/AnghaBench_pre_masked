
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct cx23885_fh* priv_data; } ;
struct videobuf_buffer {int dummy; } ;
struct cx23885_fh {TYPE_1__* dev; } ;
struct cx23885_buffer {int dummy; } ;
struct TYPE_2__ {int ts1; } ;


 int FUNC_0 (int *,struct cx23885_buffer*) ;

__attribute__((used)) static void FUNC_1(struct videobuf_queue *VAR_0,
 struct videobuf_buffer *VAR_1)
{
 struct cx23885_fh *VAR_2 = VAR_0->priv_data;
 FUNC_0(&VAR_2->dev->ts1, (struct cx23885_buffer *)VAR_1);
}
