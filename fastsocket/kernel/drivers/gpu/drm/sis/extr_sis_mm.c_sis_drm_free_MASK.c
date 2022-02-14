
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; } ;
struct sis_memblock {TYPE_1__ req; int mm_node; int owner_list; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; TYPE_2__* dev_private; } ;
struct TYPE_5__ {int object_idr; } ;
typedef TYPE_2__ drm_sis_private_t ;
struct TYPE_6__ {int free; } ;
typedef TYPE_3__ drm_sis_mem_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sis_memblock* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct sis_memblock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 drm_sis_private_t *VAR_4 = VAR_1->dev_private;
 drm_sis_mem_t *VAR_5 = VAR_2;
 struct sis_memblock *VAR_6;

 FUNC_7(&VAR_1->struct_mutex);
 VAR_6 = FUNC_3(&VAR_4->object_idr, VAR_5->free);
 if (VAR_6 == ((void*)0)) {
  FUNC_8(&VAR_1->struct_mutex);
  return -VAR_0;
 }

 FUNC_4(&VAR_4->object_idr, VAR_5->free);
 FUNC_6(&VAR_6->owner_list);
 if (FUNC_1(&VAR_6->mm_node))
  FUNC_2(&VAR_6->mm_node);




 FUNC_5(VAR_6);
 FUNC_8(&VAR_1->struct_mutex);
 FUNC_0("free = 0x%lx\n", VAR_5->free);

 return 0;
}
