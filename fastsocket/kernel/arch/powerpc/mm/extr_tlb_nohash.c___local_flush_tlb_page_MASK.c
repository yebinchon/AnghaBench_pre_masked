
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int id; } ;
struct mm_struct {TYPE_1__ context; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct mm_struct *VAR_1, unsigned long VAR_2,
       int VAR_3, int VAR_4)
{
 unsigned int VAR_5;

 FUNC_1();
 VAR_5 = VAR_1 ? VAR_1->context.id : 0;
 if (VAR_5 != VAR_0)
  FUNC_0(VAR_2, VAR_5, VAR_3, VAR_4);
 FUNC_2();
}
