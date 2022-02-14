
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sect {scalar_t__ len; scalar_t__ vaddr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct sect *VAR_1, struct sect *VAR_2, int VAR_3)
{
 if (!VAR_1->len)
  *VAR_1 = *VAR_2;
 else if (VAR_2->len) {
  if (VAR_1->vaddr + VAR_1->len != VAR_2->vaddr) {
   if (VAR_3)
    VAR_1->len = VAR_2->vaddr - VAR_1->vaddr;
   else {
    FUNC_1(VAR_0,
     "Non-contiguous data can't be converted.\n");
    FUNC_0(1);
   }
  }
  VAR_1->len += VAR_2->len;
 }
}
