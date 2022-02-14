
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* hcam; int msg; } ;
struct pmcraid_instance {TYPE_2__ ccn; } ;
struct pmcraid_hcam_hdr {int dummy; } ;
struct TYPE_3__ {scalar_t__ data_len; } ;


 int FUNC_0 (struct pmcraid_instance*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pmcraid_instance *VAR_0)
{
 return FUNC_0(VAR_0,
    VAR_0->ccn.msg,
    VAR_0->ccn.hcam->data_len +
    sizeof(struct pmcraid_hcam_hdr));
}
