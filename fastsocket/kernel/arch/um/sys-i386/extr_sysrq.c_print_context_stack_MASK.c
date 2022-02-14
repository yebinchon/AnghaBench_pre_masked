
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct thread_info*,unsigned long*) ;

__attribute__((used)) static inline unsigned long FUNC_4(struct thread_info *VAR_0,
    unsigned long *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 while (FUNC_3(VAR_0, VAR_1)) {
  VAR_3 = *VAR_1;
  if (FUNC_0(VAR_3)) {
   FUNC_2("%08lx:  [<%08lx>]", (unsigned long) VAR_1, VAR_3);
   FUNC_1(" %s", VAR_3);
   FUNC_2("\n");
  }
  VAR_1++;
 }

 return VAR_2;
}
