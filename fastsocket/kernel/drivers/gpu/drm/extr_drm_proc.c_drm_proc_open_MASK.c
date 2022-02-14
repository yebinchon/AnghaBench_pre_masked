
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct TYPE_4__ {struct drm_info_node* data; } ;
struct TYPE_3__ {int show; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int ,struct drm_info_node*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct drm_info_node* VAR_2 = FUNC_0(VAR_0)->data;

 return FUNC_1(VAR_1, VAR_2->info_ent->show, VAR_2);
}
