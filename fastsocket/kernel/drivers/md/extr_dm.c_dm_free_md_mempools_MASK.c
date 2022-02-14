
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_md_mempools {scalar_t__ bs; scalar_t__ tio_pool; scalar_t__ io_pool; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dm_md_mempools*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct dm_md_mempools *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->io_pool)
  FUNC_2(VAR_0->io_pool);

 if (VAR_0->tio_pool)
  FUNC_2(VAR_0->tio_pool);

 if (VAR_0->bs)
  FUNC_0(VAR_0->bs);

 FUNC_1(VAR_0);
}
