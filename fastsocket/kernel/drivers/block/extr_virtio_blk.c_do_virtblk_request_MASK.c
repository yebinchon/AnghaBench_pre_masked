
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_blk {scalar_t__ sg_elems; int vq; } ;
struct request_queue {struct virtio_blk* queuedata; } ;
struct request {scalar_t__ nr_phys_segments; } ;


 int FUNC_0 (int) ;
 struct request* FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*,struct virtio_blk*,struct request*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct request_queue *VAR_0)
{
 struct virtio_blk *VAR_1 = VAR_0->queuedata;
 struct request *VAR_2;
 unsigned int VAR_3 = 0;

 while ((VAR_2 = FUNC_1(VAR_0)) != ((void*)0)) {
  FUNC_0(VAR_2->nr_phys_segments + 2 > VAR_1->sg_elems);



  if (!FUNC_4(VAR_0, VAR_1, VAR_2)) {
   FUNC_3(VAR_0);
   break;
  }
  FUNC_2(VAR_2);
  VAR_3++;
 }

 if (VAR_3)
  FUNC_5(VAR_1->vq);
}
