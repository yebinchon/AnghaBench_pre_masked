
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_mem_reg {scalar_t__ mem_type; } ;
struct ttm_buffer_object {int dummy; } ;
struct nouveau_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline uint32_t
FUNC_0(struct ttm_buffer_object *VAR_3,
        struct nouveau_channel *VAR_4, struct ttm_mem_reg *VAR_5)
{
 if (VAR_5->mem_type == VAR_2)
  return VAR_1;
 return VAR_0;
}
