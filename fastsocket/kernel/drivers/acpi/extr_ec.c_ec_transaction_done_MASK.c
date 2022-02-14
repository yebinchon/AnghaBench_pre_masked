
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_ec {int curr_lock; TYPE_1__* curr; } ;
struct TYPE_2__ {scalar_t__ done; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct acpi_ec *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2 = 0;
 FUNC_0(&VAR_0->curr_lock, VAR_1);
 if (!VAR_0->curr || VAR_0->curr->done)
  VAR_2 = 1;
 FUNC_1(&VAR_0->curr_lock, VAR_1);
 return VAR_2;
}
