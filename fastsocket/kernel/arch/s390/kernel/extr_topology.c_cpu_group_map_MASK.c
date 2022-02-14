
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mask_info {struct mask_info* next; int mask; } ;
typedef int cpumask_t ;


 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static cpumask_t FUNC_4(struct mask_info *VAR_2, unsigned int VAR_3)
{
 cpumask_t VAR_4;

 FUNC_2(VAR_4);
 if (!VAR_1 || !VAR_0)
  return FUNC_1(VAR_3);
 while (VAR_2) {
  if (FUNC_0(VAR_3, VAR_2->mask)) {
   VAR_4 = VAR_2->mask;
   break;
  }
  VAR_2 = VAR_2->next;
 }
 if (FUNC_3(VAR_4))
  VAR_4 = FUNC_1(VAR_3);
 return VAR_4;
}
