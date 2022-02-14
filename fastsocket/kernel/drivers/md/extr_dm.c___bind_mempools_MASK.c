
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int * bs; int * tio_pool; int * io_pool; } ;
struct dm_table {int dummy; } ;
struct dm_md_mempools {int * bs; int * tio_pool; int * io_pool; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dm_table*) ;
 struct dm_md_mempools* FUNC_2 (struct dm_table*) ;

__attribute__((used)) static void FUNC_3(struct mapped_device *VAR_0, struct dm_table *VAR_1)
{
 struct dm_md_mempools *VAR_2;

 if (VAR_0->io_pool && VAR_0->tio_pool && VAR_0->bs)

  goto out;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(!VAR_2 || VAR_0->io_pool || VAR_0->tio_pool || VAR_0->bs);

 VAR_0->io_pool = VAR_2->io_pool;
 VAR_2->io_pool = ((void*)0);
 VAR_0->tio_pool = VAR_2->tio_pool;
 VAR_2->tio_pool = ((void*)0);
 VAR_0->bs = VAR_2->bs;
 VAR_2->bs = ((void*)0);

out:

 FUNC_1(VAR_1);
}
