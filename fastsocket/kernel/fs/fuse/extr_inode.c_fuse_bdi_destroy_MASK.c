
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int bdi; scalar_t__ bdi_initialized; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct fuse_conn *VAR_0)
{
 if (VAR_0->bdi_initialized)
  FUNC_0(&VAR_0->bdi);
}
