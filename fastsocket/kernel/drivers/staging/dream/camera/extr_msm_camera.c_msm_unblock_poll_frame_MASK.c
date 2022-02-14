
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_sync {int unblock_poll_frame; int prev_frame_q_lock; int prev_frame_wait; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct msm_sync *VAR_0)
{
 unsigned long VAR_1;
 FUNC_0("msm_unblock_poll_frame\n");
 FUNC_1(&VAR_0->prev_frame_q_lock, VAR_1);
 VAR_0->unblock_poll_frame = 1;
 FUNC_3(&VAR_0->prev_frame_wait);
 FUNC_2(&VAR_0->prev_frame_q_lock, VAR_1);
 return 0;
}
