
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {int devcmd_lock; int vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct enic *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->devcmd_lock);
 VAR_2 = FUNC_2(VAR_1->vdev,
  VAR_0);
 FUNC_1(&VAR_1->devcmd_lock);

 return VAR_2;
}
