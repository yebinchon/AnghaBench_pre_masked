
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {struct cx8802_dev* priv_data; } ;
struct videobuf_buffer {int dummy; } ;
struct cx88_buffer {int dummy; } ;
struct cx8802_dev {int dummy; } ;


 int FUNC_0 (struct cx8802_dev*,struct cx88_buffer*) ;

__attribute__((used)) static void FUNC_1(struct videobuf_queue *VAR_0, struct videobuf_buffer *VAR_1)
{
 struct cx8802_dev *VAR_2 = VAR_0->priv_data;
 FUNC_0(VAR_2, (struct cx88_buffer*)VAR_1);
}
