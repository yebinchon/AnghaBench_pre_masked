
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int flags; int index; struct address_space* mapping; } ;
struct cachefiles_one_read {int op_link; int monitor; struct page* back_page; } ;
struct cachefiles_object {int work_lock; TYPE_2__* backer; } ;
struct address_space {TYPE_3__* a_ops; } ;
struct TYPE_6__ {int (* readpage ) (int *,struct page*) ;} ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int i_ino; struct address_space* i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct page*,int *) ;
 struct page* FUNC_7 (struct address_space*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct page*) ;
 scalar_t__ FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static int FUNC_15(struct cachefiles_object *VAR_3,
       struct cachefiles_one_read *VAR_4)
{
 struct address_space *VAR_5 = VAR_3->backer->d_inode->i_mapping;
 struct page *VAR_6 = VAR_4->back_page, *VAR_7;
 int VAR_8;

 FUNC_4("{ino=%lx},{%lx,%lx}",
        VAR_3->backer->d_inode->i_ino,
        VAR_6->index, VAR_6->flags);


 if (VAR_6->mapping != VAR_5) {
  FUNC_5(" = -ENODATA [mapping]");
  return -VAR_2;
 }

 VAR_7 = FUNC_7(VAR_5, VAR_6->index);
 if (!VAR_7) {
  FUNC_5(" = -ENODATA [gone]");
  return -VAR_2;
 }

 if (VAR_6 != VAR_7) {
  FUNC_9(VAR_7);
  FUNC_5(" = -ENODATA [different]");
  return -VAR_2;
 }



 FUNC_9(VAR_7);

 FUNC_0(&VAR_4->op_link);
 FUNC_6(VAR_6, &VAR_4->monitor);

 if (FUNC_13(VAR_6)) {
  VAR_8 = -VAR_1;
  if (FUNC_1(VAR_6))
   goto unlock_discard;
  VAR_8 = 0;
  if (FUNC_2(VAR_6))
   goto unlock_discard;

  FUNC_3("reissue read");
  VAR_8 = VAR_5->a_ops->readpage(((void*)0), VAR_6);
  if (VAR_8 < 0)
   goto unlock_discard;
 }




 if (FUNC_13(VAR_6)) {
  FUNC_3("jumpstart %p {%lx}", VAR_6, VAR_6->flags);
  FUNC_14(VAR_6);
 }


 FUNC_5(" = -EINPROGRESS");
 return -VAR_0;

unlock_discard:
 FUNC_14(VAR_6);
 FUNC_10(&VAR_3->work_lock);
 FUNC_8(&VAR_4->op_link);
 FUNC_11(&VAR_3->work_lock);
 FUNC_5(" = %d", VAR_8);
 return VAR_8;
}
