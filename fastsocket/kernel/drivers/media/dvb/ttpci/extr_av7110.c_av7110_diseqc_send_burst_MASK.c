
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct av7110 {int dummy; } ;
typedef int fe_sec_mini_cmd_t ;
struct TYPE_2__ {struct av7110* priv; } ;


 int FUNC_0 (struct av7110*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0,
        fe_sec_mini_cmd_t VAR_1)
{
 struct av7110* VAR_2 = VAR_0->dvb->priv;

 return FUNC_0(VAR_2, 0, ((void*)0), VAR_1);
}
