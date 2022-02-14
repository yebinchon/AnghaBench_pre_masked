
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kstatfs {int f_type; scalar_t__ f_ffree; scalar_t__ f_files; scalar_t__ f_bavail; scalar_t__ f_bfree; scalar_t__ f_blocks; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dentry *VAR_1, struct kstatfs *VAR_2)
{
 VAR_2->f_blocks = 0;
 VAR_2->f_bfree = 0;
 VAR_2->f_bavail = 0;
 VAR_2->f_files = 0;
 VAR_2->f_ffree = 0;
 VAR_2->f_type = VAR_0;
 return 0;
}
