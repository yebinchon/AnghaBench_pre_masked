
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int thread_continue_t ;
struct jetsam_thread_state {int memorystatus_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 struct jetsam_thread_state* FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(uint32_t VAR_2, thread_continue_t VAR_3)
{
 struct jetsam_thread_state *VAR_4 = FUNC_2();

 if (VAR_2) {
  FUNC_1(&VAR_4->memorystatus_wakeup, VAR_1, VAR_2, VAR_0);
 } else {
  FUNC_0(&VAR_4->memorystatus_wakeup, VAR_1);
 }

 return FUNC_3(VAR_3);
}
