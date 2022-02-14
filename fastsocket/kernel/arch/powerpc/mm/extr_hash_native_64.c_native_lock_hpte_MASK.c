
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {unsigned long v; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned long*) ;
 scalar_t__ FUNC_2 (int ,unsigned long*) ;

__attribute__((used)) static inline void FUNC_3(struct hash_pte *VAR_1)
{
 unsigned long *VAR_2 = &VAR_1->v;

 while (1) {
  if (!FUNC_1(VAR_0, VAR_2))
   break;
  while(FUNC_2(VAR_0, VAR_2))
   FUNC_0();
 }
}
