
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rt2x00_dev {TYPE_3__* fw; TYPE_2__* ops; int cap_flags; } ;
struct TYPE_6__ {int size; int data; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {int (* load_firmware ) (struct rt2x00_dev*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct rt2x00_dev *VAR_1)
{
 int VAR_2;

 if (!FUNC_3(VAR_0, &VAR_1->cap_flags))
  return 0;

 if (!VAR_1->fw) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2)
   return VAR_2;
 }




 VAR_2 = VAR_1->ops->lib->load_firmware(VAR_1,
          VAR_1->fw->data,
          VAR_1->fw->size);






 FUNC_0(VAR_1, 0);

 return VAR_2;
}
