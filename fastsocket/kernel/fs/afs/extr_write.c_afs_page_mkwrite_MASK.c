
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {TYPE_2__* vm_file; } ;
struct page {int index; } ;
struct TYPE_6__ {int vnode; int vid; } ;
struct afs_vnode {int cache; TYPE_3__ fid; } ;
struct TYPE_5__ {TYPE_1__* f_mapping; } ;
struct TYPE_4__ {int host; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct page*) ;

int FUNC_4(struct vm_area_struct *VAR_0, struct page *VAR_1)
{
 struct afs_vnode *VAR_2 = FUNC_0(VAR_0->vm_file->f_mapping->host);

 FUNC_1("{{%x:%u}},{%lx}",
        VAR_2->fid.vid, VAR_2->fid.vnode, VAR_1->index);







 FUNC_2(" = 0");
 return 0;
}
