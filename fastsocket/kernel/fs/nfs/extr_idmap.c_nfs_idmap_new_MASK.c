
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_client {struct idmap* cl_idmap; TYPE_2__* cl_rpcclient; } ;
struct TYPE_8__ {int h_type; } ;
struct TYPE_7__ {int h_type; } ;
struct idmap {TYPE_4__ idmap_group_hash; TYPE_3__ idmap_user_hash; int idmap_wq; int idmap_im_lock; int idmap_lock; int idmap_dentry; } ;
struct TYPE_5__ {int dentry; } ;
struct TYPE_6__ {TYPE_1__ cl_path; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct idmap*) ;
 struct idmap* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,struct idmap*,int *,int ) ;

int
FUNC_8(struct nfs_client *VAR_5)
{
 struct idmap *VAR_6;
 int VAR_7;

 FUNC_0(VAR_5->cl_idmap != ((void*)0));

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->idmap_dentry = FUNC_7(VAR_5->cl_rpcclient->cl_path.dentry,
   "idmap", VAR_6, &VAR_4, 0);
 if (FUNC_1(VAR_6->idmap_dentry)) {
  VAR_7 = FUNC_2(VAR_6->idmap_dentry);
  FUNC_4(VAR_6);
  return VAR_7;
 }

 FUNC_6(&VAR_6->idmap_lock);
 FUNC_6(&VAR_6->idmap_im_lock);
 FUNC_3(&VAR_6->idmap_wq);
 VAR_6->idmap_user_hash.h_type = VAR_3;
 VAR_6->idmap_group_hash.h_type = VAR_2;

 VAR_5->cl_idmap = VAR_6;
 return 0;
}
