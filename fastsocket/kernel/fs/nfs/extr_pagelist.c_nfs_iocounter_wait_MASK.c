
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_io_counter {int io_count; } ;


 int FUNC_0 (struct nfs_io_counter*) ;
 scalar_t__ FUNC_1 (int *) ;

int
FUNC_2(struct nfs_io_counter *VAR_0)
{
 if (FUNC_1(&VAR_0->io_count) == 0)
  return 0;
 return FUNC_0(VAR_0);
}
