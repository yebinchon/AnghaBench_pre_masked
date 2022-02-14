
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


struct page {TYPE_3__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_13__ {int error; } ;
struct TYPE_14__ {TYPE_6__ h; TYPE_2__* args; } ;
struct TYPE_8__ {size_t size; } ;
struct TYPE_11__ {int attr_ver; TYPE_1__ in; } ;
struct TYPE_12__ {TYPE_4__ read; } ;
struct fuse_req {int num_pages; scalar_t__ ff; TYPE_7__ out; struct page** pages; TYPE_5__ misc; } ;
struct fuse_conn {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_10__ {struct inode* host; } ;
struct TYPE_9__ {size_t size; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static void FUNC_7(struct fuse_conn *VAR_0, struct fuse_req *VAR_1)
{
 int VAR_2;
 size_t VAR_3 = VAR_1->misc.read.in.size;
 size_t VAR_4 = VAR_1->out.args[0].size;
 struct inode *VAR_5 = VAR_1->pages[0]->mapping->host;




 if (!VAR_1->out.h.error && VAR_4 < VAR_3) {
  loff_t VAR_6 = FUNC_5(VAR_1->pages[0]) + VAR_4;
  FUNC_4(VAR_5, VAR_6, VAR_1->misc.read.attr_ver);
 }

 FUNC_3(VAR_5);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pages; VAR_2++) {
  struct page *VAR_7 = VAR_1->pages[VAR_2];
  if (!VAR_1->out.h.error)
   FUNC_1(VAR_7);
  else
   FUNC_0(VAR_7);
  FUNC_6(VAR_7);
 }
 if (VAR_1->ff)
  FUNC_2(VAR_1->ff);
}
