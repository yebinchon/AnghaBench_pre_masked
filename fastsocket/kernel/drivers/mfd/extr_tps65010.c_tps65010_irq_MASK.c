
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct tps65010 {TYPE_1__ work; int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct tps65010 *VAR_4 = VAR_3;

 FUNC_0(VAR_2);
 FUNC_2(VAR_0, &VAR_4->flags);
 (void) FUNC_1(&VAR_4->work.work);
 return VAR_1;
}
