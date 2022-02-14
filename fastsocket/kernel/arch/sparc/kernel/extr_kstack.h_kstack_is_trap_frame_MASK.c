
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {size_t cpu; } ;
struct pt_regs {int magic; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static inline bool FUNC_0(struct thread_info *VAR_4, struct pt_regs *VAR_5)
{
 unsigned long VAR_6 = (unsigned long) VAR_4;
 unsigned long VAR_7 = (unsigned long) VAR_5;

 if (VAR_7 >= VAR_6 &&
     VAR_7 <= (VAR_6 + VAR_1 - sizeof(*VAR_5)))
  goto check_magic;

 if (VAR_2[VAR_4->cpu]) {
  VAR_6 = (unsigned long) VAR_2[VAR_4->cpu];
  if (VAR_7 >= VAR_6 &&
      VAR_7 <= (VAR_6 + VAR_1 - sizeof(*VAR_5)))
   goto check_magic;
  VAR_6 = (unsigned long) VAR_3[VAR_4->cpu];
  if (VAR_7 >= VAR_6 &&
      VAR_7 <= (VAR_6 + VAR_1 - sizeof(*VAR_5)))
   goto check_magic;
 }
 return 0;

check_magic:
 if ((VAR_5->magic & ~0x1ff) == VAR_0)
  return 1;
 return 0;

}
