
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdoops_context {scalar_t__ mtd_index; int * mtd; } ;
struct mtd_info {scalar_t__ index; } ;


 int FUNC_0 () ;
 struct mtdoops_context VAR_0 ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_1)
{
 struct mtdoops_context *VAR_2 = &VAR_0;

 if ((VAR_1->index != VAR_2->mtd_index) || VAR_2->mtd_index < 0)
  return;

 VAR_2->mtd = ((void*)0);
 FUNC_0();
}
