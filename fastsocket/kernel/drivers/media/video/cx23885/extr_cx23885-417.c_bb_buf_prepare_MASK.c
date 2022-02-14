
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct cx23885_fh* priv_data; } ;
struct videobuf_buffer {int dummy; } ;
struct cx23885_fh {TYPE_1__* dev; } ;
struct cx23885_buffer {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_2__ {int ts1; } ;


 int FUNC_0 (struct videobuf_queue*,int *,struct cx23885_buffer*,int) ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_0,
 struct videobuf_buffer *VAR_1, enum v4l2_field VAR_2)
{
 struct cx23885_fh *VAR_3 = VAR_0->priv_data;
 return FUNC_0(VAR_0, &VAR_3->dev->ts1,
  (struct cx23885_buffer *)VAR_1,
  VAR_2);
}
