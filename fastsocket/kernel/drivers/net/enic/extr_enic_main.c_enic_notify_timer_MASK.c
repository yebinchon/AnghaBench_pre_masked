
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {int notify_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct enic*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct enic *VAR_3 = (struct enic *)VAR_2;

 FUNC_0(VAR_3);

 FUNC_1(&VAR_3->notify_timer,
  FUNC_2(VAR_1 + VAR_0));
}
