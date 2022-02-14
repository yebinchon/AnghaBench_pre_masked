
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvscsi_host_data {int srp_task; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ibmvscsi_host_data *VAR_0)
{
 FUNC_2(FUNC_1(VAR_0->dev));
 FUNC_0(&VAR_0->srp_task);
 return 0;
}
