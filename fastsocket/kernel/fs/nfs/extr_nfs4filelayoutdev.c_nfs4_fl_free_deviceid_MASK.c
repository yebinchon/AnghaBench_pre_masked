
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_pnfs_ds {int ds_node; int ds_count; } ;
struct TYPE_2__ {int deviceid; } ;
struct nfs4_file_layout_dsaddr {int ds_num; struct nfs4_file_layout_dsaddr* stripe_indices; struct nfs4_pnfs_ds** ds_list; TYPE_1__ id_node; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (struct nfs4_pnfs_ds*) ;
 int FUNC_2 (struct nfs4_file_layout_dsaddr*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct nfs4_file_layout_dsaddr *VAR_1)
{
 struct nfs4_pnfs_ds *VAR_2;
 int VAR_3;

 FUNC_4(&VAR_1->id_node.deviceid);

 for (VAR_3 = 0; VAR_3 < VAR_1->ds_num; VAR_3++) {
  VAR_2 = VAR_1->ds_list[VAR_3];
  if (VAR_2 != ((void*)0)) {
   if (FUNC_0(&VAR_2->ds_count,
      &VAR_0)) {
    FUNC_3(&VAR_2->ds_node);
    FUNC_5(&VAR_0);
    FUNC_1(VAR_2);
   }
  }
 }
 FUNC_2(VAR_1->stripe_indices);
 FUNC_2(VAR_1);
}
