
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stack_trace {unsigned long* entries; scalar_t__ nr_entries; scalar_t__ max_entries; int skip; } ;
struct stack_frame {unsigned long* gprs; unsigned long back_chain; } ;
struct TYPE_2__ {unsigned long addr; } ;
struct pt_regs {unsigned long* gprs; TYPE_1__ psw; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct stack_trace *VAR_1,
     unsigned long VAR_2,
     unsigned long VAR_3,
     unsigned long VAR_4,
     int VAR_5)
{
 struct stack_frame *VAR_6;
 struct pt_regs *VAR_7;
 unsigned long VAR_8;

 while(1) {
  VAR_2 &= VAR_0;
  if (VAR_2 < VAR_3 || VAR_2 > VAR_4)
   return VAR_2;
  VAR_6 = (struct stack_frame *)VAR_2;
  while(1) {
   VAR_8 = VAR_6->gprs[8] & VAR_0;
   if (!VAR_1->skip)
    VAR_1->entries[VAR_1->nr_entries++] = VAR_8;
   else
    VAR_1->skip--;
   if (VAR_1->nr_entries >= VAR_1->max_entries)
    return VAR_2;
   VAR_3 = VAR_2;
   VAR_2 = VAR_6->back_chain & VAR_0;
   if (!VAR_2)
    break;
   if (VAR_2 <= VAR_3 || VAR_2 > VAR_4 - sizeof(*VAR_6))
    return VAR_2;
   VAR_6 = (struct stack_frame *)VAR_2;
  }

  VAR_2 = (unsigned long)(VAR_6 + 1);
  if (VAR_2 <= VAR_3 || VAR_2 > VAR_4 - sizeof(*VAR_7))
   return VAR_2;
  VAR_7 = (struct pt_regs *)VAR_2;
  VAR_8 = VAR_7->psw.addr & VAR_0;
  if (VAR_5 || !FUNC_0(VAR_8)) {
   if (!VAR_1->skip)
    VAR_1->entries[VAR_1->nr_entries++] = VAR_8;
   else
    VAR_1->skip--;
  }
  if (VAR_1->nr_entries >= VAR_1->max_entries)
   return VAR_2;
  VAR_3 = VAR_2;
  VAR_2 = VAR_7->gprs[15];
 }
}
