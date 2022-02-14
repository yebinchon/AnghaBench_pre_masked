
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kstatfs {int f_blocks; int f_bfree; int f_bavail; int f_files; int f_ffree; int f_bsize; int f_namelen; int f_type; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct dentry*,struct kstatfs*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 int VAR_4;

 FUNC_0();

 VAR_4 = FUNC_2(VAR_2, VAR_3);

 FUNC_1();

 if (VAR_4) {

  VAR_3->f_blocks = 9000000;
  VAR_3->f_bfree = 9000000;
  VAR_3->f_bavail = 9000000;
  VAR_3->f_files = 9000000;
  VAR_3->f_ffree = 9000000;
 }


 VAR_3->f_type = VAR_1;
 VAR_3->f_bsize = 4096;
 VAR_3->f_namelen = VAR_0;

 return 0;
}
