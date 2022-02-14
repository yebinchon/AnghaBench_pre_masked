
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transaction {scalar_t__ command; } ;
struct acpi_ec {int curr_lock; struct transaction* curr; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct acpi_ec*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct acpi_ec*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct acpi_ec *VAR_4,
     struct transaction *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 0;
 if (VAR_2)
  FUNC_5(VAR_1);

 FUNC_2(&VAR_4->curr_lock, VAR_6);

 VAR_4->curr = VAR_5;
 FUNC_4(VAR_4);
 if (VAR_4->curr->command == VAR_0)
  FUNC_0(VAR_3, &VAR_4->flags);
 FUNC_3(&VAR_4->curr_lock, VAR_6);
 VAR_7 = FUNC_1(VAR_4);
 FUNC_2(&VAR_4->curr_lock, VAR_6);
 VAR_4->curr = ((void*)0);
 FUNC_3(&VAR_4->curr_lock, VAR_6);
 return VAR_7;
}
