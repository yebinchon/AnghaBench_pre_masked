
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int refcount; } ;
struct drm_gem_object {TYPE_1__ refcount; int handle_count; int size; int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct drm_gem_object *VAR_3 = VAR_1;
 struct seq_file *VAR_4 = VAR_2;

 FUNC_1(VAR_4, "%6d %8zd %7d %8d\n",
     VAR_3->name, VAR_3->size,
     FUNC_0(&VAR_3->handle_count),
     FUNC_0(&VAR_3->refcount.refcount));
 return 0;
}
