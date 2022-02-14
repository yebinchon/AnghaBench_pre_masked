
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_dmabuf {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct videobuf_dmabuf*,int,unsigned long,unsigned long) ;

int FUNC_3(struct videobuf_dmabuf *VAR_1, int VAR_2,
      unsigned long VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_0->mm->mmap_sem);
 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(&VAR_0->mm->mmap_sem);

 return VAR_5;
}
