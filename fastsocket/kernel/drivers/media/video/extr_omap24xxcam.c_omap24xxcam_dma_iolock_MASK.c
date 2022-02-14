
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dev; } ;
struct videobuf_dmabuf {scalar_t__ sglen; int * sglist; int direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,scalar_t__,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct videobuf_queue *VAR_2,
      struct videobuf_dmabuf *VAR_3)
{
 int VAR_4 = 0;

 VAR_3->direction = VAR_1;
 if (!FUNC_0(VAR_2->dev, VAR_3->sglist, VAR_3->sglen, VAR_3->direction)) {
  FUNC_1(VAR_3->sglist);
  VAR_3->sglist = ((void*)0);
  VAR_3->sglen = 0;
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
