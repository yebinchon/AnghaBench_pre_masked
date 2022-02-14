
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int max_pages; int page_descs; int pages; struct file* stolen_file; } ;
struct fuse_file {struct fuse_req* reserved_req; } ;
struct fuse_conn {int lock; int reserved_req_waitq; } ;
struct file {struct fuse_file* private_data; } ;


 int FUNC_0 (struct fuse_req*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct fuse_req*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fuse_conn *VAR_0, struct fuse_req *VAR_1)
{
 struct file *VAR_2 = VAR_1->stolen_file;
 struct fuse_file *VAR_3 = VAR_2->private_data;

 FUNC_3(&VAR_0->lock);
 FUNC_2(VAR_1, VAR_1->pages, VAR_1->page_descs, VAR_1->max_pages);
 FUNC_0(VAR_3->reserved_req);
 VAR_3->reserved_req = VAR_1;
 FUNC_5(&VAR_0->reserved_req_waitq);
 FUNC_4(&VAR_0->lock);
 FUNC_1(VAR_2);
}
