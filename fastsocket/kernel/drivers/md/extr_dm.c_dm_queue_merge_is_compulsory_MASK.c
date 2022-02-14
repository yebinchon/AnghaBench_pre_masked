
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ make_request_fn; struct mapped_device* queuedata; int merge_bvec_fn; } ;
struct mapped_device {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

int FUNC_1(struct request_queue *VAR_2)
{
 struct mapped_device *VAR_3;

 if (!VAR_2->merge_bvec_fn)
  return 0;

 if (VAR_2->make_request_fn == VAR_1) {
  VAR_3 = VAR_2->queuedata;
  if (FUNC_0(VAR_0, &VAR_3->flags))
   return 0;
 }

 return 1;
}
