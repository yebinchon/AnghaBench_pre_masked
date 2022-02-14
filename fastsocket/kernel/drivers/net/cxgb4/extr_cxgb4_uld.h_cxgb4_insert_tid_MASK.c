
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int tids_in_use; void** tid_tab; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct tid_info *VAR_0, void *VAR_1,
        unsigned int VAR_2)
{
 VAR_0->tid_tab[VAR_2] = VAR_1;
 FUNC_0(&VAR_0->tids_in_use);
}
