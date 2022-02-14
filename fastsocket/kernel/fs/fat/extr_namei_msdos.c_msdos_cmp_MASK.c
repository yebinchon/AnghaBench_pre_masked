
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {unsigned char* name; scalar_t__ len; } ;
struct fat_mount_options {int dummy; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {struct fat_mount_options options; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,scalar_t__,unsigned char*,struct fat_mount_options*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_1, struct qstr *VAR_2, struct qstr *VAR_3)
{
 struct fat_mount_options *VAR_4 = &FUNC_0(VAR_1->d_sb)->options;
 unsigned char VAR_5[VAR_0], VAR_6[VAR_0];
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2->name, VAR_2->len, VAR_5, VAR_4);
 if (VAR_7)
  goto old_compare;
 VAR_7 = FUNC_2(VAR_3->name, VAR_3->len, VAR_6, VAR_4);
 if (VAR_7)
  goto old_compare;
 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_0);
out:
 return VAR_7;

old_compare:
 VAR_7 = 1;
 if (VAR_2->len == VAR_3->len)
  VAR_7 = FUNC_1(VAR_2->name, VAR_3->name, VAR_2->len);
 goto out;
}
