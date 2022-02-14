
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_dev {int cap_flags; int flags; TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* set_device_state ) (struct rt2x00_dev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*) ;
 int FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct rt2x00_dev*,int ) ;
 int FUNC_10 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;

int FUNC_12(struct rt2x00_dev *VAR_4)
{
 int VAR_5;





 if (FUNC_11(VAR_1, &VAR_4->flags))
  return 0;




 FUNC_6(VAR_4);




 VAR_5 =
     VAR_4->ops->lib->set_device_state(VAR_4, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4->ops->lib->set_device_state(VAR_4, VAR_2);

 FUNC_1(VAR_4, 1);
 FUNC_0(VAR_4, 1);

 FUNC_8(VAR_1, &VAR_4->flags);




 FUNC_7(VAR_4);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
 if (FUNC_11(VAR_0, &VAR_4->cap_flags))
  FUNC_4(VAR_4);




 FUNC_5(VAR_4);

 return 0;
}
