
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t idx; } ;
struct lt_elem {TYPE_1__ lt_id; } ;
struct link_table {size_t elem_sz; size_t slab_shift; size_t slab_elem; int slab_msk; struct lt_elem** table; } ;


 int FUNC_0 (int) ;
 struct lt_elem* FUNC_1 (struct lt_elem*,int ,size_t) ;
 int FUNC_2 (char*,size_t,size_t,struct link_table*) ;

__attribute__((used)) static inline struct lt_elem *
FUNC_3(struct link_table *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = VAR_1 * VAR_0->elem_sz;
 struct lt_elem *VAR_3 = VAR_0->table[VAR_2 >> VAR_0->slab_shift];
 if (!VAR_3)
  FUNC_2("Invalid index:%d slab:%d (NULL) for table:%p\n",
        VAR_1, (VAR_2 >> VAR_0->slab_shift), VAR_0);
 FUNC_0(VAR_3->lt_id.idx <= VAR_1 && (VAR_3->lt_id.idx + VAR_0->slab_elem) > VAR_1);
 return FUNC_1(VAR_3, VAR_0->slab_msk, VAR_2);
}
