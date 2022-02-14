
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux {int mutex; } ;
struct dmx_frontend {int dummy; } ;
struct dmx_demux {struct dmx_frontend* frontend; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dmx_demux *VAR_1,
       struct dmx_frontend *VAR_2)
{
 struct dvb_demux *VAR_3 = (struct dvb_demux *)VAR_1;

 if (VAR_1->frontend)
  return -VAR_0;

 FUNC_0(&VAR_3->mutex);

 VAR_1->frontend = VAR_2;
 FUNC_1(&VAR_3->mutex);
 return 0;
}
