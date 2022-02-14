
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dst_node {scalar_t__ size; TYPE_3__* bdev; TYPE_2__* info; } ;
struct dst_export_ctl {char* device; } ;
struct dst_ctl {int dummy; } ;
typedef int dev_t ;
struct TYPE_7__ {TYPE_1__* bd_inode; } ;
struct TYPE_6__ {scalar_t__ size; int local; } ;
struct TYPE_5__ {scalar_t__ i_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (struct dst_node*,struct dst_export_ctl*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct dst_node *VAR_4, struct dst_ctl *VAR_5,
  struct dst_export_ctl *VAR_6)
{
 int VAR_7;
 dev_t VAR_8 = 0;

 FUNC_5(VAR_4->info->local, sizeof(VAR_4->info->local), "%s", VAR_6->device);

 VAR_7 = FUNC_1(VAR_6->device, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_4->bdev = FUNC_4(VAR_8, VAR_1|VAR_2);
 if (!VAR_4->bdev)
  return -VAR_0;

 if (VAR_4->size != 0)
  VAR_4->size = FUNC_3(VAR_3, VAR_4->bdev->bd_inode->i_size, VAR_4->size);
 else
  VAR_4->size = VAR_4->bdev->bd_inode->i_size;

 VAR_4->info->size = VAR_4->size;
 VAR_7 = FUNC_2(VAR_4, VAR_6);
 if (VAR_7)
  goto err_out_cleanup;

 return 0;

err_out_cleanup:
 FUNC_0(VAR_4->bdev, VAR_1|VAR_2);
 VAR_4->bdev = ((void*)0);

 return VAR_7;
}
