
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_dev {TYPE_2__* ops; int flags; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* uninitialize ) (struct rt2x00_dev*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_1)
{
 if (!FUNC_3(VAR_0, &VAR_1->flags))
  return;




 FUNC_1(VAR_1);




 VAR_1->ops->lib->uninitialize(VAR_1);




 FUNC_0(VAR_1);
}
