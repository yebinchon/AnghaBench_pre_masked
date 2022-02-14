
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {int dev; TYPE_1__* protocol; } ;
struct TYPE_2__ {scalar_t__ (* set ) (struct pnp_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pnp_dev*,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct pnp_dev*) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (struct pnp_dev*) ;

int FUNC_6(struct pnp_dev *VAR_2)
{
 if (!FUNC_3(VAR_2)) {
  FUNC_4(&VAR_2->dev, "activation not supported\n");
  return -VAR_0;
 }

 FUNC_0(VAR_2, "pnp_start_dev");
 if (VAR_2->protocol->set(VAR_2) < 0) {
  FUNC_1(&VAR_2->dev, "activation failed\n");
  return -VAR_1;
 }

 FUNC_2(&VAR_2->dev, "activated\n");
 return 0;
}
