
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timestamp_event_queue {size_t head; int lock; struct ptp_extts_event* buf; } ;
struct TYPE_2__ {int nsec; int sec; } ;
struct ptp_extts_event {int index; TYPE_1__ t; } ;
struct ptp_clock {int tsevq_mux; struct timestamp_event_queue tsevq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ptp_clock* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ptp_extts_event*,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (struct timestamp_event_queue*) ;
 int FUNC_5 (char*,int ,char*,int,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
          struct device_attribute *VAR_4, char *VAR_5)
{
 struct ptp_clock *VAR_6 = FUNC_0(VAR_3);
 struct timestamp_event_queue *VAR_7 = &VAR_6->tsevq;
 struct ptp_extts_event VAR_8;
 unsigned long VAR_9;
 size_t VAR_10;
 int VAR_11 = 0;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));

 if (FUNC_2(&VAR_6->tsevq_mux))
  return -VAR_0;

 FUNC_6(&VAR_7->lock, VAR_9);
 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10) {
  VAR_8 = VAR_7->buf[VAR_7->head];
  VAR_7->head = (VAR_7->head + 1) % VAR_2;
 }
 FUNC_7(&VAR_7->lock, VAR_9);

 if (!VAR_10)
  goto out;

 VAR_11 = FUNC_5(VAR_5, VAR_1, "%u %lld %u\n",
         VAR_8.index, VAR_8.t.sec, VAR_8.t.nsec);
out:
 FUNC_3(&VAR_6->tsevq_mux);
 return VAR_11;
}
