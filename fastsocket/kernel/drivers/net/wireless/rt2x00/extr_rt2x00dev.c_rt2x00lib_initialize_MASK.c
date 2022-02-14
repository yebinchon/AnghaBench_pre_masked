
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_dev {int flags; TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* initialize ) (struct rt2x00_dev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct rt2x00_dev *VAR_1)
{
 int VAR_2;

 if (FUNC_4(VAR_0, &VAR_1->flags))
  return 0;




 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;




 VAR_2 = VAR_1->ops->lib->initialize(VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_1);
  return VAR_2;
 }

 FUNC_2(VAR_0, &VAR_1->flags);

 return 0;
}
