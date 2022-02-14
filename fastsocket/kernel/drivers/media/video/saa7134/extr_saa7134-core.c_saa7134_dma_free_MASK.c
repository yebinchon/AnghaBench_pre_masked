
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {int dev; } ;
struct videobuf_dmabuf {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct saa7134_buf {TYPE_1__ vb; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct videobuf_dmabuf*) ;
 int FUNC_3 (int ,struct videobuf_dmabuf*) ;
 struct videobuf_dmabuf* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct videobuf_queue*,TYPE_1__*,int ,int ) ;

void FUNC_6(struct videobuf_queue *VAR_1,struct saa7134_buf *VAR_2)
{
 struct videobuf_dmabuf *VAR_3=FUNC_4(&VAR_2->vb);
 FUNC_0(FUNC_1());

 FUNC_5(VAR_1, &VAR_2->vb, 0, 0);
 FUNC_3(VAR_1->dev, VAR_3);
 FUNC_2(VAR_3);
 VAR_2->vb.state = VAR_0;
}
