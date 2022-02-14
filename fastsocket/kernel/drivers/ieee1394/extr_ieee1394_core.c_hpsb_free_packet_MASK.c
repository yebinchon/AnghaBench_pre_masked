
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int queue; int driver_list; int refcnt; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct hpsb_packet*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct hpsb_packet *VAR_0)
{
 if (VAR_0 && FUNC_1(&VAR_0->refcnt)) {
  FUNC_0(!FUNC_3(&VAR_0->driver_list) ||
         !FUNC_3(&VAR_0->queue));
  FUNC_2(VAR_0);
 }
}
