
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qla_hw_data {TYPE_1__* pdev; int fw_attributes; int fw_subminor_version; int fw_minor_version; int fw_major_version; } ;
struct qla2xxx_fw_dump {void* subsystem_device; void* subsystem_vendor; void* device; void* vendor; void* fw_attributes; void* fw_subminor_version; void* fw_minor_version; void* fw_major_version; } ;
struct TYPE_2__ {int subsystem_device; int subsystem_vendor; int device; int vendor; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(struct qla_hw_data *VAR_0, struct qla2xxx_fw_dump *VAR_1)
{
 VAR_1->fw_major_version = FUNC_0(VAR_0->fw_major_version);
 VAR_1->fw_minor_version = FUNC_0(VAR_0->fw_minor_version);
 VAR_1->fw_subminor_version = FUNC_0(VAR_0->fw_subminor_version);
 VAR_1->fw_attributes = FUNC_0(VAR_0->fw_attributes);

 VAR_1->vendor = FUNC_0(VAR_0->pdev->vendor);
 VAR_1->device = FUNC_0(VAR_0->pdev->device);
 VAR_1->subsystem_vendor = FUNC_0(VAR_0->pdev->subsystem_vendor);
 VAR_1->subsystem_device = FUNC_0(VAR_0->pdev->subsystem_device);
}
