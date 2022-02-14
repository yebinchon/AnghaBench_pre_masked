
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {TYPE_1__* remote; } ;
struct rc_dev {struct saa7134_dev* priv; } ;
struct TYPE_2__ {int users; } ;


 int FUNC_0 (struct saa7134_dev*) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_0)
{
 struct saa7134_dev *VAR_1 = VAR_0->priv;

 VAR_1->remote->users++;
 return FUNC_0(VAR_1);
}
