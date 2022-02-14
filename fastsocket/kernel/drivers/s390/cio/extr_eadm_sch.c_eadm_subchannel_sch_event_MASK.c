
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int lock; int todo_work; int dev; } ;
struct eadm_private {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct subchannel*) ;
 int FUNC_1 (struct subchannel*,int ) ;
 int FUNC_2 (int *) ;
 struct eadm_private* FUNC_3 (struct subchannel*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct subchannel *VAR_3, int VAR_4)
{
 struct eadm_private *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_4(VAR_3->lock, VAR_6);
 if (!FUNC_2(&VAR_3->dev))
  goto out_unlock;

 if (FUNC_6(&VAR_3->todo_work))
  goto out_unlock;

 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_3, VAR_2);
  goto out_unlock;
 }
 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5->state == VAR_1)
  VAR_5->state = VAR_0;

out_unlock:
 FUNC_5(VAR_3->lock, VAR_6);

 return VAR_7;
}
