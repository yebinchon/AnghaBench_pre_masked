
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int prev; int next; } ;



__attribute__((used)) static inline void FUNC_0(unsigned long VAR_0, unsigned long VAR_1, int VAR_2,
    struct list_head *VAR_3)
{
 unsigned long *VAR_4;

 VAR_4 = (unsigned long *)&VAR_3->next;
 if (*VAR_4 >= VAR_0 && *VAR_4 < VAR_1)
  *VAR_4 += VAR_2;

 VAR_4 = (unsigned long *)&VAR_3->prev;
 if (*VAR_4 >= VAR_0 && *VAR_4 < VAR_1)
  *VAR_4 += VAR_2;
}
