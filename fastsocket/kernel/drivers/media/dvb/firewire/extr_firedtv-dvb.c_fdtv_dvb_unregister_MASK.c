
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* remove_frontend ) (TYPE_1__*,int *) ;int (* close ) (TYPE_1__*) ;} ;
struct TYPE_5__ {TYPE_1__ dmx; } ;
struct firedtv {int adapter; TYPE_3__ demux; int dmxdev; int frontend; int dvbnet; int fe; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct firedtv*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;

void FUNC_8(struct firedtv *VAR_0)
{
 FUNC_5(VAR_0);
 FUNC_4(&VAR_0->fe);
 FUNC_2(&VAR_0->dvbnet);
 VAR_0->demux.dmx.close(&VAR_0->demux.dmx);
 VAR_0->demux.dmx.remove_frontend(&VAR_0->demux.dmx, &VAR_0->frontend);
 FUNC_1(&VAR_0->dmxdev);
 FUNC_0(&VAR_0->demux);
 FUNC_3(&VAR_0->adapter);
}
