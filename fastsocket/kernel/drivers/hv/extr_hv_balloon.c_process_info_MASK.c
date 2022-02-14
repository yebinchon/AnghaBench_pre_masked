
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_dynmem_device {int dummy; } ;
struct dm_info_msg {scalar_t__ info; } ;
struct dm_info_header {int type; int data_size; } ;



 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct hv_dynmem_device *VAR_0, struct dm_info_msg *VAR_1)
{
 struct dm_info_header *VAR_2;

 VAR_2 = (struct dm_info_header *)VAR_1->info;

 switch (VAR_2->type) {
 case 128:
  FUNC_0("Received INFO_TYPE_MAX_PAGE_CNT\n");
  FUNC_0("Data Size is %d\n", VAR_2->data_size);
  break;
 default:
  FUNC_0("Received Unknown type: %d\n", VAR_2->type);
 }
}
