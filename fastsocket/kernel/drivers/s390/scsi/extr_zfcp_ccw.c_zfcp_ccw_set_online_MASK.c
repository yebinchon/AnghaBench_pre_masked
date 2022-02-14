
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {int scan_work; scalar_t__ req_no; } ;
struct ccw_device {int dev; } ;
struct TYPE_2__ {int config_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 struct zfcp_adapter* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ccw_device*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 (struct zfcp_adapter*,int ,char*,int *) ;
 int FUNC_8 (struct zfcp_adapter*,char*,int *,int ,int ) ;
 int FUNC_9 (struct zfcp_adapter*) ;
 int FUNC_10 (struct zfcp_adapter*) ;
 int FUNC_11 (struct zfcp_adapter*) ;

__attribute__((used)) static int FUNC_12(struct ccw_device *VAR_4)
{
 struct zfcp_adapter *VAR_5;
 int VAR_6 = 0;

 FUNC_4(&VAR_3.config_mutex);
 VAR_5 = FUNC_2(&VAR_4->dev);

 if (!VAR_5) {
  VAR_6 = FUNC_6(VAR_4);
  if (VAR_6) {
   FUNC_1(&VAR_4->dev,
    "Setting up data structures for the "
    "FCP adapter failed\n");
   goto out;
  }
  VAR_5 = FUNC_2(&VAR_4->dev);
 }


 FUNC_0(!FUNC_11(VAR_5));
 VAR_5->req_no = 0;

 FUNC_8(VAR_5, "ccsonl1", ((void*)0),
           VAR_2, VAR_0);
 FUNC_7(VAR_5, VAR_1,
    "ccsonl2", ((void*)0));
 FUNC_9(VAR_5);



 FUNC_10(VAR_5);
out:
 FUNC_5(&VAR_3.config_mutex);
 if (!VAR_6)
  FUNC_3(&VAR_5->scan_work);
 return VAR_6;
}
