
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_10__ {scalar_t__ gart_buffers_offset; TYPE_1__* blit_vb; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_9__ {scalar_t__ used; scalar_t__ total; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_device*) ;
 int * FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (TYPE_2__*,int ,int,int,int) ;
 int FUNC_7 (TYPE_2__*,int,int ,int,int) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (TYPE_2__*,int ,int,int,int,int) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;

void
FUNC_11(struct drm_device *VAR_7,
        uint64_t VAR_8, uint64_t VAR_9,
        int VAR_10)
{
 drm_radeon_private_t *VAR_11 = VAR_7->dev_private;
 int VAR_12;
 u64 VAR_13;
 u32 *VAR_14;

 VAR_14 = FUNC_4(VAR_7);

 if ((VAR_10 & 3) || (VAR_8 & 3) || (VAR_9 & 3)) {
  VAR_12 = 8192;

  while (VAR_10) {
   int VAR_15 = VAR_10;
   int VAR_16 = VAR_8 & 255;
   int VAR_17 = VAR_9 & 255;
   int VAR_18 = 1;
   VAR_8 = VAR_8 & ~255;
   VAR_9 = VAR_9 & ~255;

   if (!VAR_16 && !VAR_17) {
    VAR_18 = (VAR_15 / VAR_12);
    if (VAR_18 > 8192)
     VAR_18 = 8192;
    if (VAR_18 == 0)
     VAR_18 = 1;
    else
     VAR_15 = VAR_12;
   } else {
    if (VAR_15 > VAR_12)
     VAR_15 = VAR_12;
    if (VAR_15 > (VAR_12 - VAR_17))
     VAR_15 = (VAR_12 - VAR_17);
    if (VAR_15 > (VAR_12 - VAR_16))
     VAR_15 = (VAR_12 - VAR_16);
   }

   if ((VAR_11->blit_vb->used + 48) > VAR_11->blit_vb->total) {

    FUNC_5(VAR_7);
    FUNC_3(VAR_7);
    if (!VAR_11->blit_vb)
     return;
    FUNC_8(VAR_7);
    VAR_14 = FUNC_4(VAR_7);
   }

   VAR_14[0] = FUNC_2(VAR_17);
   VAR_14[1] = 0;
   VAR_14[2] = FUNC_2(VAR_16);
   VAR_14[3] = 0;

   VAR_14[4] = FUNC_2(VAR_17);
   VAR_14[5] = FUNC_2(VAR_18);
   VAR_14[6] = FUNC_2(VAR_16);
   VAR_14[7] = FUNC_2(VAR_18);

   VAR_14[8] = FUNC_2(VAR_17 + VAR_15);
   VAR_14[9] = FUNC_2(VAR_18);
   VAR_14[10] = FUNC_2(VAR_16 + VAR_15);
   VAR_14[11] = FUNC_2(VAR_18);


   FUNC_9(VAR_11, VAR_2,
      VAR_16 + VAR_15, VAR_18, VAR_16 + VAR_15,
      VAR_8);

   FUNC_0(VAR_11,
         VAR_6, (VAR_16 + VAR_15 * VAR_18), VAR_8);


   FUNC_6(VAR_11, VAR_0,
       VAR_17 + VAR_15, VAR_18,
       VAR_9);


   FUNC_7(VAR_11, VAR_17, 0, VAR_17 + VAR_15, VAR_18);


   VAR_13 = VAR_11->gart_buffers_offset +
    VAR_11->blit_vb->offset +
    VAR_11->blit_vb->used;
   FUNC_10(VAR_11, VAR_13);


   FUNC_1(VAR_11);

   FUNC_0(VAR_11,
         VAR_5 | VAR_4,
         VAR_15 * VAR_18, VAR_9);

   VAR_14 += 12;
   VAR_11->blit_vb->used += 12 * 4;

   VAR_8 += VAR_15 * VAR_18;
   VAR_9 += VAR_15 * VAR_18;
   VAR_10 -= VAR_15 * VAR_18;
  }
 } else {
  VAR_12 = 8192 * 4;

  while (VAR_10) {
   int VAR_19 = VAR_10;
   int VAR_20 = (VAR_8 & 255);
   int VAR_21 = (VAR_9 & 255);
   int VAR_22 = 1;
   VAR_8 = VAR_8 & ~255;
   VAR_9 = VAR_9 & ~255;

   if (!VAR_20 && !VAR_21) {
    VAR_22 = (VAR_19 / VAR_12);
    if (VAR_22 > 8192)
     VAR_22 = 8192;
    if (VAR_22 == 0)
     VAR_22 = 1;
    else
     VAR_19 = VAR_12;
   } else {
    if (VAR_19 > VAR_12)
     VAR_19 = VAR_12;
    if (VAR_19 > (VAR_12 - VAR_21))
     VAR_19 = (VAR_12 - VAR_21);
    if (VAR_19 > (VAR_12 - VAR_20))
     VAR_19 = (VAR_12 - VAR_20);
   }

   if ((VAR_11->blit_vb->used + 48) > VAR_11->blit_vb->total) {
    FUNC_5(VAR_7);
    FUNC_3(VAR_7);
    if (!VAR_11->blit_vb)
     return;

    FUNC_8(VAR_7);
    VAR_14 = FUNC_4(VAR_7);
   }

   VAR_14[0] = FUNC_2(VAR_21 / 4);
   VAR_14[1] = 0;
   VAR_14[2] = FUNC_2(VAR_20 / 4);
   VAR_14[3] = 0;

   VAR_14[4] = FUNC_2(VAR_21 / 4);
   VAR_14[5] = FUNC_2(VAR_22);
   VAR_14[6] = FUNC_2(VAR_20 / 4);
   VAR_14[7] = FUNC_2(VAR_22);

   VAR_14[8] = FUNC_2((VAR_21 + VAR_19) / 4);
   VAR_14[9] = FUNC_2(VAR_22);
   VAR_14[10] = FUNC_2((VAR_20 + VAR_19) / 4);
   VAR_14[11] = FUNC_2(VAR_22);


   FUNC_9(VAR_11, VAR_3,
      (VAR_20 + VAR_19) / 4,
      VAR_22, (VAR_20 + VAR_19) / 4,
      VAR_8);

   FUNC_0(VAR_11,
         VAR_6, (VAR_20 + VAR_19 * VAR_22), VAR_8);


   FUNC_6(VAR_11, VAR_1,
       (VAR_21 + VAR_19) / 4, VAR_22,
       VAR_9);


   FUNC_7(VAR_11, (VAR_21 / 4), 0, (VAR_21 + VAR_19 / 4), VAR_22);


   VAR_13 = VAR_11->gart_buffers_offset +
    VAR_11->blit_vb->offset +
    VAR_11->blit_vb->used;
   FUNC_10(VAR_11, VAR_13);


   FUNC_1(VAR_11);

   FUNC_0(VAR_11,
         VAR_5 | VAR_4,
         VAR_19 * VAR_22, VAR_9);

   VAR_14 += 12;
   VAR_11->blit_vb->used += 12 * 4;

   VAR_8 += VAR_19 * VAR_22;
   VAR_9 += VAR_19 * VAR_22;
   VAR_10 -= VAR_19 * VAR_22;
  }
 }
}
