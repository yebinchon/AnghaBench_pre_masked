
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int attr_ver; } ;
struct TYPE_6__ {TYPE_2__ read; } ;
struct TYPE_4__ {int argpages; int page_zeroing; } ;
struct fuse_req {size_t num_pages; int (* end ) (struct fuse_conn*,struct fuse_req*) ;int ff; TYPE_3__ misc; TYPE_1__ out; int * pages; } ;
struct fuse_file {struct fuse_conn* fc; } ;
struct fuse_conn {scalar_t__ async_read; } ;
struct file {struct fuse_file* private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct fuse_file*) ;
 int FUNC_1 (struct fuse_conn*) ;
 int FUNC_2 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_3 (struct fuse_req*,struct file*,int ,size_t,int ) ;
 int FUNC_4 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_5 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct fuse_req *VAR_2, struct file *VAR_3)
{
 struct fuse_file *VAR_4 = VAR_3->private_data;
 struct fuse_conn *VAR_5 = VAR_4->fc;
 loff_t VAR_6 = FUNC_7(VAR_2->pages[0]);
 size_t VAR_7 = VAR_2->num_pages << VAR_1;

 VAR_2->out.argpages = 1;
 VAR_2->out.page_zeroing = 1;
 FUNC_3(VAR_2, VAR_3, VAR_6, VAR_7, VAR_0);
 VAR_2->misc.read.attr_ver = FUNC_1(VAR_5);
 if (VAR_5->async_read) {
  VAR_2->ff = FUNC_0(VAR_4);
  VAR_2->end = FUNC_4;
  FUNC_6(VAR_5, VAR_2);
 } else {
  FUNC_5(VAR_5, VAR_2);
  FUNC_4(VAR_5, VAR_2);
  FUNC_2(VAR_5, VAR_2);
 }
}
