
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_3__* sg; TYPE_1__* agp; } ;
struct TYPE_9__ {TYPE_2__* cce_ring; int is_pci; } ;
typedef TYPE_4__ drm_r128_private_t ;
struct TYPE_8__ {scalar_t__ virtual; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_6__ {int base; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_16,
          drm_r128_private_t *VAR_17)
{
 u32 VAR_18;
 u32 VAR_19;

 FUNC_0("\n");
  VAR_18 = VAR_17->cce_ring->offset -
      (unsigned long)VAR_16->sg->virtual;

 FUNC_2(VAR_6, VAR_18 | VAR_0);

 FUNC_2(VAR_5, 0);
 FUNC_2(VAR_4, 0);


 FUNC_2(VAR_7,
     ((VAR_9 / 4) << VAR_13)
     | ((VAR_10 / 4) << VAR_14)
     | ((VAR_11 / 4) << VAR_15)
     | ((VAR_8 / 64) << VAR_12));


 FUNC_1(VAR_3);


 VAR_19 = FUNC_1(VAR_1) & ~VAR_2;
 FUNC_2(VAR_1, VAR_19);
}
