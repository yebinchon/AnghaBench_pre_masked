
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {int skip; int entries; int max_entries; scalar_t__ nr_entries; } ;
struct block_lock {scalar_t__* holders; struct stack_trace* traces; } ;
typedef int stack_entries ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct stack_trace*,int) ;
 int FUNC_2 (struct stack_trace*) ;

__attribute__((used)) static int FUNC_3(struct block_lock *VAR_4)
{
 unsigned VAR_5;





 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4->holders[VAR_5] == VAR_3) {
   FUNC_0("recursive lock detected in metadata");
   return -VAR_0;
  }
 }

 return 0;
}
