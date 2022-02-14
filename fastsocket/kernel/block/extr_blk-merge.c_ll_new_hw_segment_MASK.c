
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct request* last_merge; } ;
struct request {scalar_t__ nr_phys_segments; int cmd_flags; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,struct bio*) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;

__attribute__((used)) static inline int FUNC_2(struct request_queue *VAR_1,
        struct request *VAR_2,
        struct bio *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_3);

 if (VAR_2->nr_phys_segments + VAR_4 > FUNC_1(VAR_1)) {
  VAR_2->cmd_flags |= VAR_0;
  if (VAR_2 == VAR_1->last_merge)
   VAR_1->last_merge = ((void*)0);
  return 0;
 }





 VAR_2->nr_phys_segments += VAR_4;
 return 1;
}
