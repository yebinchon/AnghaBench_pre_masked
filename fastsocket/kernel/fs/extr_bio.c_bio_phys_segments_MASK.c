
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct bio {int bi_phys_segments; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct request_queue*,struct bio*) ;
 scalar_t__ FUNC_2 (int) ;

inline int FUNC_3(struct request_queue *VAR_1, struct bio *VAR_2)
{
 if (FUNC_2(!FUNC_0(VAR_2, VAR_0)))
  FUNC_1(VAR_1, VAR_2);

 return VAR_2->bi_phys_segments;
}
