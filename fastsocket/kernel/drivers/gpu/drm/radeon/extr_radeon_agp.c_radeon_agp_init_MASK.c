
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int gtt_size; scalar_t__ gtt_end; scalar_t__ gtt_start; scalar_t__ agp_base; } ;
struct radeon_device {scalar_t__ family; TYPE_4__ mc; int dev; TYPE_5__* ddev; TYPE_1__* pdev; } ;
struct radeon_agpmode_quirk {scalar_t__ chip_device; scalar_t__ hostbridge_vendor; scalar_t__ hostbridge_device; scalar_t__ chip_vendor; scalar_t__ subsys_vendor; scalar_t__ subsys_device; int default_mode; } ;
struct drm_agp_mode {int mode; } ;
struct drm_agp_info {int mode; scalar_t__ id_vendor; scalar_t__ id_device; } ;
struct TYPE_13__ {TYPE_3__* agp; } ;
struct TYPE_10__ {int aper_size; scalar_t__ aper_base; } ;
struct TYPE_11__ {TYPE_2__ agp_info; } ;
struct TYPE_9__ {scalar_t__ vendor; scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,struct drm_agp_mode) ;
 int FUNC_8 (TYPE_5__*,struct drm_agp_info*) ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_13 ;
 struct radeon_agpmode_quirk* VAR_14 ;

int FUNC_10(struct radeon_device *VAR_15)
{
 return 0;

}
