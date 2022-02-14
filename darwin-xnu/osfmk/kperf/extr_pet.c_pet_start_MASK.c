
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kperf_sample {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void
FUNC_2(void)
{
 FUNC_1(VAR_2, VAR_0);

 if (VAR_3) {
  return;
 }

 VAR_4 = FUNC_0(sizeof(struct kperf_sample));
 if (!VAR_4) {
  return;
 }

 VAR_3 = VAR_1;
}
