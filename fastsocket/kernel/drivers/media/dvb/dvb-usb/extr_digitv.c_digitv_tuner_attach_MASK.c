
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_4__* fe; TYPE_1__* dev; } ;
struct digitv_state {scalar_t__ is_nxt6000; } ;
struct TYPE_6__ {int set_params; } ;
struct TYPE_7__ {TYPE_2__ tuner_ops; } ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {struct digitv_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_4__*,int,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_4)
{
 struct digitv_state *VAR_5 = VAR_4->dev->priv;

 if (!FUNC_0(VAR_3, VAR_4->fe, 0x60, ((void*)0), VAR_0))
  return -VAR_1;

 if (VAR_5->is_nxt6000)
  VAR_4->fe->ops.tuner_ops.set_params = VAR_2;

 return 0;
}
