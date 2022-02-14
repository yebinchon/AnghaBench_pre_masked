
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;
struct fuse_req {int dummy; } ;
struct fuse_copy_state {int write; unsigned long nr_segs; struct iovec const* iov; struct fuse_req* req; struct fuse_conn* fc; } ;
struct fuse_conn {int dummy; } ;


 int FUNC_0 (struct fuse_copy_state*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct fuse_copy_state *VAR_0, struct fuse_conn *VAR_1,
      int VAR_2, struct fuse_req *VAR_3,
      const struct iovec *VAR_4, unsigned long VAR_5)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->fc = VAR_1;
 VAR_0->write = VAR_2;
 VAR_0->req = VAR_3;
 VAR_0->iov = VAR_4;
 VAR_0->nr_segs = VAR_5;
}
