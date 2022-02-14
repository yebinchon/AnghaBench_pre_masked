
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kdebug_flags; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 () ;

void
FUNC_2(void)
{
 FUNC_1();

 if (VAR_1.kdebug_flags & VAR_0) {
  return;
 }

 VAR_3 = FUNC_0(0, &VAR_4, &VAR_2);

 if (VAR_3) {
  VAR_1.kdebug_flags |= VAR_0;
 }
}
