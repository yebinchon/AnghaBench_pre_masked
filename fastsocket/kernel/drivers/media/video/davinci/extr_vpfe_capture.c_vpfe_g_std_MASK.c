
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpfe_device {size_t std_index; int v4l2_dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int std_id; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_1 (struct file*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, v4l2_std_id *VAR_4)
{
 struct vpfe_device *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(1, VAR_0, &VAR_5->v4l2_dev, "vpfe_g_std\n");

 *VAR_4 = VAR_1[VAR_5->std_index].std_id;
 return 0;
}
