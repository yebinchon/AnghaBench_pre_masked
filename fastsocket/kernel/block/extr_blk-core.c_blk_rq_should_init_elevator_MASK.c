
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_rw; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct bio *VAR_2)
{
 if (!VAR_2)
  return 1;





 if (VAR_2->bi_rw & (VAR_0 | VAR_1))
  return 0;

 return 1;
}
