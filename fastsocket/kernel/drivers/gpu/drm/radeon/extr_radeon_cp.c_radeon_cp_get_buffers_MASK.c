
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_dma {int granted_count; int request_count; int * request_sizes; int * request_indices; } ;
struct drm_device {int dummy; } ;
struct drm_buf {int total; int idx; struct drm_file* file_priv; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_buf* FUNC_1 (struct drm_device*) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_2,
     struct drm_file *VAR_3,
     struct drm_dma * VAR_4)
{
 int VAR_5;
 struct drm_buf *VAR_6;

 for (VAR_5 = VAR_4->granted_count; VAR_5 < VAR_4->request_count; VAR_5++) {
  VAR_6 = FUNC_1(VAR_2);
  if (!VAR_6)
   return -VAR_0;

  VAR_6->file_priv = VAR_3;

  if (FUNC_0(&VAR_4->request_indices[VAR_5], &VAR_6->idx,
         sizeof(VAR_6->idx)))
   return -VAR_1;
  if (FUNC_0(&VAR_4->request_sizes[VAR_5], &VAR_6->total,
         sizeof(VAR_6->total)))
   return -VAR_1;

  VAR_4->granted_count++;
 }
 return 0;
}
