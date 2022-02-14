
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ mem_type; } ;
struct ttm_buffer_object {TYPE_1__ mem; } ;
struct nouveau_bo {int valid_domains; struct ttm_buffer_object bo; } ;
struct drm_gem_object {struct nouveau_bo* driver_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct nouveau_bo*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct drm_gem_object *VAR_7, uint32_t VAR_8,
         uint32_t VAR_9, uint32_t VAR_10)
{
 struct nouveau_bo *VAR_11 = VAR_7->driver_private;
 struct ttm_buffer_object *VAR_12 = &VAR_11->bo;
 uint32_t VAR_13 = VAR_10 & VAR_11->valid_domains &
  (VAR_9 ? VAR_9 : VAR_8);
 uint32_t VAR_14 = 0, VAR_15 = 0;

 if (!VAR_13)
  return -VAR_0;

 if (VAR_10 & VAR_2)
  VAR_15 |= VAR_4;

 if (VAR_10 & VAR_1)
  VAR_15 |= VAR_3;

 if ((VAR_13 & VAR_2) &&
     VAR_12->mem.mem_type == VAR_6)
  VAR_14 |= VAR_4;

 else if ((VAR_13 & VAR_1) &&
   VAR_12->mem.mem_type == VAR_5)
  VAR_14 |= VAR_3;

 else if (VAR_13 & VAR_2)
  VAR_14 |= VAR_4;

 else
  VAR_14 |= VAR_3;

 FUNC_0(VAR_11, VAR_14, VAR_15);

 return 0;
}
