
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct av7110 {int (* fe_dishnetwork_send_legacy_command ) (struct dvb_frontend*,unsigned long) ;} ;
struct TYPE_2__ {struct av7110* priv; } ;


 int FUNC_0 (struct av7110*,int ) ;
 int FUNC_1 (struct dvb_frontend*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, unsigned long VAR_1)
{
 struct av7110* VAR_2 = VAR_0->dvb->priv;

 int VAR_3 = FUNC_0(VAR_2, 0);
 if (!VAR_3)
  VAR_3 = VAR_2->fe_dishnetwork_send_legacy_command(VAR_0, VAR_1);
 return VAR_3;
}
