
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {char* name; } ;
struct ifreq {int ifr_name; } ;
typedef int pc300dev_t ;
struct TYPE_2__ {scalar_t__ priv; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,char*) ;

int FUNC_7(struct net_device *VAR_0)
{
 pc300dev_t *VAR_1 = (pc300dev_t *) FUNC_1(VAR_0)->priv;
 struct ifreq VAR_2;
 int VAR_3;





 VAR_3 = FUNC_3(VAR_0);

 if (VAR_3)
  return VAR_3;

 FUNC_6(VAR_2.ifr_name, "%s", VAR_0->name);
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  goto err_out;

 FUNC_4(VAR_0);
 return 0;

err_out:
 FUNC_2(VAR_0);
 return VAR_3;
}
