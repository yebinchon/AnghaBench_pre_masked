
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
struct lirc_codec {TYPE_2__* drv; } ;
struct TYPE_4__ {int rbuf; int minor; } ;
struct TYPE_3__ {struct lirc_codec lirc; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rc_dev *VAR_0)
{
 struct lirc_codec *VAR_1 = &VAR_0->raw->lirc;

 FUNC_2(VAR_1->drv->minor);
 FUNC_1(VAR_1->drv->rbuf);
 FUNC_0(VAR_1->drv);

 return 0;
}
