
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ipz_queue {int toggle_state; } ;


 int FUNC_0 (struct ipz_queue*) ;
 void* FUNC_1 (struct ipz_queue*) ;

__attribute__((used)) static inline void *FUNC_2(struct ipz_queue *VAR_0)
{
 void *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = *(u8 *)VAR_1;
 if ((VAR_2 >> 7) != (VAR_0->toggle_state & 1))
  return ((void*)0);
 FUNC_0(VAR_0);
 return VAR_1;
}
