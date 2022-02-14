
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nvbo; } ;
struct TYPE_3__ {int* r; int* g; int* b; scalar_t__ depth; } ;
struct nouveau_crtc {int index; TYPE_2__ cursor; int base; int last_dpms; TYPE_1__ lut; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct drm_device*,int *,int *) ;
 int FUNC_2 (int *,int) ;
 struct nouveau_crtc* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_device*,int,int,int ,int ,int,int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct nouveau_crtc*) ;

int
FUNC_10(struct drm_device *VAR_6, int VAR_7)
{
 struct nouveau_crtc *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < 256; VAR_10++) {
  VAR_8->lut.r[VAR_10] = VAR_10 << 8;
  VAR_8->lut.g[VAR_10] = VAR_10 << 8;
  VAR_8->lut.b[VAR_10] = VAR_10 << 8;
 }
 VAR_8->lut.depth = 0;

 VAR_8->index = VAR_7;
 VAR_8->last_dpms = VAR_2;

 FUNC_1(VAR_6, &VAR_8->base, &VAR_4);
 FUNC_0(&VAR_8->base, &VAR_5);
 FUNC_2(&VAR_8->base, 256);

 VAR_9 = FUNC_5(VAR_6, 64*64*4, 0x100, VAR_3,
        0, 0x0000, ((void*)0), &VAR_8->cursor.nvbo);
 if (!VAR_9) {
  VAR_9 = FUNC_6(VAR_8->cursor.nvbo, VAR_3);
  if (!VAR_9) {
   VAR_9 = FUNC_4(VAR_8->cursor.nvbo);
   if (VAR_9)
    FUNC_8(VAR_8->cursor.nvbo);
  }
  if (VAR_9)
   FUNC_7(((void*)0), &VAR_8->cursor.nvbo);
 }

 FUNC_9(VAR_8);

 return 0;
}
