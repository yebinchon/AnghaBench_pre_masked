
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ei_device {int page_lock; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 unsigned long VAR_1;
 struct ei_device *VAR_2 = (struct ei_device*)FUNC_1(VAR_0);

 FUNC_2(&VAR_2->page_lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_2->page_lock, VAR_1);
}
