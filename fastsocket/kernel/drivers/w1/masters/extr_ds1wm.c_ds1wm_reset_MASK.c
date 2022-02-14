
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ds1wm_data {TYPE_1__* pdev; int slave_present; scalar_t__ active_high; int * reset_complete; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct ds1wm_data*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct ds1wm_data *VAR_9)
{
 unsigned long VAR_10;
 FUNC_0(VAR_8);

 VAR_9->reset_complete = &VAR_8;

 FUNC_3(VAR_9, VAR_6, VAR_2 |
  (VAR_9->active_high ? VAR_5 : 0));

 FUNC_3(VAR_9, VAR_0, VAR_1);

 VAR_10 = FUNC_5(&VAR_8, VAR_7);
 VAR_9->reset_complete = ((void*)0);
 if (!VAR_10) {
  FUNC_2(&VAR_9->pdev->dev, "reset failed\n");
  return 1;
 }
 FUNC_4(1);

 FUNC_3(VAR_9, VAR_6,
  VAR_3 | VAR_4 | VAR_2 |
  (VAR_9->active_high ? VAR_5 : 0));

 if (!VAR_9->slave_present) {
  FUNC_1(&VAR_9->pdev->dev, "reset: no devices found\n");
  return 1;
 }

 return 0;
}
