
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_gather_list {int dummy; } ;
struct cxgbi_ddp_info {int map_lock; int * gl_map; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct cxgbi_ddp_info *VAR_0,
      int VAR_1, int VAR_2)
{
 FUNC_1(&VAR_0->map_lock);
 FUNC_0(&VAR_0->gl_map[VAR_1], 0,
  VAR_2 * sizeof(struct cxgbi_gather_list *));
 FUNC_2(&VAR_0->map_lock);
}
