
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int verifier_state_t ;
typedef int uint32_t ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_4__ {int agp; int const* buf_start; int * map_cache; int unfinished; struct drm_device* dev; } ;
typedef TYPE_1__ drm_via_state_t ;
struct TYPE_5__ {scalar_t__ chipset; scalar_t__ num_fire_offsets; TYPE_1__ hc_state; } ;
typedef TYPE_2__ drm_via_private_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;






 int FUNC_1 (int const**,int const*) ;
 int FUNC_2 (int const**,int const*,TYPE_1__*) ;
 int FUNC_3 (int const**,int const*) ;
 int FUNC_4 (int const**,int const*) ;

int
FUNC_5(const uint32_t * VAR_10, unsigned int VAR_11,
     struct drm_device * VAR_12, int VAR_13)
{

 drm_via_private_t *VAR_14 = (drm_via_private_t *) VAR_12->dev_private;
 drm_via_state_t *VAR_15 = &VAR_14->hc_state;
 drm_via_state_t VAR_16 = *VAR_15;
 uint32_t VAR_17;
 const uint32_t *VAR_18 = VAR_10 + (VAR_11 >> 2);
 verifier_state_t VAR_19 = 133;
 int VAR_20;
 int VAR_21;

 VAR_20 = (VAR_14->chipset == VAR_5 ||
       VAR_14->chipset == VAR_4);

 VAR_21 = VAR_14->chipset != VAR_4;

 VAR_15->dev = VAR_12;
 VAR_15->unfinished = VAR_9;
 VAR_15->map_cache = ((void*)0);
 VAR_15->agp = VAR_13;
 VAR_15->buf_start = VAR_10;
 VAR_14->num_fire_offsets = 0;

 while (VAR_10 < VAR_18) {

  switch (VAR_19) {
  case 130:
   VAR_19 = FUNC_2(&VAR_10, VAR_18, VAR_15);
   break;
  case 131:
   VAR_19 = FUNC_1(&VAR_10, VAR_18);
   break;
  case 129:
   VAR_19 = FUNC_3(&VAR_10, VAR_18);
   break;
  case 128:
   VAR_19 = FUNC_4(&VAR_10, VAR_18);
   break;
  case 133:
   if ((VAR_3 == (VAR_17 = *VAR_10)) &&
       VAR_21)
    VAR_19 = 130;
   else if ((VAR_17 & VAR_2) == VAR_1)
    VAR_19 = 131;
   else if (VAR_20
     && (VAR_17 & VAR_6) == VAR_7)
    VAR_19 = 129;
   else if (VAR_20
     && (VAR_17 & VAR_6) == VAR_8)
    VAR_19 = 128;
   else if ((VAR_17 == VAR_3) && !VAR_21) {
    FUNC_0("Accelerated 3D is not supported on this chipset yet.\n");
    VAR_19 = 132;
   } else {
    FUNC_0
        ("Invalid / Unimplemented DMA HEADER command. 0x%x\n",
         VAR_17);
    VAR_19 = 132;
   }
   break;
  case 132:
  default:
   *VAR_15 = VAR_16;
   return -VAR_0;
  }
 }
 if (VAR_19 == 132) {
  *VAR_15 = VAR_16;
  return -VAR_0;
 }
 return 0;
}
