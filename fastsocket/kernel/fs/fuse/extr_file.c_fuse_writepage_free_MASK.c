
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int ff; int * pages; } ;
struct fuse_conn {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fuse_conn *VAR_0, struct fuse_req *VAR_1)
{
 FUNC_0(VAR_1->pages[0]);
 FUNC_1(VAR_1->ff);
}
