
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ private_data; } ;
struct ecryptfs_file_info {int dummy; } ;



__attribute__((used)) static inline struct ecryptfs_file_info *
FUNC_0(struct file *VAR_0)
{
 return (struct ecryptfs_file_info *)VAR_0->private_data;
}
