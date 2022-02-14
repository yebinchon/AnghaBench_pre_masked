
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_space_map {int dummy; } ;
struct sm_disk {struct dm_space_map sm; int ll; scalar_t__ nr_allocated_this_transaction; scalar_t__ begin; } ;
struct dm_transaction_manager {int dummy; } ;


 int VAR_0 ;
 struct dm_space_map* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct sm_disk*) ;
 struct sm_disk* FUNC_2 (int,int ) ;
 int FUNC_3 (struct dm_space_map*,int *,int) ;
 int VAR_2 ;
 int FUNC_4 (struct dm_space_map*) ;
 int FUNC_5 (int *,struct dm_transaction_manager*,void*,size_t) ;

struct dm_space_map *FUNC_6(struct dm_transaction_manager *VAR_3,
         void *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct sm_disk *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->begin = 0;
 VAR_7->nr_allocated_this_transaction = 0;
 FUNC_3(&VAR_7->sm, &VAR_2, sizeof(VAR_7->sm));

 VAR_6 = FUNC_5(&VAR_7->ll, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  goto bad;

 VAR_6 = FUNC_4(&VAR_7->sm);
 if (VAR_6)
  goto bad;

 return &VAR_7->sm;

bad:
 FUNC_1(VAR_7);
 return FUNC_0(VAR_6);
}
