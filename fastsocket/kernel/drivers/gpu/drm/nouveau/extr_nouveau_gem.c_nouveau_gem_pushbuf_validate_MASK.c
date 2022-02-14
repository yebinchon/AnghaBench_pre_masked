
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct validate_op {int both_list; int gart_list; int vram_list; } ;
struct nouveau_cli {int dummy; } ;
struct nouveau_channel {int dummy; } ;
struct drm_nouveau_gem_pushbuf_bo {int dummy; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_cli*,char*) ;
 struct nouveau_cli* FUNC_2 (struct drm_file*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct validate_op*,int *) ;
 int FUNC_5 (struct nouveau_channel*,struct drm_file*,struct drm_nouveau_gem_pushbuf_bo*,int,struct validate_op*) ;
 int FUNC_6 (struct nouveau_channel*,struct nouveau_cli*,int *,struct drm_nouveau_gem_pushbuf_bo*,int ) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_channel *VAR_1,
        struct drm_file *VAR_2,
        struct drm_nouveau_gem_pushbuf_bo *VAR_3,
        uint64_t VAR_4, int VAR_5,
        struct validate_op *VAR_6, int *VAR_7)
{
 struct nouveau_cli *VAR_8 = FUNC_2(VAR_2);
 int VAR_9, VAR_10 = 0;

 FUNC_0(&VAR_6->vram_list);
 FUNC_0(&VAR_6->gart_list);
 FUNC_0(&VAR_6->both_list);

 if (VAR_5 == 0)
  return 0;

 VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
 if (FUNC_3(VAR_9)) {
  if (VAR_9 != -VAR_0)
   FUNC_1(VAR_8, "validate_init\n");
  return VAR_9;
 }

 VAR_9 = FUNC_6(VAR_1, VAR_8, &VAR_6->vram_list, VAR_3, VAR_4);
 if (FUNC_3(VAR_9 < 0)) {
  if (VAR_9 != -VAR_0)
   FUNC_1(VAR_8, "validate vram_list\n");
  FUNC_4(VAR_6, ((void*)0));
  return VAR_9;
 }
 VAR_10 += VAR_9;

 VAR_9 = FUNC_6(VAR_1, VAR_8, &VAR_6->gart_list, VAR_3, VAR_4);
 if (FUNC_3(VAR_9 < 0)) {
  if (VAR_9 != -VAR_0)
   FUNC_1(VAR_8, "validate gart_list\n");
  FUNC_4(VAR_6, ((void*)0));
  return VAR_9;
 }
 VAR_10 += VAR_9;

 VAR_9 = FUNC_6(VAR_1, VAR_8, &VAR_6->both_list, VAR_3, VAR_4);
 if (FUNC_3(VAR_9 < 0)) {
  if (VAR_9 != -VAR_0)
   FUNC_1(VAR_8, "validate both_list\n");
  FUNC_4(VAR_6, ((void*)0));
  return VAR_9;
 }
 VAR_10 += VAR_9;

 *VAR_7 = VAR_10;
 return 0;
}
