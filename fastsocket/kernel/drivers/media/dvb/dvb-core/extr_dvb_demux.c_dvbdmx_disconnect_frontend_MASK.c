
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux {int mutex; } ;
struct dmx_demux {int * frontend; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dmx_demux *VAR_0)
{
 struct dvb_demux *VAR_1 = (struct dvb_demux *)VAR_0;

 FUNC_0(&VAR_1->mutex);

 VAR_0->frontend = ((void*)0);
 FUNC_1(&VAR_1->mutex);
 return 0;
}
