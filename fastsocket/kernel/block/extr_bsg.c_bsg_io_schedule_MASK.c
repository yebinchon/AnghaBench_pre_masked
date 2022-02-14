
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_device {scalar_t__ done_cmds; scalar_t__ queued_cmds; int lock; int wq_done; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct bsg_device *VAR_5)
{
 FUNC_1(VAR_4);
 int VAR_6 = 0;

 FUNC_5(&VAR_5->lock);

 FUNC_0(VAR_5->done_cmds > VAR_5->queued_cmds);







 if (VAR_5->done_cmds == VAR_5->queued_cmds) {
  VAR_6 = -VAR_2;
  goto unlock;
 }

 if (!FUNC_7(VAR_0, &VAR_5->flags)) {
  VAR_6 = -VAR_1;
  goto unlock;
 }

 FUNC_4(&VAR_5->wq_done, &VAR_4, VAR_3);
 FUNC_6(&VAR_5->lock);
 FUNC_3();
 FUNC_2(&VAR_5->wq_done, &VAR_4);

 return VAR_6;
unlock:
 FUNC_6(&VAR_5->lock);
 return VAR_6;
}
