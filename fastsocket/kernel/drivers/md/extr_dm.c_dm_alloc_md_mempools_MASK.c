
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_md_mempools {void* io_pool; void* tio_pool; int bs; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct dm_md_mempools*) ;
 struct dm_md_mempools* FUNC_4 (int,int ) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (void*) ;

struct dm_md_mempools *FUNC_7(unsigned VAR_7, unsigned VAR_8)
{
 struct dm_md_mempools *VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 unsigned int VAR_10 = (VAR_7 == VAR_0) ? 16 : VAR_2;

 if (!VAR_9)
  return ((void*)0);

 VAR_9->io_pool = (VAR_7 == VAR_0) ?
    FUNC_5(VAR_2, VAR_3) :
    FUNC_5(VAR_2, VAR_4);
 if (!VAR_9->io_pool)
  goto free_pools_and_out;

 VAR_9->tio_pool = (VAR_7 == VAR_0) ?
     FUNC_5(VAR_2, VAR_6) :
     FUNC_5(VAR_2, VAR_5);
 if (!VAR_9->tio_pool)
  goto free_io_pool_and_out;

 VAR_9->bs = FUNC_0(VAR_10, 0);
 if (!VAR_9->bs)
  goto free_tio_pool_and_out;

 if (VAR_8 && FUNC_2(VAR_9->bs, VAR_10))
  goto free_bioset_and_out;

 return VAR_9;

free_bioset_and_out:
 FUNC_1(VAR_9->bs);

free_tio_pool_and_out:
 FUNC_6(VAR_9->tio_pool);

free_io_pool_and_out:
 FUNC_6(VAR_9->io_pool);

free_pools_and_out:
 FUNC_3(VAR_9);

 return ((void*)0);
}
