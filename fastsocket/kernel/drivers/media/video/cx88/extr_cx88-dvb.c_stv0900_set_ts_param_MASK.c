
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct cx8802_dev {scalar_t__ ts_gen_cntrl; } ;
struct TYPE_2__ {struct cx8802_dev* priv; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0,
 int VAR_1)
{
 struct cx8802_dev *VAR_2 = VAR_0->dvb->priv;
 VAR_2->ts_gen_cntrl = 0;

 return 0;
}
