
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_target; } ;
typedef enum NCR_700_tag_neg_state { ____Placeholder_NCR_700_tag_neg_state } NCR_700_tag_neg_state ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline enum NCR_700_tag_neg_state
FUNC_1(struct scsi_device *VAR_0)
{
 return (enum NCR_700_tag_neg_state)((FUNC_0(VAR_0->sdev_target)>>20) & 0x3);
}
