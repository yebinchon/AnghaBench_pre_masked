
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ base_vfmprc; scalar_t__ vfmprc; int saved_reset_vfmprc; scalar_t__ base_vfgotc; scalar_t__ vfgotc; int saved_reset_vfgotc; scalar_t__ base_vfgorc; scalar_t__ vfgorc; int saved_reset_vfgorc; scalar_t__ base_vfgptc; scalar_t__ vfgptc; int saved_reset_vfgptc; scalar_t__ base_vfgprc; scalar_t__ vfgprc; int saved_reset_vfgprc; } ;
struct ixgbevf_adapter {TYPE_1__ stats; } ;



__attribute__((used)) static void FUNC_0(struct ixgbevf_adapter *VAR_0)
{

 if (VAR_0->stats.vfgprc || VAR_0->stats.vfgptc) {
  VAR_0->stats.saved_reset_vfgprc += VAR_0->stats.vfgprc -
   VAR_0->stats.base_vfgprc;
  VAR_0->stats.saved_reset_vfgptc += VAR_0->stats.vfgptc -
   VAR_0->stats.base_vfgptc;
  VAR_0->stats.saved_reset_vfgorc += VAR_0->stats.vfgorc -
   VAR_0->stats.base_vfgorc;
  VAR_0->stats.saved_reset_vfgotc += VAR_0->stats.vfgotc -
   VAR_0->stats.base_vfgotc;
  VAR_0->stats.saved_reset_vfmprc += VAR_0->stats.vfmprc -
   VAR_0->stats.base_vfmprc;
 }
}
