
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {unsigned int intr_count; unsigned int rq_count; unsigned int raw_wq_count; unsigned int wq_copy_count; unsigned int cq_count; int * io_sgl_pool; int io_req_pool; int * intr; int * cq; int * wq_copy; int * rq; int * wq; int vdev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fnic*,int) ;
 int FUNC_1 (struct fnic*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct fnic*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct fnic *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 FUNC_5(VAR_4->vdev);
 for (VAR_5 = 0; VAR_5 < VAR_4->intr_count; VAR_5++)
  FUNC_7(&VAR_4->intr[VAR_5]);

 for (VAR_5 = 0; VAR_5 < VAR_4->rq_count; VAR_5++) {
  VAR_6 = FUNC_9(&VAR_4->rq[VAR_5]);
  if (VAR_6)
   return VAR_6;
 }
 for (VAR_5 = 0; VAR_5 < VAR_4->raw_wq_count; VAR_5++) {
  VAR_6 = FUNC_13(&VAR_4->wq[VAR_5]);
  if (VAR_6)
   return VAR_6;
 }
 for (VAR_5 = 0; VAR_5 < VAR_4->wq_copy_count; VAR_5++) {
  VAR_6 = FUNC_12(&VAR_4->wq_copy[VAR_5]);
  if (VAR_6)
   return VAR_6;
 }


 FUNC_2(VAR_4, -1);
 FUNC_1(VAR_4, -1);
 FUNC_0(VAR_4, -1);


 for (VAR_5 = 0; VAR_5 < VAR_4->raw_wq_count; VAR_5++)
  FUNC_10(&VAR_4->wq[VAR_5], VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4->rq_count; VAR_5++)
  FUNC_8(&VAR_4->rq[VAR_5], VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4->wq_copy_count; VAR_5++)
  FUNC_11(&VAR_4->wq_copy[VAR_5],
       VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_4->cq_count; VAR_5++)
  FUNC_4(&VAR_4->cq[VAR_5]);
 for (VAR_5 = 0; VAR_5 < VAR_4->intr_count; VAR_5++)
  FUNC_6(&VAR_4->intr[VAR_5]);

 FUNC_3(VAR_4->io_req_pool);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_3(VAR_4->io_sgl_pool[VAR_5]);

 return 0;
}
