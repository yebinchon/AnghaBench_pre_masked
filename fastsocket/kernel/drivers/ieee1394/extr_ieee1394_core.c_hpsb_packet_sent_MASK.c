
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int ack_code; scalar_t__ state; scalar_t__ sendtime; int queue; int expect_response; int refcnt; scalar_t__ no_waiter; } ;
struct hpsb_host {scalar_t__ timeout_interval; int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct hpsb_packet*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (struct hpsb_packet*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct hpsb_host *VAR_5, struct hpsb_packet *VAR_6,
        int VAR_7)
{
 unsigned long VAR_8;

 FUNC_5(&VAR_4, VAR_8);

 VAR_6->ack_code = VAR_7;

 if (VAR_6->no_waiter || VAR_6->state == VAR_1) {

  FUNC_6(&VAR_4, VAR_8);
  FUNC_1(VAR_6);
  return;
 }

 FUNC_0(&VAR_6->refcnt);


 if (VAR_7 != VAR_0 || !VAR_6->expect_response) {
  VAR_6->state = VAR_1;
  FUNC_2(&VAR_6->queue);
  FUNC_6(&VAR_4, VAR_8);
  FUNC_4(VAR_6);
  return;
 }

 VAR_6->state = VAR_2;
 VAR_6->sendtime = VAR_3;

 FUNC_6(&VAR_4, VAR_8);

 FUNC_3(&VAR_5->timeout, VAR_3 + VAR_5->timeout_interval);
}
