
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {int type; int pid; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct dvb_demux_feed*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_demux_feed *VAR_0)
{
 FUNC_0("stop pid: 0x%04x, feedtype: %d\n", VAR_0->pid, VAR_0->type);
 return FUNC_1(VAR_0,0);
}
