
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvscsi_host_data {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* resume ) (struct ibmvscsi_host_data*) ;} ;


 struct ibmvscsi_host_data* FUNC_0 (struct device*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct ibmvscsi_host_data*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1)
{
 struct ibmvscsi_host_data *VAR_2 = FUNC_0(VAR_1);
 return VAR_0->resume(VAR_2);
}
