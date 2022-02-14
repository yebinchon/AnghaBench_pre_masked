
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {TYPE_1__* pdev; TYPE_2__* dev_private; } ;
struct TYPE_5__ {int flags; int num_z_pipes; int num_gb_pipes; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_21 ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_22)
{
 drm_radeon_private_t *VAR_23 = VAR_22->dev_private;
 uint32_t VAR_24, VAR_25 = 0;

 if ((VAR_23->flags & VAR_20) == VAR_4) {
  uint32_t VAR_26 = FUNC_1(VAR_21);
  if ((VAR_26 & 3) == 3)
   VAR_23->num_z_pipes = 2;
  else
   VAR_23->num_z_pipes = 1;
 } else
  VAR_23->num_z_pipes = 1;


 if ((VAR_23->flags & VAR_20) >= VAR_2) {
  VAR_25 = FUNC_1(VAR_18);
  VAR_23->num_gb_pipes = ((VAR_25 >> 12) & 0x3) + 1;

  if ((VAR_22->pdev->device == 0x5e4c) ||
      (VAR_22->pdev->device == 0x5e4f))
   VAR_23->num_gb_pipes = 1;
 } else {

  if (((VAR_23->flags & VAR_20) == VAR_0 &&
       VAR_22->pdev->device != 0x4144) ||
      ((VAR_23->flags & VAR_20) == VAR_1 &&
       VAR_22->pdev->device != 0x4148)) {
   VAR_23->num_gb_pipes = 2;
  } else {

   VAR_23->num_gb_pipes = 1;
  }
 }
 FUNC_0("Num pipes: %d\n", VAR_23->num_gb_pipes);

 VAR_24 = (VAR_8 | VAR_17 );

 switch (VAR_23->num_gb_pipes) {
 case 2: VAR_24 |= VAR_11; break;
 case 3: VAR_24 |= VAR_13; break;
 case 4: VAR_24 |= VAR_12; break;
 default:
 case 1: VAR_24 |= VAR_14; break;
 }

 if ((VAR_23->flags & VAR_20) >= VAR_3) {
  FUNC_3(VAR_19, (1 | ((VAR_25 >> 8) & 0xf) << 4));
  FUNC_2(VAR_16, ((1 << VAR_23->num_gb_pipes) - 1));
 }
 FUNC_2(VAR_9, VAR_24);
 FUNC_4(VAR_23);
 FUNC_2(VAR_7, FUNC_1(VAR_7) | VAR_10);
 FUNC_2(VAR_15, (FUNC_1(VAR_15) |
            VAR_5 |
            VAR_6));


}
