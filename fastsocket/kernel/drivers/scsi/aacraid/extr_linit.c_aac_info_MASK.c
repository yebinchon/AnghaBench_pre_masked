
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_dev {size_t cardtype; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_2__ {char const* name; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_0(struct Scsi_Host *VAR_1)
{
 struct aac_dev *VAR_2 = (struct aac_dev *)VAR_1->hostdata;
 return VAR_0[VAR_2->cardtype].name;
}
