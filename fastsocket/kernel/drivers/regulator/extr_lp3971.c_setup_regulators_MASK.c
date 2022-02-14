
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct lp3971_platform_data {int num_regulators; TYPE_1__* regulators; } ;
struct lp3971 {int num_regulators; scalar_t__* rdev; int dev; } ;
struct TYPE_2__ {int id; int initdata; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,struct lp3971*) ;
 int FUNC_5 (scalar_t__) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_6(struct lp3971 *VAR_2,
 struct lp3971_platform_data *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6 = VAR_3->num_regulators;
 VAR_2->num_regulators = VAR_6;
 VAR_2->rdev = FUNC_3(sizeof(struct regulator_dev *) * VAR_6,
  VAR_0);


 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  int VAR_7 = VAR_3->regulators[VAR_4].id;
  VAR_2->rdev[VAR_4] = FUNC_4(&VAR_1[VAR_7],
   VAR_2->dev, VAR_3->regulators[VAR_4].initdata, VAR_2);

  VAR_5 = FUNC_0(VAR_2->rdev[VAR_4]);
  if (VAR_5) {
   FUNC_1(VAR_2->dev, "regulator init failed: %d\n",
    VAR_5);
   goto error;
  }
 }

 return 0;
error:
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  if (VAR_2->rdev[VAR_4])
   FUNC_5(VAR_2->rdev[VAR_4]);
 FUNC_2(VAR_2->rdev);
 VAR_2->rdev = ((void*)0);
 return VAR_5;
}
