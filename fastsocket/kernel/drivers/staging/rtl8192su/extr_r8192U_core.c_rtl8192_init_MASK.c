
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; int function; } ;
struct r8192_priv {TYPE_2__ watch_dog_timer; TYPE_1__* ops; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* rtl819x_read_eeprom_info ) (struct net_device*) ;} ;


 int FUNC_0 (struct net_device*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct r8192_priv*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_0 ;

short FUNC_10(struct net_device *VAR_1)
{

 struct r8192_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_8(VAR_1);
 FUNC_6(VAR_2);
 FUNC_7(VAR_1);
 FUNC_5(VAR_1);
 VAR_2->ops->rtl819x_read_eeprom_info(VAR_1);
 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 FUNC_3(&VAR_2->watch_dog_timer);
 VAR_2->watch_dog_timer.data = (unsigned long)VAR_1;
 VAR_2->watch_dog_timer.function = VAR_0;





 return 0;
}
