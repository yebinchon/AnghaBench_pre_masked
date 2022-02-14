
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1) {
 if (FUNC_1(VAR_0)) {
  FUNC_0("ncp_release: failed to close\n");
 }
 return 0;
}
