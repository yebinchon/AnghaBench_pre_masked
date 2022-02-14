
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mad_version; int os_type; int partition_number; int partition_name; int srp_version; } ;
struct ibmvscsi_host_data {TYPE_1__ madapter_info; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ibmvscsi_host_data *VAR_3)
{
 FUNC_1(&VAR_3->madapter_info, 0x00,
   sizeof(VAR_3->madapter_info));

 FUNC_0(VAR_3->dev, "SRP_VERSION: %s\n", VAR_0);
 FUNC_2(VAR_3->madapter_info.srp_version, VAR_0);

 FUNC_3(VAR_3->madapter_info.partition_name, VAR_1,
   sizeof(VAR_3->madapter_info.partition_name));

 VAR_3->madapter_info.partition_number = VAR_2;

 VAR_3->madapter_info.mad_version = 1;
 VAR_3->madapter_info.os_type = 2;
}
