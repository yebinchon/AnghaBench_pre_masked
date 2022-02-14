
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_space_map {int (* destroy ) (struct dm_space_map*) ;} ;


 int FUNC_0 (struct dm_space_map*) ;

__attribute__((used)) static inline void FUNC_1(struct dm_space_map *VAR_0)
{
 VAR_0->destroy(VAR_0);
}
