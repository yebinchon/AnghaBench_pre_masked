
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_frame {unsigned long* gprs; unsigned long back_chain; } ;
struct pt_regs {unsigned long* gprs; } ;
struct perf_callchain_entry {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct perf_callchain_entry*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct perf_callchain_entry *VAR_1,
       unsigned long VAR_2,
       unsigned long VAR_3, unsigned long VAR_4)
{
 struct stack_frame *VAR_5;
 struct pt_regs *VAR_6;

 while (1) {
  VAR_2 = VAR_2 & VAR_0;
  if (VAR_2 < VAR_3 || VAR_2 > VAR_4 - sizeof(*VAR_5))
   return VAR_2;
  VAR_5 = (struct stack_frame *) VAR_2;
  FUNC_0(VAR_1, VAR_5->gprs[8] & VAR_0);

  while (1) {
   VAR_3 = VAR_2;
   VAR_2 = VAR_5->back_chain & VAR_0;
   if (!VAR_2)
    break;
   if (VAR_2 <= VAR_3 || VAR_2 > VAR_4 - sizeof(*VAR_5))
    return VAR_2;
   VAR_5 = (struct stack_frame *) VAR_2;
   FUNC_0(VAR_1,
          VAR_5->gprs[8] & VAR_0);
  }

  VAR_2 = (unsigned long) (VAR_5 + 1);
  if (VAR_2 <= VAR_3 || VAR_2 > VAR_4 - sizeof(*VAR_6))
   return VAR_2;
  VAR_6 = (struct pt_regs *) VAR_2;
  FUNC_0(VAR_1, VAR_5->gprs[8] & VAR_0);
  VAR_3 = VAR_2;
  VAR_2 = VAR_6->gprs[15];
 }
}
