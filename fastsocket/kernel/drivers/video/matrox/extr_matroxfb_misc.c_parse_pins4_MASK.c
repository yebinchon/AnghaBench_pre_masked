
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int ref_freq; } ;
struct TYPE_16__ {TYPE_7__ pll; } ;
struct TYPE_13__ {int system; } ;
struct TYPE_12__ {int memrdbk; int opt; void* opt3; void* mctlwtst; } ;
struct TYPE_14__ {TYPE_5__ pll; TYPE_4__ reg; } ;
struct TYPE_10__ {int vcomax; } ;
struct TYPE_9__ {int vcomax; } ;
struct TYPE_11__ {TYPE_2__ pixel; TYPE_1__ system; } ;
struct matrox_fb_info {TYPE_8__ features; TYPE_6__ values; TYPE_3__ limits; } ;
struct matrox_bios {int* pins; } ;


 void* FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(struct matrox_fb_info *VAR_0,
         const struct matrox_bios *VAR_1)
{
 VAR_0->limits.pixel.vcomax = (VAR_1->pins[ 39] == 0xFF) ? 230000 : VAR_1->pins[ 39] * 4000;
 VAR_0->limits.system.vcomax = (VAR_1->pins[ 38] == 0xFF) ? VAR_0->limits.pixel.vcomax : VAR_1->pins[ 38] * 4000;
 VAR_0->values.reg.mctlwtst = FUNC_0(VAR_1->pins + 71);
 VAR_0->values.reg.memrdbk = ((VAR_1->pins[87] << 21) & 0x1E000000) |
       ((VAR_1->pins[87] << 22) & 0x00C00000) |
       ((VAR_1->pins[86] << 1) & 0x000001E0) |
       ( VAR_1->pins[86] & 0x0000000F);
 VAR_0->values.reg.opt = ((VAR_1->pins[53] << 15) & 0x00400000) |
       ((VAR_1->pins[53] << 22) & 0x10000000) |
       ((VAR_1->pins[53] << 7) & 0x00001C00);
 VAR_0->values.reg.opt3 = FUNC_0(VAR_1->pins + 67);
 VAR_0->values.pll.system = (VAR_1->pins[ 65] == 0xFF) ? 200000 : VAR_1->pins[ 65] * 4000;
 VAR_0->features.pll.ref_freq = (VAR_1->pins[ 92] & 0x01) ? 14318 : 27000;
 return 0;
}
