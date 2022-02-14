
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; int bsize; } ;
struct saa7134_buf {TYPE_1__ vb; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct saa7134_buf *VAR_0)
{
 return FUNC_0(VAR_0->vb.bsize) * VAR_0->vb.i;
}
