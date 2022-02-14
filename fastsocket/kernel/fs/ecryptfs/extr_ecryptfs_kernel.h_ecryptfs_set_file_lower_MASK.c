
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ private_data; } ;
struct ecryptfs_file_info {struct file* wfi_file; } ;



__attribute__((used)) static inline void
FUNC_0(struct file *VAR_0, struct file *VAR_1)
{
 ((struct ecryptfs_file_info *)VAR_0->private_data)->wfi_file =
  VAR_1;
}
