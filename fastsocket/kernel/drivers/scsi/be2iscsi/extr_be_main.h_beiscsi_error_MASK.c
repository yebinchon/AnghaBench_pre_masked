
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {scalar_t__ fw_timeout; scalar_t__ ue_detected; } ;



__attribute__((used)) static inline bool FUNC_0(struct beiscsi_hba *VAR_0)
{
 return VAR_0->ue_detected || VAR_0->fw_timeout;
}
