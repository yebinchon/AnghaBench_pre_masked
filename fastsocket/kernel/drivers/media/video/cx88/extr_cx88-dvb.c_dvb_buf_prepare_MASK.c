
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {struct cx8802_dev* priv_data; } ;
struct videobuf_buffer {int dummy; } ;
struct cx88_buffer {int dummy; } ;
struct cx8802_dev {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int FUNC_0 (struct videobuf_queue*,struct cx8802_dev*,struct cx88_buffer*,int) ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_0,
      struct videobuf_buffer *VAR_1, enum v4l2_field VAR_2)
{
 struct cx8802_dev *VAR_3 = VAR_0->priv_data;
 return FUNC_0(VAR_0, VAR_3, (struct cx88_buffer*)VAR_1,VAR_2);
}
