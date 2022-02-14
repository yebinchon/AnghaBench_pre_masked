
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int depth_fmt; int depth_pitch_offset_c; } ;
typedef TYPE_1__ drm_r128_private_t ;
struct TYPE_5__ {int n; scalar_t__ mask; scalar_t__ buffer; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ drm_r128_depth_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int*,scalar_t__,int) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_12,
       drm_r128_depth_t *VAR_13)
{
 drm_r128_private_t *VAR_14 = VAR_12->dev_private;
 int VAR_15, *VAR_16, *VAR_17;
 u32 *VAR_18;
 u8 *VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 VAR_11;
 FUNC_4("\n");

 VAR_15 = VAR_13->n;
 if (VAR_15 > 4096 || VAR_15 <= 0)
  return -VAR_1;

 VAR_21 = VAR_15 * sizeof(*VAR_16);
 VAR_22 = VAR_15 * sizeof(*VAR_17);
 VAR_16 = FUNC_7(VAR_21, VAR_3);
 if (VAR_16 == ((void*)0))
  return -VAR_2;
 VAR_17 = FUNC_7(VAR_22, VAR_3);
 if (VAR_17 == ((void*)0)) {
  FUNC_6(VAR_16);
  return -VAR_2;
 }
 if (FUNC_3(VAR_16, VAR_13->x, VAR_21)) {
  FUNC_6(VAR_16);
  FUNC_6(VAR_17);
  return -VAR_0;
 }
 if (FUNC_3(VAR_17, VAR_13->y, VAR_21)) {
  FUNC_6(VAR_16);
  FUNC_6(VAR_17);
  return -VAR_0;
 }

 VAR_23 = VAR_13->n * sizeof(u32);
 VAR_18 = FUNC_7(VAR_23, VAR_3);
 if (VAR_18 == ((void*)0)) {
  FUNC_6(VAR_16);
  FUNC_6(VAR_17);
  return -VAR_2;
 }
 if (FUNC_3(VAR_18, VAR_13->buffer, VAR_23)) {
  FUNC_6(VAR_16);
  FUNC_6(VAR_17);
  FUNC_6(VAR_18);
  return -VAR_0;
 }

 if (VAR_13->mask) {
  VAR_24 = VAR_13->n * sizeof(u8);
  VAR_19 = FUNC_7(VAR_24, VAR_3);
  if (VAR_19 == ((void*)0)) {
   FUNC_6(VAR_16);
   FUNC_6(VAR_17);
   FUNC_6(VAR_18);
   return -VAR_2;
  }
  if (FUNC_3(VAR_19, VAR_13->mask, VAR_24)) {
   FUNC_6(VAR_16);
   FUNC_6(VAR_17);
   FUNC_6(VAR_18);
   FUNC_6(VAR_19);
   return -VAR_0;
  }

  for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
   if (VAR_19[VAR_20]) {
    FUNC_1(6);

    FUNC_5(FUNC_2(VAR_4, 4));
    FUNC_5(VAR_7 |
      VAR_5 |
      (VAR_14->depth_fmt << 8) |
      VAR_8 |
      VAR_10 |
      VAR_6 |
      VAR_9);

    FUNC_5(VAR_14->depth_pitch_offset_c);
    FUNC_5(VAR_18[VAR_20]);

    FUNC_5((VAR_16[VAR_20] << 16) | VAR_17[VAR_20]);
    FUNC_5((1 << 16) | 1);

    FUNC_0();
   }
  }

  FUNC_6(VAR_19);
 } else {
  for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
   FUNC_1(6);

   FUNC_5(FUNC_2(VAR_4, 4));
   FUNC_5(VAR_7 |
     VAR_5 |
     (VAR_14->depth_fmt << 8) |
     VAR_8 |
     VAR_10 |
     VAR_6 |
     VAR_9);

   FUNC_5(VAR_14->depth_pitch_offset_c);
   FUNC_5(VAR_18[VAR_20]);

   FUNC_5((VAR_16[VAR_20] << 16) | VAR_17[VAR_20]);
   FUNC_5((1 << 16) | 1);

   FUNC_0();
  }
 }

 FUNC_6(VAR_16);
 FUNC_6(VAR_17);
 FUNC_6(VAR_18);

 return 0;
}
