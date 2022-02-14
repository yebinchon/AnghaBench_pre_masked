
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pd_uinfo {int state; } ;
struct crypto4xx_device {int pdr_head; } ;
struct TYPE_4__ {scalar_t__ w; } ;
struct TYPE_3__ {scalar_t__ w; } ;
struct ce_pd {TYPE_2__ pd_ctl_len; TYPE_1__ pd_ctl; } ;


 int VAR_0 ;

void FUNC_0(struct crypto4xx_device *VAR_1,
    u32 VAR_2, struct ce_pd *VAR_3,
    struct pd_uinfo *VAR_4)
{

 VAR_1->pdr_head = VAR_2;
 VAR_3->pd_ctl.w = 0;
 VAR_3->pd_ctl_len.w = 0;
 VAR_4->state = VAR_0;
}
