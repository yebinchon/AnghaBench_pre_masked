
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kperf_sample {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

void
FUNC_3(void)
{
 FUNC_2(VAR_3, VAR_1);

 if (!VAR_2) {
  return;
 }

 if (VAR_6 != ((void*)0)) {
  FUNC_0(VAR_8 != 0);
  FUNC_1(VAR_6, VAR_8);

  VAR_6 = ((void*)0);
  VAR_8 = 0;
  VAR_7 = 0;
 }

 if (VAR_9 != ((void*)0)) {
  FUNC_0(VAR_11 != 0);
  FUNC_1(VAR_9, VAR_11);

  VAR_9 = ((void*)0);
  VAR_11 = 0;
  VAR_10 = 0;
 }

 if (VAR_5 != ((void*)0)) {
  FUNC_1(VAR_5, sizeof(struct kperf_sample));
  VAR_5 = ((void*)0);
 }

 VAR_4 = VAR_0;
}
