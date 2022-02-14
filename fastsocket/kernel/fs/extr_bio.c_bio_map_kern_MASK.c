
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct bio {unsigned int bi_size; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 struct bio* FUNC_2 (struct request_queue*,void*,unsigned int,int ) ;
 int FUNC_3 (struct bio*) ;

struct bio *FUNC_4(struct request_queue *VAR_1, void *VAR_2, unsigned int VAR_3,
    gfp_t VAR_4)
{
 struct bio *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_1(VAR_5))
  return VAR_5;

 if (VAR_5->bi_size == VAR_3)
  return VAR_5;




 FUNC_3(VAR_5);
 return FUNC_0(-VAR_0);
}
