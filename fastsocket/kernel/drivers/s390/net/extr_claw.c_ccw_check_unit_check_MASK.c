
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct device {int dummy; } ;
struct chbk {TYPE_1__* cdev; struct net_device* ndev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct chbk * VAR_1, unsigned char VAR_2 )
{
 struct net_device *VAR_3 = VAR_1->ndev;
 struct device *VAR_4 = &VAR_1->cdev->dev;

 FUNC_0(4, VAR_0, "unitchek");
 FUNC_1(VAR_4, "The communication peer of %s disconnected\n",
  VAR_3->name);

 if (VAR_2 & 0x40) {
  if (VAR_2 & 0x01) {
   FUNC_1(VAR_4, "The remote channel adapter for"
    " %s has been reset\n",
    VAR_3->name);
  }
 } else if (VAR_2 & 0x20) {
  if (VAR_2 & 0x04) {
   FUNC_1(VAR_4, "A data streaming timeout occurred"
    " for %s\n",
    VAR_3->name);
  } else if (VAR_2 & 0x10) {
   FUNC_1(VAR_4, "The remote channel adapter for %s"
    " is faulty\n",
    VAR_3->name);
  } else {
   FUNC_1(VAR_4, "A data transfer parity error occurred"
    " for %s\n",
    VAR_3->name);
  }
 } else if (VAR_2 & 0x10) {
  FUNC_1(VAR_4, "A read data parity error occurred"
   " for %s\n",
   VAR_3->name);
 }

}
