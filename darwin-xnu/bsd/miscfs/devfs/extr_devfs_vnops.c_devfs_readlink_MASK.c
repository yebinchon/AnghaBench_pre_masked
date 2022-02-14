
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnop_readlink_args {struct uio* a_uio; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct uio {int dummy; } ;
struct TYPE_6__ {int namelen; int name; } ;
struct TYPE_5__ {TYPE_2__ Slnk; } ;
struct TYPE_7__ {scalar_t__ dn_type; TYPE_1__ dn_typeinfo; } ;
typedef TYPE_3__ devnode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct vnode*) ;
 int FUNC_1 (int ,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_2(struct vnop_readlink_args *VAR_2)





{
 struct vnode *VAR_3 = VAR_2->a_vp;
 struct uio *VAR_4 = VAR_2->a_uio;
 devnode_t * VAR_5;
 int VAR_6 = 0;


 VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->dn_type != VAR_0) {
         VAR_6 = VAR_1;
  goto out;
 }
 VAR_6 = FUNC_1(VAR_5->dn_typeinfo.Slnk.name,
   VAR_5->dn_typeinfo.Slnk.namelen, VAR_4);
out:
 return VAR_6;
}
