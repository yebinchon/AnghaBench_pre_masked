
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct nvt_dev* priv; } ;
struct nvt_dev {int in_use; int nvt_lock; } ;


 int FUNC_0 (struct nvt_dev*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct rc_dev *VAR_0)
{
 struct nvt_dev *VAR_1 = VAR_0->priv;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->nvt_lock, VAR_2);
 VAR_1->in_use = 0;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->nvt_lock, VAR_2);
}
