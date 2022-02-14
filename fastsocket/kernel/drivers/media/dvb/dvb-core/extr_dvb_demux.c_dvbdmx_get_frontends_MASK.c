
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dvb_demux {struct list_head frontend_list; } ;
struct dmx_demux {int dummy; } ;


 scalar_t__ FUNC_0 (struct list_head*) ;

__attribute__((used)) static struct list_head *FUNC_1(struct dmx_demux *VAR_0)
{
 struct dvb_demux *VAR_1 = (struct dvb_demux *)VAR_0;

 if (FUNC_0(&VAR_1->frontend_list))
  return ((void*)0);

 return &VAR_1->frontend_list;
}
