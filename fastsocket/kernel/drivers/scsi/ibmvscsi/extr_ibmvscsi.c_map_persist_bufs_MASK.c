
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvscsi_host_data {void* caps_addr; int dev; void* adapter_info_addr; int madapter_info; int caps; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ,int *,int,int ) ;
 scalar_t__ FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,void*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct ibmvscsi_host_data *VAR_1)
{

 VAR_1->caps_addr = FUNC_1(VAR_1->dev, &VAR_1->caps,
          sizeof(VAR_1->caps), VAR_0);

 if (FUNC_2(VAR_1->dev, VAR_1->caps_addr)) {
  FUNC_0(VAR_1->dev, "Unable to map capabilities buffer!\n");
  return 1;
 }

 VAR_1->adapter_info_addr = FUNC_1(VAR_1->dev,
           &VAR_1->madapter_info,
           sizeof(VAR_1->madapter_info),
           VAR_0);
 if (FUNC_2(VAR_1->dev, VAR_1->adapter_info_addr)) {
  FUNC_0(VAR_1->dev, "Unable to map adapter info buffer!\n");
  FUNC_3(VAR_1->dev, VAR_1->caps_addr,
     sizeof(VAR_1->caps), VAR_0);
  return 1;
 }

 return 0;
}
