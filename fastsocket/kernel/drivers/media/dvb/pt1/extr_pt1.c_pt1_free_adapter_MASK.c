
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* close ) (TYPE_1__*) ;} ;
struct TYPE_4__ {TYPE_1__ dmx; } ;
struct pt1_adapter {scalar_t__ buf; int adap; TYPE_2__ demux; int dmxdev; int net; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct pt1_adapter*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct pt1_adapter *VAR_0)
{
 FUNC_2(&VAR_0->net);
 VAR_0->demux.dmx.close(&VAR_0->demux.dmx);
 FUNC_1(&VAR_0->dmxdev);
 FUNC_0(&VAR_0->demux);
 FUNC_3(&VAR_0->adap);
 FUNC_4((unsigned long)VAR_0->buf);
 FUNC_5(VAR_0);
}
