
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_cmnd {int job_step; TYPE_1__* ioa_cfg; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipr_cmnd*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct ipr_cmnd *VAR_6)
{
 VAR_0;
 FUNC_1(VAR_6->ioa_cfg->pdev, VAR_5);
 VAR_6->job_step = VAR_4;
 FUNC_0(VAR_6, VAR_2);
 VAR_3;
 return VAR_1;
}
