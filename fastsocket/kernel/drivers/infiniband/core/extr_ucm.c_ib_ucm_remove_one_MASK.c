
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucm_device {int dev; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct ib_ucm_device* FUNC_1 (struct ib_device*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_1)
{
 struct ib_ucm_device *VAR_2 = FUNC_1(VAR_1, &VAR_0);

 if (!VAR_2)
  return;

 FUNC_0(&VAR_2->dev);
}
