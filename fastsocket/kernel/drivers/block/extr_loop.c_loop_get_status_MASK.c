
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct loop_info64 {int lo_encrypt_key; scalar_t__ lo_encrypt_key_size; int lo_encrypt_type; int lo_crypt_name; int lo_file_name; int lo_flags; int lo_sizelimit; int lo_offset; void* lo_rdevice; int lo_inode; void* lo_device; int lo_number; } ;
struct loop_device {scalar_t__ lo_state; scalar_t__ lo_encrypt_key_size; int lo_encrypt_key; TYPE_2__* lo_encryption; int lo_crypt_name; int lo_file_name; int lo_flags; int lo_sizelimit; int lo_offset; scalar_t__ lo_device; int lo_number; struct file* lo_backing_file; } ;
struct kstat {int dev; int rdev; int ino; } ;
struct TYPE_3__ {int dentry; int mnt; } ;
struct file {TYPE_1__ f_path; } ;
struct TYPE_4__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct loop_info64*,int ,int) ;
 int FUNC_4 (int ,int ,struct kstat*) ;

__attribute__((used)) static int
FUNC_5(struct loop_device *VAR_4, struct loop_info64 *VAR_5)
{
 struct file *VAR_6 = VAR_4->lo_backing_file;
 struct kstat VAR_7;
 int VAR_8;

 if (VAR_4->lo_state != VAR_3)
  return -VAR_1;
 VAR_8 = FUNC_4(VAR_6->f_path.mnt, VAR_6->f_path.dentry, &VAR_7);
 if (VAR_8)
  return VAR_8;
 FUNC_3(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->lo_number = VAR_4->lo_number;
 VAR_5->lo_device = FUNC_1(VAR_7.dev);
 VAR_5->lo_inode = VAR_7.ino;
 VAR_5->lo_rdevice = FUNC_1(VAR_4->lo_device ? VAR_7.rdev : VAR_7.dev);
 VAR_5->lo_offset = VAR_4->lo_offset;
 VAR_5->lo_sizelimit = VAR_4->lo_sizelimit;
 VAR_5->lo_flags = VAR_4->lo_flags;
 FUNC_2(VAR_5->lo_file_name, VAR_4->lo_file_name, VAR_2);
 FUNC_2(VAR_5->lo_crypt_name, VAR_4->lo_crypt_name, VAR_2);
 VAR_5->lo_encrypt_type =
  VAR_4->lo_encryption ? VAR_4->lo_encryption->number : 0;
 if (VAR_4->lo_encrypt_key_size && FUNC_0(VAR_0)) {
  VAR_5->lo_encrypt_key_size = VAR_4->lo_encrypt_key_size;
  FUNC_2(VAR_5->lo_encrypt_key, VAR_4->lo_encrypt_key,
         VAR_4->lo_encrypt_key_size);
 }
 return 0;
}
