
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct videobuf_queue {int vb_lock; TYPE_2__** bufs; TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ memory; } ;
struct TYPE_5__ {int (* buf_release ) (struct videobuf_queue*,TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct videobuf_queue*,TYPE_2__*) ;
 int FUNC_5 (struct videobuf_queue*) ;

__attribute__((used)) static void FUNC_6(struct videobuf_queue *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->vb_lock);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (((void*)0) == VAR_2->bufs[VAR_3])
   continue;
  if (VAR_0 != VAR_2->bufs[VAR_3]->memory)
   continue;
  VAR_2->ops->buf_release(VAR_2, VAR_2->bufs[VAR_3]);
  FUNC_3(VAR_2->bufs[VAR_3]);
  FUNC_0(VAR_2->bufs[VAR_3]);
  VAR_2->bufs[VAR_3] = ((void*)0);
 }

 FUNC_2(&VAR_2->vb_lock);

 FUNC_5(VAR_2);
}
