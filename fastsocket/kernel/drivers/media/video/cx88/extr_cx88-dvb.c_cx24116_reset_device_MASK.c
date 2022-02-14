
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct cx88_core {int dummy; } ;
struct cx8802_dev {struct cx88_core* core; } ;
struct TYPE_2__ {struct cx8802_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct cx8802_dev *VAR_2 = VAR_1->dvb->priv;
 struct cx88_core *VAR_3 = VAR_2->core;



 FUNC_0(VAR_0, 0);
 FUNC_1(10);

 FUNC_0(VAR_0, 1);
 FUNC_1(10);

 return 0;
}
