
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_14__ {int numargs; int argvar; int argpages; TYPE_6__* args; } ;
struct cuse_init_in {int flags; int minor; int major; } ;
struct TYPE_11__ {int cuse_init_out; struct cuse_init_in cuse_init_in; } ;
struct TYPE_8__ {int opcode; } ;
struct TYPE_10__ {int numargs; TYPE_2__* args; TYPE_1__ h; } ;
struct fuse_req {int num_pages; int end; TYPE_7__ out; TYPE_5__* page_descs; struct page** pages; TYPE_4__ misc; TYPE_3__ in; } ;
struct fuse_conn {int dummy; } ;
struct cuse_init_out {int dummy; } ;
struct cuse_conn {struct fuse_conn fc; } ;
struct TYPE_13__ {int size; int * value; } ;
struct TYPE_12__ {int length; } ;
struct TYPE_9__ {int size; struct cuse_init_in* value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct fuse_req*) ;
 int VAR_7 ;
 int FUNC_2 (struct fuse_req*) ;
 int VAR_8 ;
 struct page* FUNC_3 (int) ;
 int VAR_9 ;
 struct fuse_req* FUNC_4 (struct fuse_conn*,int) ;
 int FUNC_5 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_req*) ;

__attribute__((used)) static int FUNC_7(struct cuse_conn *VAR_10)
{
 int VAR_11;
 struct fuse_req *VAR_12;
 struct page *VAR_13;
 struct fuse_conn *VAR_14 = &VAR_10->fc;
 struct cuse_init_in *VAR_15;

 FUNC_0(VAR_1 > VAR_7);

 VAR_12 = FUNC_4(VAR_14, 1);
 if (FUNC_1(VAR_12)) {
  VAR_11 = FUNC_2(VAR_12);
  goto err;
 }

 VAR_11 = -VAR_3;
 VAR_13 = FUNC_3(VAR_6 | VAR_8);
 if (!VAR_13)
  goto err_put_req;

 VAR_15 = &VAR_12->misc.cuse_init_in;
 VAR_15->major = VAR_5;
 VAR_15->minor = VAR_4;
 VAR_15->flags |= VAR_2;
 VAR_12->in.h.opcode = VAR_0;
 VAR_12->in.numargs = 1;
 VAR_12->in.args[0].size = sizeof(struct cuse_init_in);
 VAR_12->in.args[0].value = VAR_15;
 VAR_12->out.numargs = 2;
 VAR_12->out.args[0].size = sizeof(struct cuse_init_out);
 VAR_12->out.args[0].value = &VAR_12->misc.cuse_init_out;
 VAR_12->out.args[1].size = VAR_1;
 VAR_12->out.argvar = 1;
 VAR_12->out.argpages = 1;
 VAR_12->pages[0] = VAR_13;
 VAR_12->page_descs[0].length = VAR_12->out.args[1].size;
 VAR_12->num_pages = 1;
 VAR_12->end = VAR_9;
 FUNC_6(VAR_14, VAR_12);

 return 0;

err_put_req:
 FUNC_5(VAR_14, VAR_12);
err:
 return VAR_11;
}
