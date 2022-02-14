
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_space_map {int (* copy_root ) (struct dm_space_map*,void*,size_t) ;} ;


 int FUNC_0 (struct dm_space_map*,void*,size_t) ;

__attribute__((used)) static inline int FUNC_1(struct dm_space_map *VAR_0, void *VAR_1, size_t VAR_2)
{
 return VAR_0->copy_root(VAR_0, VAR_1, VAR_2);
}
