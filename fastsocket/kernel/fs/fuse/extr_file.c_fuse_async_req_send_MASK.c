
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int end; struct fuse_io_priv* io; } ;
struct fuse_io_priv {size_t size; int lock; int reqs; } ;
struct fuse_conn {int dummy; } ;


 int FUNC_0 (struct fuse_req*) ;
 int VAR_0 ;
 int FUNC_1 (struct fuse_conn*,struct fuse_req*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static size_t FUNC_4(struct fuse_conn *VAR_1, struct fuse_req *VAR_2,
  size_t VAR_3, struct fuse_io_priv *VAR_4)
{
 FUNC_2(&VAR_4->lock);
 VAR_4->size += VAR_3;
 VAR_4->reqs++;
 FUNC_3(&VAR_4->lock);

 VAR_2->io = VAR_4;
 VAR_2->end = VAR_0;

 FUNC_0(VAR_2);
 FUNC_1(VAR_1, VAR_2);

 return VAR_3;
}
