
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;
struct saa7134_fh {int type; struct videobuf_queue vbi; struct videobuf_queue cap; } ;


 int FUNC_0 () ;



__attribute__((used)) static struct videobuf_queue* FUNC_1(struct saa7134_fh *VAR_0)
{
 struct videobuf_queue* VAR_1 = ((void*)0);

 switch (VAR_0->type) {
 case 128:
  VAR_1 = &VAR_0->cap;
  break;
 case 129:
  VAR_1 = &VAR_0->vbi;
  break;
 default:
  FUNC_0();
 }
 return VAR_1;
}
