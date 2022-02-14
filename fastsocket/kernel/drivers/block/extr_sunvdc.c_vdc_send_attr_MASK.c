
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_driver_state {int dummy; } ;
struct TYPE_2__ {int sid; int stype_env; int stype; int type; } ;
struct vio_disk_attr_info {int max_xfer_size; int vdisk_block_size; int xfer_mode; TYPE_1__ tag; } ;
struct vdc_port {int vio; int max_xfer_size; int vdisk_block_size; } ;
typedef int pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vio_disk_attr_info*,int ,int) ;
 struct vdc_port* FUNC_1 (struct vio_driver_state*) ;
 int FUNC_2 (int *,struct vio_disk_attr_info*,int) ;
 int FUNC_3 (struct vio_driver_state*) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct vio_driver_state *VAR_5)
{
 struct vdc_port *VAR_6 = FUNC_1(VAR_5);
 struct vio_disk_attr_info VAR_7;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.tag.type = VAR_4;
 VAR_7.tag.stype = VAR_3;
 VAR_7.tag.stype_env = VAR_1;
 VAR_7.tag.sid = FUNC_3(VAR_5);

 VAR_7.xfer_mode = VAR_2;
 VAR_7.vdisk_block_size = VAR_6->vdisk_block_size;
 VAR_7.max_xfer_size = VAR_6->max_xfer_size;

 FUNC_4(VAR_0, "SEND ATTR xfer_mode[0x%x] blksz[%u] max_xfer[%llu]\n",
        VAR_7.xfer_mode, VAR_7.vdisk_block_size, VAR_7.max_xfer_size);

 return FUNC_2(&VAR_6->vio, &VAR_7, sizeof(VAR_7));
}
