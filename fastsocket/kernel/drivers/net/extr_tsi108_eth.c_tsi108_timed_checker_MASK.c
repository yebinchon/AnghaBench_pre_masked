
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi108_prv_data {int timer; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct tsi108_prv_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct net_device *VAR_3 = (struct net_device *)VAR_2;
 struct tsi108_prv_data *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 FUNC_0(&VAR_4->timer, VAR_1 + VAR_0);
}
