
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct ioc3_private {TYPE_1__ ioc3_timer; int mii; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ioc3_private*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct ioc3_private *VAR_3 = (struct ioc3_private *) VAR_2;


 FUNC_2(&VAR_3->mii, 1, 0);
 FUNC_1(VAR_3);

 VAR_3->ioc3_timer.expires = VAR_1 + ((12 * VAR_0)/10);
 FUNC_0(&VAR_3->ioc3_timer);
}
