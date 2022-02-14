
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int pr_generation; } ;
struct se_device {int dev_reservation_lock; TYPE_1__ t10_pr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u32 FUNC_2(struct se_device *VAR_0)
{
 u32 VAR_1;
 FUNC_0(&VAR_0->dev_reservation_lock);
 VAR_1 = VAR_0->t10_pr.pr_generation++;
 FUNC_1(&VAR_0->dev_reservation_lock);

 return VAR_1;
}
