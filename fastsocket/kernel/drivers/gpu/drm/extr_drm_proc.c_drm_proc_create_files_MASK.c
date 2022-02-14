
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct proc_dir_entry {int name; } ;
struct TYPE_5__ {int list; } ;
struct drm_minor {int proc_root; TYPE_2__ proc_nodes; struct drm_device* dev; } ;
struct drm_info_node {int list; struct drm_info_list* info_ent; struct drm_minor* minor; } ;
struct drm_info_list {int driver_features; int name; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int driver_features; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct drm_info_node*) ;
 struct drm_info_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 struct proc_dir_entry* FUNC_5 (int ,int ,struct proc_dir_entry*,int *,struct drm_info_node*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct drm_info_list *VAR_4, int VAR_5,
     struct proc_dir_entry *VAR_6, struct drm_minor *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->dev;
 struct proc_dir_entry *VAR_9;
 struct drm_info_node *VAR_10;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  u32 VAR_13 = VAR_4[VAR_11].driver_features;

  if (VAR_13 != 0 &&
      (VAR_8->driver->driver_features & VAR_13) != VAR_13)
   continue;

  VAR_10 = FUNC_2(sizeof(struct drm_info_node), VAR_0);
  if (VAR_10 == ((void*)0)) {
   VAR_12 = -1;
   goto fail;
  }
  VAR_10->minor = VAR_7;
  VAR_10->info_ent = &VAR_4[VAR_11];
  FUNC_3(&VAR_10->list, &VAR_7->proc_nodes.list);

  VAR_9 = FUNC_5(VAR_4[VAR_11].name, VAR_1, VAR_6,
           &VAR_2, VAR_10);
  if (!VAR_9) {
   FUNC_0("Cannot create /proc/dri/%s/%s\n",
      VAR_6->name, VAR_4[VAR_11].name);
   FUNC_4(&VAR_10->list);
   FUNC_1(VAR_10);
   VAR_12 = -1;
   goto fail;
  }

 }
 return 0;

fail:
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  FUNC_6(VAR_3[VAR_11].name, VAR_7->proc_root);
 return VAR_12;
}
