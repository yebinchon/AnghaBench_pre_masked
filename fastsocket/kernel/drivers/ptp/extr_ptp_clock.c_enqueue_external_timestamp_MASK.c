
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timestamp_event_queue {size_t tail; int head; int lock; struct ptp_extts_event* buf; } ;
struct TYPE_2__ {int nsec; int sec; } ;
struct ptp_extts_event {TYPE_1__ t; int index; } ;
struct ptp_clock_event {int index; int timestamp; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (struct timestamp_event_queue*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct timestamp_event_queue *VAR_1,
           struct ptp_clock_event *VAR_2)
{
 struct ptp_extts_event *VAR_3;
 unsigned long VAR_4;
 s64 VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_2->timestamp, 1000000000, &VAR_6);

 FUNC_2(&VAR_1->lock, VAR_4);

 VAR_3 = &VAR_1->buf[VAR_1->tail];
 VAR_3->index = VAR_2->index;
 VAR_3->t.sec = VAR_5;
 VAR_3->t.nsec = VAR_6;

 if (!FUNC_1(VAR_1))
  VAR_1->head = (VAR_1->head + 1) % VAR_0;

 VAR_1->tail = (VAR_1->tail + 1) % VAR_0;

 FUNC_3(&VAR_1->lock, VAR_4);
}
