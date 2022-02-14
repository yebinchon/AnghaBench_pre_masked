
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipz_queue {scalar_t__ current_q_offset; } ;


 void* FUNC_0 (struct ipz_queue*) ;

__attribute__((used)) static inline void *FUNC_1(struct ipz_queue *VAR_0)
{
 VAR_0->current_q_offset = 0;
 return FUNC_0(VAR_0);
}
