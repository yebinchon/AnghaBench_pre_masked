
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_space_map {int (* root_size ) (struct dm_space_map*,size_t*) ;} ;


 int FUNC_0 (struct dm_space_map*,size_t*) ;

__attribute__((used)) static inline int FUNC_1(struct dm_space_map *VAR_0, size_t *VAR_1)
{
 return VAR_0->root_size(VAR_0, VAR_1);
}
