
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_iso {scalar_t__ type; int flags; int xmit_cycle; int buf_packets; int prebuffer; int start_cycle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct hpsb_iso *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_2->type != VAR_1)
  return -1;

 if (VAR_2->flags & VAR_0)
  return 0;

 if (VAR_3 < -1)
  VAR_3 = -1;
 else if (VAR_3 >= 8000)
  VAR_3 %= 8000;

 VAR_2->xmit_cycle = VAR_3;

 if (VAR_4 < 0)
  VAR_4 = VAR_2->buf_packets - 1;
 else if (VAR_4 == 0)
  VAR_4 = 1;

 if (VAR_4 >= VAR_2->buf_packets)
  VAR_4 = VAR_2->buf_packets - 1;

 VAR_2->prebuffer = VAR_4;



 VAR_2->start_cycle = VAR_3;

 return 0;
}
