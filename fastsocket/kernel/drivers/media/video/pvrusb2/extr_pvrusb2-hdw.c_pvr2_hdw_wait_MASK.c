
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {scalar_t__ state_stale; int master_state; int state_wait_data; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct pvr2_hdw *VAR_0,int VAR_1)
{
 return FUNC_0(
  VAR_0->state_wait_data,
  (VAR_0->state_stale == 0) &&
  (!VAR_1 || (VAR_0->master_state != VAR_1)));
}
