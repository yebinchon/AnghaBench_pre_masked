
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,int,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_device*) ;
 int * FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (TYPE_2__*,int,int,int,int ) ;
 int FUNC_7 (TYPE_2__*,int,int,int,int) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (TYPE_2__*,int,int,int,int,int ) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;

void
FUNC_11(struct drm_device *VAR_9,
        uint64_t VAR_10, uint64_t VAR_11,
        int VAR_12, int VAR_13, int VAR_14, int VAR_15,
        int VAR_16, int VAR_17, int VAR_18, int VAR_19, int VAR_20)
{
 drm_radeon_private_t *VAR_21 = VAR_9->dev_private;
 int VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;
 u64 VAR_28;
 u32 *VAR_29;

 if ((VAR_21->blit_vb->used + 48) > VAR_21->blit_vb->total) {

  FUNC_5(VAR_9);
  FUNC_3(VAR_9);
  if (!VAR_21->blit_vb)
   return;

  FUNC_8(VAR_9);
 }
 VAR_29 = FUNC_4(VAR_9);

 VAR_24 = VAR_12 + VAR_16;
 VAR_25 = VAR_13 + VAR_17;
 VAR_26 = VAR_14 + VAR_16;
 VAR_27 = VAR_15 + VAR_17;

 VAR_29[0] = FUNC_2(VAR_14);
 VAR_29[1] = FUNC_2(VAR_15);
 VAR_29[2] = FUNC_2(VAR_12);
 VAR_29[3] = FUNC_2(VAR_13);

 VAR_29[4] = FUNC_2(VAR_14);
 VAR_29[5] = FUNC_2(VAR_27);
 VAR_29[6] = FUNC_2(VAR_12);
 VAR_29[7] = FUNC_2(VAR_25);

 VAR_29[8] = FUNC_2(VAR_26);
 VAR_29[9] = FUNC_2(VAR_27);
 VAR_29[10] = FUNC_2(VAR_24);
 VAR_29[11] = FUNC_2(VAR_25);

 switch(VAR_20) {
 case 4:
  VAR_22 = VAR_2;
  VAR_23 = VAR_5;
  break;
 case 2:
  VAR_22 = VAR_0;
  VAR_23 = VAR_3;
  break;
 default:
  VAR_22 = VAR_1;
  VAR_23 = VAR_4;
  break;
 }


 FUNC_9(VAR_21, VAR_23,
    VAR_18 / VAR_20,
    VAR_25, VAR_18 / VAR_20,
    VAR_10);

 FUNC_0(VAR_21,
       VAR_8, VAR_18 * VAR_25, VAR_10);


 FUNC_6(VAR_21, VAR_22,
     VAR_19 / VAR_20, VAR_27,
     VAR_11);


 FUNC_7(VAR_21, VAR_14, VAR_15, VAR_26, VAR_27);


 VAR_28 = VAR_21->gart_buffers_offset +
  VAR_21->blit_vb->offset +
  VAR_21->blit_vb->used;
 FUNC_10(VAR_21, VAR_28);


 FUNC_1(VAR_21);

 FUNC_0(VAR_21,
       VAR_7 | VAR_6,
       VAR_19 * VAR_27, VAR_11);

 VAR_21->blit_vb->used += 12 * 4;
}
