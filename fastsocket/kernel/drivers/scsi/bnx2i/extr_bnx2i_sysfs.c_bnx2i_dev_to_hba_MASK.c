
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bnx2i_hba {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct bnx2i_hba* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static inline struct bnx2i_hba *FUNC_2(struct device *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1);
}
