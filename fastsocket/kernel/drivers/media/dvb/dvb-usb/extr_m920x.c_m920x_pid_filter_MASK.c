
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct m920x_state {int ** filters; } ;
struct dvb_usb_adapter {size_t id; TYPE_1__* dev; } ;
struct TYPE_2__ {struct m920x_state* priv; } ;


 int FUNC_0 (struct dvb_usb_adapter*) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_0, int VAR_1, u16 VAR_2, int VAR_3)
{
 struct m920x_state *VAR_4 = VAR_0->dev->priv;

 VAR_4->filters[VAR_0->id][VAR_1] = VAR_3 ? VAR_2 : 0;

 return FUNC_0(VAR_0);
}
