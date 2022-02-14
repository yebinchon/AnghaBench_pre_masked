
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_dmabuf {TYPE_1__* sglist; } ;
struct saa7134_buf {int vb; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 int FUNC_0 (struct saa7134_buf*) ;
 struct videobuf_dmabuf* FUNC_1 (int *) ;

unsigned long FUNC_2(struct saa7134_buf *VAR_0)
{
 unsigned long VAR_1;
 struct videobuf_dmabuf *VAR_2=FUNC_1(&VAR_0->vb);

 VAR_1 = FUNC_0(VAR_0) * 4096;
 VAR_1 += VAR_2->sglist[0].offset;
 return VAR_1;
}
