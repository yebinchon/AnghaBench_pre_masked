
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loop_device {scalar_t__ lo_state; int lo_refcnt; int lo_ctl_mutex; int lo_disk; int lo_file_name; int lo_crypt_name; int lo_encrypt_key; int * lo_thread; scalar_t__ lo_flags; scalar_t__ lo_encrypt_key_size; scalar_t__ lo_sizelimit; scalar_t__ lo_offset; int * lo_encryption; int * lo_device; int * ioctl; int * transfer; struct file* lo_backing_file; TYPE_1__* lo_queue; int lo_lock; int old_gfp_mask; } ;
struct file {int f_mapping; } ;
struct block_device {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int * unplug_fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct block_device*,int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (struct block_device*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct loop_device*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct loop_device *VAR_11, struct block_device *VAR_12)
{
 struct file *VAR_13 = VAR_11->lo_backing_file;
 gfp_t VAR_14 = VAR_11->old_gfp_mask;

 if (VAR_11->lo_state != VAR_6)
  return -VAR_3;

 if (VAR_11->lo_refcnt > 1)
  return -VAR_1;

 if (VAR_13 == ((void*)0))
  return -VAR_2;

 FUNC_11(&VAR_11->lo_lock);
 VAR_11->lo_state = VAR_7;
 FUNC_12(&VAR_11->lo_lock);

 FUNC_4(VAR_11->lo_thread);

 VAR_11->lo_queue->unplug_fn = ((void*)0);
 VAR_11->lo_backing_file = ((void*)0);

 FUNC_5(VAR_11);
 VAR_11->transfer = ((void*)0);
 VAR_11->ioctl = ((void*)0);
 VAR_11->lo_device = ((void*)0);
 VAR_11->lo_encryption = ((void*)0);
 VAR_11->lo_offset = 0;
 VAR_11->lo_sizelimit = 0;
 VAR_11->lo_encrypt_key_size = 0;
 VAR_11->lo_flags = 0;
 VAR_11->lo_thread = ((void*)0);
 FUNC_7(VAR_11->lo_encrypt_key, 0, VAR_4);
 FUNC_7(VAR_11->lo_crypt_name, 0, VAR_5);
 FUNC_7(VAR_11->lo_file_name, 0, VAR_5);
 if (VAR_12)
  FUNC_2(VAR_12);
 FUNC_10(VAR_11->lo_disk, 0);
 if (VAR_12)
  FUNC_0(VAR_12, 0);
 FUNC_6(VAR_13->f_mapping, VAR_14);
 VAR_11->lo_state = VAR_8;

 FUNC_8(VAR_9);
 if (VAR_10 > 0 && VAR_12)
  FUNC_3(VAR_12, VAR_0, 0);
 FUNC_9(&VAR_11->lo_ctl_mutex);






 FUNC_1(VAR_13);
 return 0;
}
