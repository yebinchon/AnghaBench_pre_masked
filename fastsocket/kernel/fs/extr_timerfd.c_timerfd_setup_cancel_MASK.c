
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timerfd_ctx {scalar_t__ clockid; int might_cancel; int clist; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct timerfd_ctx*) ;

__attribute__((used)) static void FUNC_4(struct timerfd_ctx *VAR_5, int VAR_6)
{
 if (VAR_5->clockid == VAR_0 && (VAR_6 & VAR_1) &&
     (VAR_6 & VAR_2)) {
  if (!VAR_5->might_cancel) {
   VAR_5->might_cancel = 1;
   FUNC_1(&VAR_4);
   FUNC_0(&VAR_5->clist, &VAR_3);
   FUNC_2(&VAR_4);
  }
 } else if (VAR_5->might_cancel) {
  FUNC_3(VAR_5);
 }
}
