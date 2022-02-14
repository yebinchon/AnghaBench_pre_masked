
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int dummy; } ;
struct pvr2_hdw {int big_lock; int tuner_signal_info; scalar_t__ tuner_signal_stale; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_tuner*,int *,int) ;
 int FUNC_3 (struct pvr2_hdw*) ;

int FUNC_4(struct pvr2_hdw *VAR_0,struct v4l2_tuner *VAR_1)
{
 FUNC_1(VAR_0->big_lock); do {
  if (VAR_0->tuner_signal_stale) {
   FUNC_3(VAR_0);
  }
  FUNC_2(VAR_1,&VAR_0->tuner_signal_info,sizeof(struct v4l2_tuner));
 } while (0); FUNC_0(VAR_0->big_lock);
 return 0;
}
