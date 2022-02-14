
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_fsf_req {int status; TYPE_2__* adapter; } ;
struct TYPE_4__ {TYPE_1__* ccw_device; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_2(struct zfcp_fsf_req *VAR_1)
{
 FUNC_0(&VAR_1->adapter->ccw_device->dev, "FCP device not "
  "operational because of an unsupported FC class\n");
 FUNC_1(VAR_1->adapter, 0, "fscns_1", VAR_1);
 VAR_1->status |= VAR_0;
}
