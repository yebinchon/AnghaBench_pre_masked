
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_3,
    unsigned long VAR_4, void *VAR_5)
{
 if (VAR_4 == VAR_1) {
  FUNC_0("Reboot: freeing all eHEA resources");
  FUNC_1(&VAR_2);
 }
 return VAR_0;
}
