
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_dev {int nvqs; TYPE_1__* vqs; } ;
struct TYPE_2__ {void* ubuf_info; void* heads; void* log; void* indirect; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static long FUNC_2(struct vhost_dev *VAR_4)
{
 int VAR_5;
 bool VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->nvqs; ++VAR_5) {
  VAR_4->vqs[VAR_5].indirect = FUNC_0(sizeof *VAR_4->vqs[VAR_5].indirect *
            VAR_2, VAR_1);
  VAR_4->vqs[VAR_5].log = FUNC_0(sizeof *VAR_4->vqs[VAR_5].log * VAR_2,
       VAR_1);
  VAR_4->vqs[VAR_5].heads = FUNC_0(sizeof *VAR_4->vqs[VAR_5].heads *
         VAR_2, VAR_1);

  VAR_6 = VAR_3 & (0x1 << VAR_5);
  if (VAR_6)
   VAR_4->vqs[VAR_5].ubuf_info =
    FUNC_0(sizeof *VAR_4->vqs[VAR_5].ubuf_info *
     VAR_2, VAR_1);

  if (!VAR_4->vqs[VAR_5].indirect || !VAR_4->vqs[VAR_5].log ||
   !VAR_4->vqs[VAR_5].heads ||
   (VAR_6 && !VAR_4->vqs[VAR_5].ubuf_info))
   goto err_nomem;
 }
 return 0;
err_nomem:
 for (; VAR_5 >= 0; --VAR_5)
  FUNC_1(&VAR_4->vqs[VAR_5]);
 return -VAR_0;
}
