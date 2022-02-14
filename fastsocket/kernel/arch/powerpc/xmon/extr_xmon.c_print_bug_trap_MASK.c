
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int msr; unsigned long nip; } ;
struct bug_entry {char* file; int line; scalar_t__ bug_addr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct bug_entry* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct bug_entry const*) ;
 int FUNC_2 (char*,void*,...) ;

__attribute__((used)) static void FUNC_3(struct pt_regs *VAR_2)
{
}
