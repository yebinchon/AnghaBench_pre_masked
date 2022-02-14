
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;
typedef enum raw_event_type { ____Placeholder_raw_event_type } raw_event_type ;
struct TYPE_6__ {int pulse; scalar_t__ duration; } ;
struct TYPE_5__ {int last_type; int last_event; } ;


 int FUNC_0 (TYPE_2__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (struct rc_dev*) ;
 int FUNC_2 (struct rc_dev*,TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct rc_dev *VAR_6, enum raw_event_type VAR_7)
{
 ktime_t VAR_8;
 s64 VAR_9;
 FUNC_0(VAR_5);
 int VAR_10 = 0;

 if (!VAR_6->raw)
  return -VAR_0;

 VAR_8 = FUNC_3();
 VAR_9 = FUNC_5(FUNC_4(VAR_8, VAR_6->raw->last_event));





 if (VAR_9 > VAR_1 || !VAR_6->raw->last_type)
  VAR_7 |= VAR_4;
 else
  VAR_5.duration = VAR_9;

 if (VAR_7 & VAR_4)
  FUNC_1(VAR_6);
 else if (VAR_6->raw->last_type & VAR_3) {
  VAR_5.pulse = 0;
  VAR_10 = FUNC_2(VAR_6, &VAR_5);
 } else if (VAR_6->raw->last_type & VAR_2) {
  VAR_5.pulse = 1;
  VAR_10 = FUNC_2(VAR_6, &VAR_5);
 } else
  return 0;

 VAR_6->raw->last_event = VAR_8;
 VAR_6->raw->last_type = VAR_7;
 return VAR_10;
}
