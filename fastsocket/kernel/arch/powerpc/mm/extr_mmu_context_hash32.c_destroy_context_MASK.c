
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; } ;
struct mm_struct {TYPE_1__ context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct mm_struct *VAR_2)
{
 FUNC_1();
 if (VAR_2->context.id != VAR_0) {
  FUNC_0(VAR_2->context.id, VAR_1);
  VAR_2->context.id = VAR_0;
 }
 FUNC_2();
}
