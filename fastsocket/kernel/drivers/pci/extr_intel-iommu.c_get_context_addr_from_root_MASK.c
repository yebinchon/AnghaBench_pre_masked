
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct root_entry {int val; } ;
struct context_entry {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct root_entry*) ;

__attribute__((used)) static inline struct context_entry *
FUNC_2(struct root_entry *VAR_1)
{
 return (struct context_entry *)
  (FUNC_1(VAR_1)?FUNC_0(
  VAR_1->val & VAR_0) :
  ((void*)0));
}
