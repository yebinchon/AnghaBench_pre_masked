
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; int * cls; } ;
struct mpic {struct mpic* next; TYPE_1__ sysdev; } ;


 int VAR_0 ;
 struct mpic* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct mpic *VAR_2 = VAR_1;
 int VAR_3, VAR_4 = 0;

 VAR_3 = FUNC_0(&VAR_0);

 while (VAR_2 && !VAR_3) {
  VAR_2->sysdev.cls = &VAR_0;
  VAR_2->sysdev.id = VAR_4++;
  VAR_3 = FUNC_1(&VAR_2->sysdev);
  VAR_2 = VAR_2->next;
 }
 return VAR_3;
}
