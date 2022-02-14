
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tifm_dev {int dummy; } ;
struct TYPE_2__ {struct device* parent; int * class; } ;
struct tifm_adapter {unsigned int num_sockets; int lock; TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct tifm_adapter* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

struct tifm_adapter *FUNC_3(unsigned int VAR_2,
     struct device *VAR_3)
{
 struct tifm_adapter *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct tifm_adapter)
       + sizeof(struct tifm_dev*) * VAR_2, VAR_0);
 if (VAR_4) {
  VAR_4->dev.class = &VAR_1;
  VAR_4->dev.parent = VAR_3;
  FUNC_0(&VAR_4->dev);
  FUNC_2(&VAR_4->lock);
  VAR_4->num_sockets = VAR_2;
 }
 return VAR_4;
}
