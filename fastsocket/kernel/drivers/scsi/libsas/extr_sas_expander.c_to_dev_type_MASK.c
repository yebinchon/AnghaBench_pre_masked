
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct discover_resp {scalar_t__ attached_dev_type; scalar_t__ linkrate; scalar_t__ attached_sata_dev; } ;
typedef enum sas_dev_type { ____Placeholder_sas_dev_type } sas_dev_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum sas_dev_type FUNC_0(struct discover_resp *VAR_3)
{



 if (VAR_3->attached_dev_type == VAR_0 && VAR_3->attached_sata_dev &&
     VAR_3->linkrate >= VAR_1)
  return VAR_2;
 else
  return VAR_3->attached_dev_type;
}
