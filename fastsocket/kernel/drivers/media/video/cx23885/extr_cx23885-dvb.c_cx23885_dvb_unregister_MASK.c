
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ frontend; } ;
struct videobuf_dvb_frontend {TYPE_1__ dvb; } ;
struct cx23885_tsport {TYPE_2__* dev; int frontends; } ;
struct TYPE_4__ {int board; } ;



 int FUNC_0 (struct cx23885_tsport*) ;
 struct videobuf_dvb_frontend* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct cx23885_tsport *VAR_0)
{
 struct videobuf_dvb_frontend *VAR_1;
 VAR_1 = FUNC_1(&VAR_0->frontends, 1);
 if (VAR_1->dvb.frontend)
  FUNC_2(&VAR_0->frontends);

 switch (VAR_0->dev->board) {
 case 128:
  FUNC_0(VAR_0);
  break;
 }

 return 0;
}
