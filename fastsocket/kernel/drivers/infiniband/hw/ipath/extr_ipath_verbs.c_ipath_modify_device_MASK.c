
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_device_modify {int sys_image_guid; int node_desc; } ;
struct ib_device {int node_desc; } ;
struct TYPE_2__ {int sys_image_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_3,
          int VAR_4,
          struct ib_device_modify *VAR_5)
{
 int VAR_6;

 if (VAR_4 & ~(VAR_2 |
       VAR_1)) {
  VAR_6 = -VAR_0;
  goto bail;
 }

 if (VAR_4 & VAR_1)
  FUNC_1(VAR_3->node_desc, VAR_5->node_desc, 64);

 if (VAR_4 & VAR_2)
  FUNC_2(VAR_3)->sys_image_guid =
   FUNC_0(VAR_5->sys_image_guid);

 VAR_6 = 0;

bail:
 return VAR_6;
}
