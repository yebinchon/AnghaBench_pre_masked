
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int minor; } ;
struct irctl {TYPE_1__ d; int irctl_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct irctl *VAR_1)
{
 FUNC_0(&VAR_1->irctl_lock);
 VAR_1->d.minor = VAR_0;
}
