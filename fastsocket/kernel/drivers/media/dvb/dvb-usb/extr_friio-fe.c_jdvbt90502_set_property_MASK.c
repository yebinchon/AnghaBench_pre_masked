
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct dtv_property {int cmd; TYPE_1__ u; } ;






 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_2,
       struct dtv_property *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->cmd) {
 case 130:
  if (VAR_3->u.data != VAR_1)
   VAR_4 = -VAR_0;
  break;
 case 131:
 case 128:
 case 129:
  break;
 default:
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
