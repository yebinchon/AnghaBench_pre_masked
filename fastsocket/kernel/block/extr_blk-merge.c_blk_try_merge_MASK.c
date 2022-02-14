
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct bio {scalar_t__ bi_sector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;

int FUNC_3(struct request *VAR_3, struct bio *VAR_4)
{
 if (FUNC_1(VAR_3) + FUNC_2(VAR_3) == VAR_4->bi_sector)
  return VAR_0;
 else if (FUNC_1(VAR_3) - FUNC_0(VAR_4) == VAR_4->bi_sector)
  return VAR_1;
 return VAR_2;
}
