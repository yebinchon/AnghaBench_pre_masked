
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {int dev; } ;
struct videobuf_dmabuf {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct cx88_buffer {TYPE_1__ vb; int risc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct videobuf_dmabuf*) ;
 int FUNC_5 (int ,struct videobuf_dmabuf*) ;
 struct videobuf_dmabuf* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct videobuf_queue*,TYPE_1__*,int ,int ) ;

void
FUNC_8(struct videobuf_queue *VAR_1, struct cx88_buffer *VAR_2)
{
 struct videobuf_dmabuf *VAR_3=FUNC_6(&VAR_2->vb);

 FUNC_0(FUNC_2());
 FUNC_7(VAR_1, &VAR_2->vb, 0, 0);
 FUNC_5(VAR_1->dev, VAR_3);
 FUNC_4(VAR_3);
 FUNC_1(FUNC_3(VAR_1->dev), &VAR_2->risc);
 VAR_2->vb.state = VAR_0;
}
