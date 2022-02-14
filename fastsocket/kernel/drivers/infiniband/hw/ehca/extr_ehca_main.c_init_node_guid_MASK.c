
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hipz_query_hca {int node_guid; } ;
struct TYPE_2__ {int node_guid; } ;
struct ehca_shca {TYPE_1__ ib_device; int ipz_hca_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct hipz_query_hca* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct hipz_query_hca*) ;
 scalar_t__ FUNC_3 (int ,struct hipz_query_hca*) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(struct ehca_shca *VAR_4)
{
 int VAR_5 = 0;
 struct hipz_query_hca *VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 if (!VAR_6) {
  FUNC_1(&VAR_4->ib_device, "Can't allocate rblock memory.");
  return -VAR_1;
 }

 if (FUNC_3(VAR_4->ipz_hca_handle, VAR_6) != VAR_3) {
  FUNC_1(&VAR_4->ib_device, "Can't query device properties");
  VAR_5 = -VAR_0;
  goto init_node_guid1;
 }

 FUNC_4(&VAR_4->ib_device.node_guid, &VAR_6->node_guid, sizeof(u64));

init_node_guid1:
 FUNC_2(VAR_6);
 return VAR_5;
}
