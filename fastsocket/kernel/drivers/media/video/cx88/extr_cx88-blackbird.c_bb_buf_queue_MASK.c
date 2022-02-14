
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {struct cx8802_fh* priv_data; } ;
struct videobuf_buffer {int dummy; } ;
struct cx88_buffer {int dummy; } ;
struct cx8802_fh {int dev; } ;


 int FUNC_0 (int ,struct cx88_buffer*) ;

__attribute__((used)) static void
FUNC_1(struct videobuf_queue *VAR_0, struct videobuf_buffer *VAR_1)
{
 struct cx8802_fh *VAR_2 = VAR_0->priv_data;
 FUNC_0(VAR_2->dev, (struct cx88_buffer*)VAR_1);
}
