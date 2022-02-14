
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_cli {int dummy; } ;
struct drm_file {struct nouveau_cli* driver_priv; } ;



__attribute__((used)) static inline struct nouveau_cli *
FUNC_0(struct drm_file *VAR_0)
{
 return VAR_0 ? VAR_0->driver_priv : ((void*)0);
}
