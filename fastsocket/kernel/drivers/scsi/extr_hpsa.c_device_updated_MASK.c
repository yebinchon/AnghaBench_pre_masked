
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {scalar_t__ raid_level; } ;



__attribute__((used)) static inline int FUNC_0(struct hpsa_scsi_dev_t *VAR_0,
 struct hpsa_scsi_dev_t *VAR_1)
{




 if (VAR_0->raid_level != VAR_1->raid_level)
  return 1;
 return 0;
}
