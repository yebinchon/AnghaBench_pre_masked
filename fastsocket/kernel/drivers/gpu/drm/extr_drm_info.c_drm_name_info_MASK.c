
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct drm_minor {struct drm_master* master; struct drm_device* dev; } ;
struct drm_master {scalar_t__ unique; } ;
struct drm_info_node {struct drm_minor* minor; } ;
struct drm_device {int dev; TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {char* (* get_name ) (struct drm_device*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,char const*,int ,...) ;
 char* FUNC_2 (struct drm_device*) ;

int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = (struct drm_info_node *) VAR_0->private;
 struct drm_minor *VAR_3 = VAR_2->minor;
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_master *VAR_5 = VAR_3->master;
 const char *VAR_6;
 if (!VAR_5)
  return 0;

 VAR_6 = VAR_4->driver->bus->get_name(VAR_4);
 if (VAR_5->unique) {
  FUNC_1(VAR_0, "%s %s %s\n",
      VAR_6,
      FUNC_0(VAR_4->dev), VAR_5->unique);
 } else {
  FUNC_1(VAR_0, "%s %s\n",
      VAR_6, FUNC_0(VAR_4->dev));
 }
 return 0;
}
