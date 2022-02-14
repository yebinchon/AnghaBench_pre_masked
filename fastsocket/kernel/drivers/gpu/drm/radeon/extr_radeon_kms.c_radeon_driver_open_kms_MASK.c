
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_fpriv {int vm; } ;
struct TYPE_2__ {int bo; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ ring_tmp_bo; } ;
struct radeon_bo_va {int dummy; } ;
struct drm_file {struct radeon_fpriv* driver_priv; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct radeon_fpriv*) ;
 struct radeon_fpriv* FUNC_1 (int,int ) ;
 struct radeon_bo_va* FUNC_2 (struct radeon_device*,int *,int ) ;
 int FUNC_3 (struct radeon_device*,struct radeon_bo_va*,int ,int) ;
 int FUNC_4 (struct radeon_device*,int *) ;
 int FUNC_5 (struct radeon_device*,int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct drm_device *VAR_6, struct drm_file *VAR_7)
{
 struct radeon_device *VAR_8 = VAR_6->dev_private;

 VAR_7->driver_priv = ((void*)0);


 if (VAR_8->family >= VAR_0) {
  struct radeon_fpriv *VAR_9;
  struct radeon_bo_va *VAR_10;
  int VAR_11;

  VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2);
  if (FUNC_6(!VAR_9)) {
   return -VAR_1;
  }

  FUNC_5(VAR_8, &VAR_9->vm);



  VAR_10 = FUNC_2(VAR_8, &VAR_9->vm,
      VAR_8->ring_tmp_bo.bo);
  VAR_11 = FUNC_3(VAR_8, VAR_10, VAR_3,
       VAR_4 |
       VAR_5);
  if (VAR_11) {
   FUNC_4(VAR_8, &VAR_9->vm);
   FUNC_0(VAR_9);
   return VAR_11;
  }

  VAR_7->driver_priv = VAR_9;
 }
 return 0;
}
