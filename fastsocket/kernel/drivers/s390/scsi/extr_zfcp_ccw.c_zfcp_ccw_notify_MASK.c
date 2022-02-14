
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {TYPE_1__* ccw_device; int dbf; int status; } ;
struct ccw_device {int dev; } ;
struct TYPE_2__ {int dev; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct zfcp_adapter* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct zfcp_adapter*,int ,char*,int *) ;
 int FUNC_6 (struct zfcp_adapter*,int ,char*,int *) ;
 int FUNC_7 (struct zfcp_adapter*,char*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct ccw_device *VAR_4, int VAR_5)
{
 struct zfcp_adapter *VAR_6 = FUNC_1(&VAR_4->dev);

 switch (VAR_5) {
 case 130:
  if (FUNC_0(&VAR_6->status) &
      VAR_1) {
   FUNC_4(VAR_6->dbf, "nigo");
   break;
  }
  FUNC_3(&VAR_6->ccw_device->dev,
    "The FCP device has been detached\n");
  FUNC_6(VAR_6, 0, "ccnoti1", ((void*)0));
  break;
 case 129:
  FUNC_3(&VAR_6->ccw_device->dev,
    "The CHPID for the FCP device is offline\n");
  FUNC_6(VAR_6, 0, "ccnoti2", ((void*)0));
  break;
 case 128:
  if (FUNC_0(&VAR_6->status) &
      VAR_1) {
   FUNC_4(VAR_6->dbf, "niop");
   break;
  }
  FUNC_2(&VAR_6->ccw_device->dev,
    "The FCP device is operational again\n");
  FUNC_7(VAR_6, "ccnoti3", ((void*)0),
            VAR_3,
            VAR_0);
  FUNC_5(VAR_6, VAR_2,
     "ccnoti4", ((void*)0));
  break;
 case 131:
  FUNC_3(&VAR_6->ccw_device->dev, "The FCP device "
    "did not respond within the specified time\n");
  FUNC_6(VAR_6, 0, "ccnoti5", ((void*)0));
  break;
 }
 return 1;
}
