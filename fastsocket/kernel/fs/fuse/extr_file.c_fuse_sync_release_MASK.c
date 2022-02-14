
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fuse_file {TYPE_1__* reserved_req; int fc; int count; } ;
struct TYPE_3__ {int force; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fuse_file*,int,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (struct fuse_file*) ;

void FUNC_6(struct fuse_file *VAR_1, int VAR_2)
{
 FUNC_0(FUNC_1(&VAR_1->count) > 1);
 FUNC_2(VAR_1, VAR_2, VAR_0);
 VAR_1->reserved_req->force = 1;
 FUNC_4(VAR_1->fc, VAR_1->reserved_req);
 FUNC_3(VAR_1->fc, VAR_1->reserved_req);
 FUNC_5(VAR_1);
}
