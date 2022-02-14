
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {unsigned long v; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static inline void FUNC_1(struct hash_pte *VAR_1)
{
 unsigned long *VAR_2 = &VAR_1->v;

 asm volatile("lwsync":::"memory");
 FUNC_0(VAR_0, VAR_2);
}
