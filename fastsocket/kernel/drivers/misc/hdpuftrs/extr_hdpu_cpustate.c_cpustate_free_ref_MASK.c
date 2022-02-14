
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int open_count; scalar_t__ excl; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void)
{

 FUNC_0(&VAR_0.lock);

 VAR_0.excl = 0;
 VAR_0.open_count--;

 FUNC_1(&VAR_0.lock);
 return 0;
}
