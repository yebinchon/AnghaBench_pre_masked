
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_fb_tile {scalar_t__ pitch; } ;
struct TYPE_4__ {int (* prog ) (struct nouveau_fb*,int,struct nouveau_fb_tile*) ;int (* init ) (struct nouveau_fb*,int,int ,int ,int ,int ,struct nouveau_fb_tile*) ;int (* fini ) (struct nouveau_fb*,int,struct nouveau_fb_tile*) ;struct nouveau_fb_tile* region; } ;
struct nouveau_fb {TYPE_2__ tile; } ;
struct nouveau_engine {int (* tile_prog ) (struct nouveau_engine*,int) ;} ;
struct nouveau_drm_tile {int fence; } ;
struct TYPE_3__ {struct nouveau_drm_tile* reg; } ;
struct nouveau_drm {int device; TYPE_1__ tile; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 struct nouveau_engine* FUNC_1 (struct nouveau_fb*,int ) ;
 struct nouveau_fb* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nouveau_fb*,int,struct nouveau_fb_tile*) ;
 int FUNC_5 (struct nouveau_fb*,int,int ,int ,int ,int ,struct nouveau_fb_tile*) ;
 int FUNC_6 (struct nouveau_fb*,int,struct nouveau_fb_tile*) ;
 int FUNC_7 (struct nouveau_engine*,int) ;
 int FUNC_8 (struct nouveau_engine*,int) ;

__attribute__((used)) static void
FUNC_9(struct drm_device *VAR_2, struct nouveau_drm_tile *VAR_3,
      u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct nouveau_drm *VAR_8 = FUNC_0(VAR_2);
 int VAR_9 = VAR_3 - VAR_8->tile.reg;
 struct nouveau_fb *VAR_10 = FUNC_2(VAR_8->device);
 struct nouveau_fb_tile *VAR_11 = &VAR_10->tile.region[VAR_9];
 struct nouveau_engine *VAR_12;

 FUNC_3(&VAR_3->fence);

 if (VAR_11->pitch)
  VAR_10->tile.fini(VAR_10, VAR_9, VAR_11);

 if (VAR_6)
  VAR_10->tile.init(VAR_10, VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_11);

 VAR_10->tile.prog(VAR_10, VAR_9, VAR_11);

 if ((VAR_12 = FUNC_1(VAR_10, VAR_0)))
  VAR_12->tile_prog(VAR_12, VAR_9);
 if ((VAR_12 = FUNC_1(VAR_10, VAR_1)))
  VAR_12->tile_prog(VAR_12, VAR_9);
}
