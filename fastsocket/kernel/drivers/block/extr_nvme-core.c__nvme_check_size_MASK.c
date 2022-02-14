
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_smart_log {int dummy; } ;
struct nvme_rw_command {int dummy; } ;
struct nvme_lba_range_type {int dummy; } ;
struct nvme_id_ns {int dummy; } ;
struct nvme_id_ctrl {int dummy; } ;
struct nvme_format_cmd {int dummy; } ;
struct nvme_features {int dummy; } ;
struct nvme_delete_queue {int dummy; } ;
struct nvme_create_sq {int dummy; } ;
struct nvme_create_cq {int dummy; } ;
struct nvme_command {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(void)
{
 FUNC_0(sizeof(struct nvme_rw_command) != 64);
 FUNC_0(sizeof(struct nvme_create_cq) != 64);
 FUNC_0(sizeof(struct nvme_create_sq) != 64);
 FUNC_0(sizeof(struct nvme_delete_queue) != 64);
 FUNC_0(sizeof(struct nvme_features) != 64);
 FUNC_0(sizeof(struct nvme_format_cmd) != 64);
 FUNC_0(sizeof(struct nvme_command) != 64);
 FUNC_0(sizeof(struct nvme_id_ctrl) != 4096);
 FUNC_0(sizeof(struct nvme_id_ns) != 4096);
 FUNC_0(sizeof(struct nvme_lba_range_type) != 64);
 FUNC_0(sizeof(struct nvme_smart_log) != 512);
}
