
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {scalar_t__ s_bdev; } ;
struct TYPE_5__ {char* name; int ra_pages; int capabilities; int unplug_io_fn; } ;
struct fuse_conn {int bdi_initialized; TYPE_1__ bdi; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *,char*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct fuse_conn *VAR_4, struct super_block *VAR_5)
{
 int VAR_6;

 VAR_4->bdi.name = "fuse";
 VAR_4->bdi.ra_pages = (VAR_2 * 1024) / VAR_1;
 VAR_4->bdi.unplug_io_fn = VAR_3;

 VAR_4->bdi.capabilities = VAR_0;

 VAR_6 = FUNC_2(&VAR_4->bdi);
 if (VAR_6)
  return VAR_6;

 VAR_4->bdi_initialized = 1;

 if (VAR_5->s_bdev) {
  VAR_6 = FUNC_3(&VAR_4->bdi, ((void*)0), "%u:%u-fuseblk",
        FUNC_0(VAR_4->dev), FUNC_1(VAR_4->dev));
 } else {
  VAR_6 = FUNC_4(&VAR_4->bdi, VAR_4->dev);
 }

 if (VAR_6)
  return VAR_6;
 FUNC_5(&VAR_4->bdi, 1);

 return 0;
}
