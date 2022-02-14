
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {TYPE_1__* dvb; } ;
struct av7110 {int dummy; } ;
typedef int fe_sec_tone_mode_t ;
struct TYPE_2__ {struct av7110* priv; } ;


 int VAR_0 ;


 int FUNC_0 (struct av7110*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_1, fe_sec_tone_mode_t VAR_2)
{
 struct av7110* VAR_3 = VAR_1->dvb->priv;

 switch (VAR_2) {
 case 128:
  return FUNC_0(VAR_3, 1);

 case 129:
  return FUNC_0(VAR_3, 0);

 default:
  return -VAR_0;
 }
}
