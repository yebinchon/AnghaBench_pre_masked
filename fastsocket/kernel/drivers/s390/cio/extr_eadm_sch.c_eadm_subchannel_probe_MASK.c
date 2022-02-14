
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int kobj; } ;
struct subchannel {TYPE_1__ dev; int * lock; int isc; } ;
struct eadm_private {int head; struct subchannel* sch; int state; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (struct subchannel*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct eadm_private*) ;
 int FUNC_6 (int *,int ) ;
 struct eadm_private* FUNC_7 (int,int) ;
 int FUNC_8 (int *,int *) ;
 int VAR_7 ;
 int FUNC_9 (struct subchannel*,struct eadm_private*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct subchannel *VAR_8)
{
 struct eadm_private *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_4 | VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_0(&VAR_9->head);
 FUNC_4(&VAR_9->timer);

 FUNC_10(VAR_8->lock);
 FUNC_9(VAR_8, VAR_9);
 VAR_9->state = VAR_0;
 VAR_9->sch = VAR_8;
 VAR_8->isc = VAR_1;
 VAR_10 = FUNC_1(VAR_8, (u32)(unsigned long)VAR_8);
 if (VAR_10) {
  FUNC_9(VAR_8, ((void*)0));
  FUNC_11(VAR_8->lock);
  FUNC_5(VAR_9);
  goto out;
 }
 FUNC_11(VAR_8->lock);

 FUNC_10(&VAR_7);
 FUNC_8(&VAR_9->head, &VAR_6);
 FUNC_11(&VAR_7);

 if (FUNC_2(&VAR_8->dev)) {
  FUNC_3(&VAR_8->dev, 0);
  FUNC_6(&VAR_8->dev.kobj, VAR_5);
 }
out:
 return VAR_10;
}
