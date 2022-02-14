
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {int work_queue; TYPE_1__* ccw_device; } ;
typedef int name ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct zfcp_adapter *VAR_2)
{
 char VAR_3[VAR_1];

 FUNC_2(VAR_3, sizeof(VAR_3), "zfcp_q_%s",
   FUNC_1(&VAR_2->ccw_device->dev));
 VAR_2->work_queue = FUNC_0(VAR_3);

 if (VAR_2->work_queue)
  return 0;
 return -VAR_0;
}
