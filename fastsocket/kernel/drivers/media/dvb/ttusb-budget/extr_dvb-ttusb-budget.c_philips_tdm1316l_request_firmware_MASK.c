
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttusb {TYPE_2__* dev; } ;
struct firmware {int dummy; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int FUNC_0 (struct firmware const**,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, const struct firmware **VAR_1, char* VAR_2)
{
 struct ttusb* VAR_3 = (struct ttusb*) VAR_0->dvb->priv;

 return FUNC_0(VAR_1, VAR_2, &VAR_3->dev->dev);
}
