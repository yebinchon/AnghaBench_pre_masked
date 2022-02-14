
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pagevec {int dummy; } ;
struct page {int flags; int index; } ;
struct fscache_retrieval {int dummy; } ;
struct TYPE_9__ {struct page* private; } ;
struct cachefiles_one_read {int op; TYPE_4__ monitor; struct page* back_page; struct page* netfs_page; } ;
struct cachefiles_object {TYPE_2__* backer; } ;
struct address_space {TYPE_3__* a_ops; } ;
struct TYPE_8__ {int (* readpage ) (int *,struct page*) ;} ;
struct TYPE_7__ {TYPE_1__* d_inode; } ;
struct TYPE_6__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_3 ;
 struct page* FUNC_2 (int) ;
 int FUNC_3 (struct pagevec*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct page*,TYPE_4__*) ;
 int FUNC_8 (struct page*,struct address_space*,int ,int) ;
 int VAR_4 ;
 int FUNC_9 (struct cachefiles_object*,char*) ;
 int VAR_5 ;
 int FUNC_10 (struct page*,struct page*) ;
 struct page* FUNC_11 (struct address_space*,int ) ;
 int FUNC_12 (struct fscache_retrieval*,struct page*,int ) ;
 int FUNC_13 (struct fscache_retrieval*) ;
 int FUNC_14 (struct fscache_retrieval*,struct page*,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct fscache_retrieval*,int) ;
 int FUNC_17 (TYPE_4__*,int ) ;
 int FUNC_18 (struct cachefiles_one_read*) ;
 struct cachefiles_one_read* FUNC_19 (int,int) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct pagevec*,struct page*) ;
 int FUNC_24 (struct pagevec*) ;
 int FUNC_25 (int *,struct page*) ;
 scalar_t__ FUNC_26 (struct page*) ;
 int FUNC_27 (struct page*) ;

__attribute__((used)) static int FUNC_28(struct cachefiles_object *VAR_6,
         struct fscache_retrieval *VAR_7,
         struct page *VAR_8,
         struct pagevec *VAR_9)
{
 struct cachefiles_one_read *VAR_10;
 struct address_space *VAR_11;
 struct page *VAR_12, *VAR_13;
 int VAR_14;

 FUNC_5("");

 FUNC_24(VAR_9);

 FUNC_4("read back %p{%lu,%d}",
        VAR_8, VAR_8->index, FUNC_22(VAR_8));

 VAR_10 = FUNC_19(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  goto nomem;

 VAR_10->netfs_page = VAR_8;
 VAR_10->op = FUNC_13(VAR_7);

 FUNC_17(&VAR_10->monitor, VAR_5);


 VAR_11 = VAR_6->backer->d_inode->i_mapping;
 VAR_12 = ((void*)0);

 for (;;) {
  VAR_13 = FUNC_11(VAR_11, VAR_8->index);
  if (VAR_13)
   goto backing_page_already_present;

  if (!VAR_12) {
   VAR_12 = FUNC_2(VAR_4 |
           VAR_3);
   if (!VAR_12)
    goto nomem_monitor;
  }

  VAR_14 = FUNC_8(VAR_12, VAR_11,
     VAR_8->index, VAR_4);
  if (VAR_14 == 0)
   goto installed_new_backing_page;
  if (VAR_14 != -VAR_0)
   goto nomem_page;
 }



installed_new_backing_page:
 FUNC_4("- new %p", VAR_12);

 VAR_13 = VAR_12;
 VAR_12 = ((void*)0);

 FUNC_20(VAR_13);
 FUNC_23(VAR_9, VAR_13);
 FUNC_3(VAR_9);

read_backing_page:
 VAR_14 = VAR_11->a_ops->readpage(((void*)0), VAR_13);
 if (VAR_14 < 0)
  goto read_error;


monitor_backing_page:
 FUNC_4("- monitor add");


 FUNC_20(VAR_10->netfs_page);
 FUNC_20(VAR_13);
 VAR_10->back_page = VAR_13;
 VAR_10->monitor.private = VAR_13;
 FUNC_7(VAR_13, &VAR_10->monitor);
 VAR_10 = ((void*)0);




 if (FUNC_26(VAR_13)) {
  FUNC_4("jumpstart %p {%lx}", VAR_13, VAR_13->flags);
  FUNC_27(VAR_13);
 }
 goto success;



backing_page_already_present:
 FUNC_4("- present");

 if (VAR_12) {
  FUNC_21(VAR_12);
  VAR_12 = ((void*)0);
 }

 if (FUNC_0(VAR_13))
  goto io_error;

 if (FUNC_1(VAR_13))
  goto backing_page_already_uptodate;

 if (!FUNC_26(VAR_13))
  goto monitor_backing_page;
 FUNC_4("read %p {%lx}", VAR_13, VAR_13->flags);
 goto read_backing_page;



backing_page_already_uptodate:
 FUNC_4("- uptodate");

 FUNC_14(VAR_7, VAR_8, 1);

 FUNC_10(VAR_8, VAR_13);
 FUNC_12(VAR_7, VAR_8, 0);
 FUNC_16(VAR_7, 1);

success:
 FUNC_4("success");
 VAR_14 = 0;

out:
 if (VAR_13)
  FUNC_21(VAR_13);
 if (VAR_10) {
  FUNC_15(VAR_10->op);
  FUNC_18(VAR_10);
 }
 FUNC_6(" = %d", VAR_14);
 return VAR_14;

read_error:
 FUNC_4("read error %d", VAR_14);
 if (VAR_14 == -VAR_2) {
  FUNC_16(VAR_7, 1);
  goto out;
 }
io_error:
 FUNC_9(VAR_6, "Page read error on backing file");
 FUNC_16(VAR_7, 1);
 VAR_14 = -VAR_1;
 goto out;

nomem_page:
 FUNC_21(VAR_12);
nomem_monitor:
 FUNC_15(VAR_10->op);
 FUNC_18(VAR_10);
nomem:
 FUNC_16(VAR_7, 1);
 FUNC_6(" = -ENOMEM");
 return -VAR_2;
}
