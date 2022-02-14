
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
typedef int u32 ;
struct drm_device {TYPE_1__* agp_buffer_map; TYPE_3__* dev_private; } ;
struct TYPE_7__ {int gart_buffers_offset; TYPE_2__* blit_vb; } ;
typedef TYPE_3__ drm_radeon_private_t ;
struct TYPE_6__ {int offset; int used; } ;
struct TYPE_5__ {scalar_t__ handle; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_3__*,int ,int,int) ;
 int FUNC_6 (int ) ;
 int * VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_7(struct drm_device *VAR_15)
{
 drm_radeon_private_t *VAR_16 = VAR_15->dev_private;
 u64 VAR_17;
 int VAR_18;
 u32 *VAR_19, *VAR_20;
 uint32_t VAR_21;
 VAR_10;
 FUNC_3("\n");


 VAR_19 = (u32 *) ((char *)VAR_15->agp_buffer_map->handle + VAR_16->blit_vb->offset);
 VAR_20 = (u32 *) ((char *)VAR_15->agp_buffer_map->handle + VAR_16->blit_vb->offset + 256);

 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++)
  VAR_19[VAR_18] = FUNC_6(VAR_13[VAR_18]);
 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++)
  VAR_20[VAR_18] = FUNC_6(VAR_11[VAR_18]);

 VAR_16->blit_vb->used = 512;

 VAR_17 = VAR_16->gart_buffers_offset + VAR_16->blit_vb->offset;


 VAR_21 = (1 << 0);

 FUNC_1(9 + 12);

 FUNC_4(FUNC_2(VAR_0, 1));
 FUNC_4((VAR_9 - VAR_1) >> 2);
 FUNC_4(VAR_17 >> 8);

 FUNC_4(FUNC_2(VAR_0, 1));
 FUNC_4((VAR_7 - VAR_1) >> 2);
 FUNC_4(VAR_21);

 FUNC_4(FUNC_2(VAR_0, 1));
 FUNC_4((VAR_4 - VAR_1) >> 2);
 FUNC_4(0);


 FUNC_4(FUNC_2(VAR_0, 1));
 FUNC_4((VAR_8 - VAR_1) >> 2);
 FUNC_4((VAR_17 + 256) >> 8);

 FUNC_4(FUNC_2(VAR_0, 1));
 FUNC_4((VAR_6 - VAR_1) >> 2);
 FUNC_4(VAR_21 | (1 << 28));

 FUNC_4(FUNC_2(VAR_0, 1));
 FUNC_4((VAR_5 - VAR_1) >> 2);
 FUNC_4(2);

 FUNC_4(FUNC_2(VAR_0, 1));
 FUNC_4((VAR_3 - VAR_1) >> 2);
 FUNC_4(0);
 FUNC_0();

 FUNC_5(VAR_16,
       VAR_2, 512, VAR_17);
}
