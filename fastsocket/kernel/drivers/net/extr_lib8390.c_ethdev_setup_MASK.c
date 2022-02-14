
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ei_device {int page_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct ei_device *VAR_3 = (struct ei_device *) FUNC_1(VAR_2);
 if (VAR_0 > 1)
  FUNC_2(VAR_1);

 FUNC_0(VAR_2);

 FUNC_3(&VAR_3->page_lock);
}
