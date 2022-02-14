
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dvb_usb_adapter {int fe; TYPE_1__* dev; } ;
struct dib0700_state {scalar_t__ is_dib7000pc; } ;
struct TYPE_2__ {struct dib0700_state* priv; } ;


 int FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_0, int VAR_1,
  u16 VAR_2, int VAR_3)
{
 struct dib0700_state *VAR_4 = VAR_0->dev->priv;
 if (VAR_4->is_dib7000pc)
  return FUNC_1(VAR_0->fe, VAR_1, VAR_2, VAR_3);
 return FUNC_0(VAR_0->fe, VAR_1, VAR_2, VAR_3);
}
