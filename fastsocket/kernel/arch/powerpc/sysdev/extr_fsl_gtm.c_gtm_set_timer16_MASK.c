
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtm_timer {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct gtm_timer*,int,unsigned long,int) ;

int FUNC_2(struct gtm_timer *VAR_1, unsigned long VAR_2, bool VAR_3)
{

 int VAR_4 = 1000000;
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 > 15) {
  VAR_4 >>= VAR_5 - 15;
  VAR_2 >>= VAR_5 - 15;
 }

 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_4, VAR_2, VAR_3);
}
