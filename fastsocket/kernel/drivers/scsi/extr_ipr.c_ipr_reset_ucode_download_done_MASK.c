
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_sglist {int num_sg; int scatterlist; } ;
struct ipr_ioa_cfg {int pdev; struct ipr_sglist* ucode_sglist; } ;
struct ipr_cmnd {int job_step; struct ipr_ioa_cfg* ioa_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ipr_cmnd *VAR_3)
{
 struct ipr_ioa_cfg *VAR_4 = VAR_3->ioa_cfg;
 struct ipr_sglist *VAR_5 = VAR_4->ucode_sglist;

 FUNC_0(VAR_4->pdev, VAR_5->scatterlist,
       VAR_5->num_sg, VAR_0);

 VAR_3->job_step = VAR_2;
 return VAR_1;
}
