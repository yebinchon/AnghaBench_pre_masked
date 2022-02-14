
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dev; } ;
struct videobuf_dmabuf {int direction; int sglen; int sglist; } ;
struct videobuf_buffer {scalar_t__ memory; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct videobuf_dmabuf*) ;
 int FUNC_2 (struct videobuf_queue*,struct videobuf_dmabuf*) ;
 struct videobuf_dmabuf* FUNC_3 (struct videobuf_buffer*) ;
 int FUNC_4 (struct videobuf_buffer*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct videobuf_queue *VAR_3,
        struct videobuf_buffer *VAR_4)
{
 struct videobuf_dmabuf *VAR_5 = FUNC_3(VAR_4);


 FUNC_4(VAR_4, 0, 0);
 if (VAR_4->memory == VAR_1) {
  FUNC_0(VAR_3->dev, VAR_5->sglist, VAR_5->sglen,
        VAR_5->direction);
  VAR_5->direction = VAR_0;
 } else {
  FUNC_2(VAR_3, FUNC_3(VAR_4));
  FUNC_1(FUNC_3(VAR_4));
 }

 VAR_4->state = VAR_2;
}
