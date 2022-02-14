
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_2__ {char const* nspinfo; } ;
typedef TYPE_1__ nsp_hw_data ;



__attribute__((used)) static const char *FUNC_0(struct Scsi_Host *VAR_0)
{
 nsp_hw_data *VAR_1 = (nsp_hw_data *)VAR_0->hostdata;

 return VAR_1->nspinfo;
}
