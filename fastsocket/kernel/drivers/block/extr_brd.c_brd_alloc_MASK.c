
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int first_minor; int disk_name; int flags; scalar_t__ queue; struct brd_device* private_data; int * fops; int major; } ;
struct brd_device {int brd_number; scalar_t__ brd_queue; struct gendisk* brd_disk; int brd_pages; int brd_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 struct gendisk* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct brd_device*) ;
 struct brd_device* FUNC_8 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct gendisk*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static struct brd_device *FUNC_12(int VAR_9)
{
 struct brd_device *VAR_10;
 struct gendisk *VAR_11;

 VAR_10 = FUNC_8(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  goto out;
 VAR_10->brd_number = VAR_9;
 FUNC_10(&VAR_10->brd_lock);
 FUNC_0(&VAR_10->brd_pages, VAR_2);

 VAR_10->brd_queue = FUNC_2(VAR_3);
 if (!VAR_10->brd_queue)
  goto out_free_dev;
 FUNC_5(VAR_10->brd_queue, VAR_6);
 FUNC_6(VAR_10->brd_queue, 1024);
 FUNC_4(VAR_10->brd_queue, VAR_0);

 VAR_11 = VAR_10->brd_disk = FUNC_1(1 << VAR_7);
 if (!VAR_11)
  goto out_free_queue;
 VAR_11->major = VAR_4;
 VAR_11->first_minor = VAR_9 << VAR_7;
 VAR_11->fops = &VAR_5;
 VAR_11->private_data = VAR_10;
 VAR_11->queue = VAR_10->brd_queue;
 VAR_11->flags |= VAR_1;
 FUNC_11(VAR_11->disk_name, "ram%d", VAR_9);
 FUNC_9(VAR_11, VAR_8 * 2);

 return VAR_10;

out_free_queue:
 FUNC_3(VAR_10->brd_queue);
out_free_dev:
 FUNC_7(VAR_10);
out:
 return ((void*)0);
}
