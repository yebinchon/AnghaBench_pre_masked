
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 unsigned long* FUNC_0 (struct Scsi_Host*) ;

__attribute__((used)) static inline struct ctlr_info *FUNC_1(struct Scsi_Host *VAR_0)
{
 unsigned long *VAR_1 = FUNC_0(VAR_0);
 return (struct ctlr_info *) *VAR_1;
}
