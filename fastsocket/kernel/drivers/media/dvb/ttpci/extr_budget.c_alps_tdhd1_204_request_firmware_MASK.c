
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct firmware {int dummy; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct budget {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* pci; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ priv; } ;


 int FUNC_0 (struct firmware const**,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, const struct firmware **VAR_1, char *VAR_2)
{
 struct budget *VAR_3 = (struct budget *)VAR_0->dvb->priv;

 return FUNC_0(VAR_1, VAR_2, &VAR_3->dev->pci->dev);
}
