
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int** outFragments; } ;
struct TYPE_10__ {int** outFragments; } ;
struct TYPE_12__ {int fragmentCount; TYPE_5__ outputCbcr; TYPE_4__ outputY; } ;
struct TYPE_8__ {int** outFragments; } ;
struct TYPE_7__ {int** outFragments; } ;
struct TYPE_9__ {int fragmentCount; TYPE_2__ outputCbcr; TYPE_1__ outputY; } ;
struct vfe_cmd_axi_output_config {TYPE_6__ output2; TYPE_3__ output1; } ;
struct msm_pmem_region {int paddr; int y_off; int cbcr_off; } ;
struct axidata {int bufnum1; int bufnum2; struct msm_pmem_region* region; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(int VAR_3,
 struct axidata *VAR_4, struct vfe_cmd_axi_output_config *VAR_5)
{
 struct msm_pmem_region *VAR_6;
 int VAR_7, VAR_8;
 uint32_t *VAR_9, *VAR_10;

 if (VAR_3 == VAR_0 || VAR_3 == VAR_1) {
  VAR_6 = VAR_4->region;
  for (VAR_7 = 0;
   VAR_7 < VAR_4->bufnum1; VAR_7++) {

   VAR_9 = &(VAR_5->output1.outputY.outFragments[VAR_7][0]);
   VAR_10 = &(VAR_5->output1.outputCbcr.outFragments[VAR_7][0]);

   for (VAR_8 = 0;
    VAR_8 < VAR_5->output1.fragmentCount; VAR_8++) {

    *VAR_9 = VAR_6->paddr + VAR_6->y_off;
    VAR_9++;

    *VAR_10 = VAR_6->paddr + VAR_6->cbcr_off;
    VAR_10++;
   }
   VAR_6++;
  }
 }

 if (VAR_3 == VAR_2 || VAR_3 == VAR_1) {

  VAR_6 = &(VAR_4->region[VAR_4->bufnum1]);
  FUNC_0("bufnum2 = %d\n", VAR_4->bufnum2);

  for (VAR_7 = 0;
   VAR_7 < VAR_4->bufnum2; VAR_7++) {

   VAR_9 = &(VAR_5->output2.outputY.outFragments[VAR_7][0]);
   VAR_10 = &(VAR_5->output2.outputCbcr.outFragments[VAR_7][0]);

  FUNC_0("config_axi: O2, phy = 0x%lx, y_off = %d, cbcr_off = %d\n",
   VAR_6->paddr, VAR_6->y_off, VAR_6->cbcr_off);

   for (VAR_8 = 0;
    VAR_8 < VAR_5->output2.fragmentCount; VAR_8++) {

    *VAR_9 = VAR_6->paddr + VAR_6->y_off;
    FUNC_0("vfe_config_axi: p1 = 0x%x\n", *VAR_9);
    VAR_9++;

    *VAR_10 = VAR_6->paddr + VAR_6->cbcr_off;
    FUNC_0("vfe_config_axi: p2 = 0x%x\n", *VAR_10);
    VAR_10++;
   }
   VAR_6++;
  }
 }
}
