
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int interrupts; int pending; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct fuse_conn *VAR_0)
{
 return !FUNC_0(&VAR_0->pending) || !FUNC_0(&VAR_0->interrupts);
}
