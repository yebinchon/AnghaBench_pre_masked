
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_master {int magicfree; int magiclist; TYPE_1__* minor; } ;
struct TYPE_4__ {unsigned long key; } ;
struct drm_magic_entry {int head; TYPE_2__ hash_item; struct drm_file* priv; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;
typedef scalar_t__ drm_magic_t ;
struct TYPE_3__ {struct drm_device* dev; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 struct drm_magic_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct drm_master *VAR_2, struct drm_file *VAR_3,
    drm_magic_t VAR_4)
{
 struct drm_magic_entry *VAR_5;
 struct drm_device *VAR_6 = VAR_2->minor->dev;
 FUNC_0("%d\n", VAR_4);

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->priv = VAR_3;
 VAR_5->hash_item.key = (unsigned long)VAR_4;
 FUNC_4(&VAR_6->struct_mutex);
 FUNC_1(&VAR_2->magiclist, &VAR_5->hash_item);
 FUNC_3(&VAR_5->head, &VAR_2->magicfree);
 FUNC_5(&VAR_6->struct_mutex);

 return 0;
}
