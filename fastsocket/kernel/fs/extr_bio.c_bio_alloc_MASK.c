
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_destructor; } ;
typedef int gfp_t ;


 struct bio* FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

struct bio *FUNC_1(gfp_t VAR_2, int VAR_3)
{
 struct bio *VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1);

 if (VAR_4)
  VAR_4->bi_destructor = VAR_0;

 return VAR_4;
}
