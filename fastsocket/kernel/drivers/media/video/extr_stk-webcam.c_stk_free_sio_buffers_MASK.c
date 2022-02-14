
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stk_camera {int n_sbufs; TYPE_1__* sio_bufs; int spinlock; int sio_full; int sio_avail; } ;
struct TYPE_2__ {scalar_t__ mapcount; int * buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct stk_camera *VAR_1)
{
 int VAR_2;
 int VAR_3;
 unsigned long VAR_4;
 if (VAR_1->n_sbufs == 0 || VAR_1->sio_bufs == ((void*)0))
  return 0;



 for (VAR_2 = 0; VAR_2 < VAR_1->n_sbufs; VAR_2++) {
  if (VAR_1->sio_bufs[VAR_2].mapcount > 0)
   return -VAR_0;
 }



 FUNC_2(&VAR_1->spinlock, VAR_4);
 FUNC_0(&VAR_1->sio_avail);
 FUNC_0(&VAR_1->sio_full);
 VAR_3 = VAR_1->n_sbufs;
 VAR_1->n_sbufs = 0;
 FUNC_3(&VAR_1->spinlock, VAR_4);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_1->sio_bufs[VAR_2].buffer != ((void*)0))
   FUNC_4(VAR_1->sio_bufs[VAR_2].buffer);
 }
 FUNC_1(VAR_1->sio_bufs);
 VAR_1->sio_bufs = ((void*)0);
 return 0;
}
