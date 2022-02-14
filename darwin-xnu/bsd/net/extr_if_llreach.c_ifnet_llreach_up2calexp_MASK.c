
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct if_llreach {scalar_t__ lr_basecal; scalar_t__ lr_baseup; scalar_t__ lr_reachable; } ;


 int FUNC_0 (struct timeval*) ;
 scalar_t__ FUNC_1 () ;

u_int64_t
FUNC_2(struct if_llreach *VAR_0, u_int64_t VAR_1)
{
 u_int64_t VAR_2 = 0;

 if (VAR_1 != 0) {
  struct timeval VAR_3;
  u_int64_t VAR_4;

  FUNC_0(&VAR_3);
  VAR_4 = FUNC_1();





  VAR_0->lr_basecal += (VAR_3.tv_sec - VAR_0->lr_basecal) -
      (VAR_4 - VAR_0->lr_baseup);

  VAR_2 = VAR_0->lr_basecal + VAR_0->lr_reachable +
      (VAR_1 - VAR_0->lr_baseup);
 }

 return (VAR_2);
}
