
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int gtt_size; } ;
struct radeon_device {scalar_t__ family; TYPE_3__ mc; TYPE_2__* asic; int flags; } ;
struct TYPE_4__ {int * set_page; int * tlb_flush; } ;
struct TYPE_5__ {TYPE_1__ gart; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_1(struct radeon_device *VAR_13)
{
 VAR_13->flags &= ~VAR_5;
 if (VAR_13->family >= VAR_1) {
  FUNC_0("Forcing AGP to PCIE mode\n");
  VAR_13->flags |= VAR_7;
 } else if (VAR_13->family >= VAR_4 ||
   VAR_13->family == VAR_2 ||
   VAR_13->family == VAR_3 ||
   VAR_13->family == VAR_0) {
  FUNC_0("Forcing AGP to PCIE mode\n");
  VAR_13->flags |= VAR_7;
  VAR_13->asic->gart.tlb_flush = &VAR_12;
  VAR_13->asic->gart.set_page = &VAR_11;
 } else {
  FUNC_0("Forcing AGP to PCI mode\n");
  VAR_13->flags |= VAR_6;
  VAR_13->asic->gart.tlb_flush = &VAR_9;
  VAR_13->asic->gart.set_page = &VAR_8;
 }
 VAR_13->mc.gtt_size = VAR_10 * 1024 * 1024;
}
