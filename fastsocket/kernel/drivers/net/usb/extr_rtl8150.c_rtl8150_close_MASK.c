
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ rtl8150_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 rtl8150_t *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = 0;

 FUNC_2(VAR_1);
 if (!FUNC_3(VAR_0, &VAR_2->flags))
  FUNC_0(VAR_2);
 FUNC_4(VAR_2);

 return VAR_3;
}
