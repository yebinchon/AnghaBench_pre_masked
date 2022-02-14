
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux {int feed; int filter; int cnt_storage; } ;


 int FUNC_0 (struct dvb_demux*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct dvb_demux *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->cnt_storage);
 FUNC_1(VAR_0->filter);
 FUNC_1(VAR_0->feed);
}
