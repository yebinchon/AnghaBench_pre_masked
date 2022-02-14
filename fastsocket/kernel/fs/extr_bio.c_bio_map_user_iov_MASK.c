
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_iovec {int dummy; } ;
struct request_queue {int dummy; } ;
struct block_device {int dummy; } ;
struct bio {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (struct bio*) ;
 struct bio* FUNC_1 (struct request_queue*,struct block_device*,struct sg_iovec*,int,int,int ) ;
 int FUNC_2 (struct bio*) ;

struct bio *FUNC_3(struct request_queue *VAR_0, struct block_device *VAR_1,
        struct sg_iovec *VAR_2, int VAR_3,
        int VAR_4, gfp_t VAR_5)
{
 struct bio *VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5);
 if (FUNC_0(VAR_6))
  return VAR_6;







 FUNC_2(VAR_6);

 return VAR_6;
}
