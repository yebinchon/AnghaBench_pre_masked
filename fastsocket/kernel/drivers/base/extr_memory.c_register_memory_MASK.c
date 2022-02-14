
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; int * cls; } ;
struct memory_block {TYPE_1__ sysdev; int start_phys_index; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static
int FUNC_1(struct memory_block *VAR_1)
{
 int VAR_2;

 VAR_1->sysdev.cls = &VAR_0;
 VAR_1->sysdev.id = VAR_1->start_phys_index;

 VAR_2 = FUNC_0(&VAR_1->sysdev);
 return VAR_2;
}
