
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_space_map {int dummy; } ;
struct sm_metadata {struct dm_space_map sm; } ;


 int VAR_0 ;
 struct dm_space_map* FUNC_0 (int ) ;
 int VAR_1 ;
 struct sm_metadata* FUNC_1 (int,int ) ;
 int FUNC_2 (struct dm_space_map*,int *,int) ;
 int VAR_2 ;

struct dm_space_map *FUNC_3(void)
{
 struct sm_metadata *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_3->sm, &VAR_2, sizeof(VAR_3->sm));

 return &VAR_3->sm;
}
