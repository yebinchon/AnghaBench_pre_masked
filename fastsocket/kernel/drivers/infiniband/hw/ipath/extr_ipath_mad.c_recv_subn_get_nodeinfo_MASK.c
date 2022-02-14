
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nodeinfo {int base_version; int class_version; int node_type; scalar_t__ node_guid; scalar_t__ port_guid; int * vendor_id; int local_port_num; int revision; void* device_id; void* partition_cap; int sys_guid; int num_ports; } ;
struct ipath_devdata {scalar_t__ ipath_guid; int ipath_majrev; int ipath_minrev; int ipath_vendorid; int ipath_deviceid; } ;
struct ib_smp {int status; scalar_t__ attr_mod; int data; } ;
struct ib_device {int phys_port_cnt; } ;
struct TYPE_2__ {int sys_image_guid; struct ipath_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ipath_devdata*) ;
 int FUNC_3 (struct ib_smp*) ;
 TYPE_1__* FUNC_4 (struct ib_device*) ;

__attribute__((used)) static int FUNC_5(struct ib_smp *VAR_4,
      struct ib_device *VAR_5, u8 VAR_6)
{
 struct nodeinfo *VAR_7 = (struct nodeinfo *)&VAR_4->data;
 struct ipath_devdata *VAR_8 = FUNC_4(VAR_5)->dd;
 u32 VAR_9, VAR_10, VAR_11;


 if (VAR_4->attr_mod || (VAR_8->ipath_guid == 0))
  VAR_4->status |= VAR_0;

 VAR_7->base_version = 1;
 VAR_7->class_version = 1;
 VAR_7->node_type = 1;





 VAR_7->num_ports = VAR_5->phys_port_cnt;

 VAR_7->sys_guid = FUNC_4(VAR_5)->sys_image_guid;
 VAR_7->node_guid = VAR_8->ipath_guid;
 VAR_7->port_guid = VAR_8->ipath_guid;
 VAR_7->partition_cap = FUNC_0(FUNC_2(VAR_8));
 VAR_7->device_id = FUNC_0(VAR_8->ipath_deviceid);
 VAR_10 = VAR_8->ipath_majrev;
 VAR_11 = VAR_8->ipath_minrev;
 VAR_7->revision = FUNC_1((VAR_10 << 16) | VAR_11);
 VAR_7->local_port_num = VAR_6;
 VAR_9 = VAR_8->ipath_vendorid;
 VAR_7->vendor_id[0] = VAR_1;
 VAR_7->vendor_id[1] = VAR_2;
 VAR_7->vendor_id[2] = VAR_3;

 return FUNC_3(VAR_4);
}
