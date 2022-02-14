
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_ibport {int dummy; } ;
struct qib_devdata {unsigned int num_pports; TYPE_1__* pport; } ;
struct ib_device_modify {int sys_image_guid; int node_desc; } ;
struct ib_device {int node_desc; } ;
struct TYPE_2__ {struct qib_ibport ibport_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct qib_devdata* FUNC_1 (struct ib_device*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct qib_ibport*) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_4,
        int VAR_5,
        struct ib_device_modify *VAR_6)
{
 struct qib_devdata *VAR_7 = FUNC_1(VAR_4);
 unsigned VAR_8;
 int VAR_9;

 if (VAR_5 & ~(VAR_2 |
       VAR_1)) {
  VAR_9 = -VAR_0;
  goto bail;
 }

 if (VAR_5 & VAR_1) {
  FUNC_2(VAR_4->node_desc, VAR_6->node_desc, 64);
  for (VAR_8 = 0; VAR_8 < VAR_7->num_pports; VAR_8++) {
   struct qib_ibport *VAR_10 = &VAR_7->pport[VAR_8].ibport_data;

   FUNC_3(VAR_10);
  }
 }

 if (VAR_5 & VAR_2) {
  VAR_3 =
   FUNC_0(VAR_6->sys_image_guid);
  for (VAR_8 = 0; VAR_8 < VAR_7->num_pports; VAR_8++) {
   struct qib_ibport *VAR_11 = &VAR_7->pport[VAR_8].ibport_data;

   FUNC_4(VAR_11);
  }
 }

 VAR_9 = 0;

bail:
 return VAR_9;
}
