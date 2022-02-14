
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpt {unsigned long address; int * instr; int ref_count; int enabled; } ;


 size_t VAR_0 ;
 struct bpt* FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 struct bpt* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct bpt *FUNC_4(unsigned long VAR_3)
{
 struct bpt *VAR_4;

 VAR_3 &= ~3UL;
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 for (VAR_4 = VAR_2; VAR_4 < &VAR_2[VAR_0]; ++VAR_4) {
  if (!VAR_4->enabled && FUNC_1(&VAR_4->ref_count) == 0) {
   VAR_4->address = VAR_3;
   VAR_4->instr[1] = VAR_1;
   FUNC_3(&VAR_4->instr[1]);
   return VAR_4;
  }
 }

 FUNC_2("Sorry, no free breakpoints.  Please clear one first.\n");
 return ((void*)0);
}
