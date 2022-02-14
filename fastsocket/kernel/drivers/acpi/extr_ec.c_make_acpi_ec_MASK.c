
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int flags; int curr_lock; int list; int wait; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct acpi_ec* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct acpi_ec *FUNC_5(void)
{
 struct acpi_ec *VAR_2 = FUNC_2(sizeof(struct acpi_ec), VAR_1);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->flags = 1 << VAR_0;
 FUNC_3(&VAR_2->lock);
 FUNC_1(&VAR_2->wait);
 FUNC_0(&VAR_2->list);
 FUNC_4(&VAR_2->curr_lock);
 return VAR_2;
}
