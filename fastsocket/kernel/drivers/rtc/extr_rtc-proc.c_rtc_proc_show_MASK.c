
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct rtc_device* private; } ;
struct TYPE_3__ {scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; } ;
struct rtc_wkalrm {scalar_t__ pending; scalar_t__ enabled; TYPE_1__ time; } ;
struct rtc_time {int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; int tm_sec; int tm_min; int tm_hour; } ;
struct TYPE_4__ {int parent; } ;
struct rtc_device {TYPE_2__ dev; struct rtc_class_ops* ops; } ;
struct rtc_class_ops {int (* proc ) (int ,struct seq_file*) ;} ;


 int FUNC_0 (struct rtc_device*,struct rtc_wkalrm*) ;
 int FUNC_1 (struct rtc_device*,struct rtc_time*) ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (int ,struct seq_file*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct rtc_device *VAR_3 = VAR_0->private;
 const struct rtc_class_ops *VAR_4 = VAR_3->ops;
 struct rtc_wkalrm VAR_5;
 struct rtc_time VAR_6;

 VAR_2 = FUNC_1(VAR_3, &VAR_6);
 if (VAR_2 == 0) {
  FUNC_2(VAR_0,
   "rtc_time\t: %02d:%02d:%02d\n"
   "rtc_date\t: %04d-%02d-%02d\n",
   VAR_6.tm_hour, VAR_6.tm_min, VAR_6.tm_sec,
   VAR_6.tm_year + 1900, VAR_6.tm_mon + 1, VAR_6.tm_mday);
 }

 VAR_2 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_2 == 0) {
  FUNC_2(VAR_0, "alrm_time\t: ");
  if ((unsigned int)VAR_5.time.tm_hour <= 24)
   FUNC_2(VAR_0, "%02d:", VAR_5.time.tm_hour);
  else
   FUNC_2(VAR_0, "**:");
  if ((unsigned int)VAR_5.time.tm_min <= 59)
   FUNC_2(VAR_0, "%02d:", VAR_5.time.tm_min);
  else
   FUNC_2(VAR_0, "**:");
  if ((unsigned int)VAR_5.time.tm_sec <= 59)
   FUNC_2(VAR_0, "%02d\n", VAR_5.time.tm_sec);
  else
   FUNC_2(VAR_0, "**\n");

  FUNC_2(VAR_0, "alrm_date\t: ");
  if ((unsigned int)VAR_5.time.tm_year <= 200)
   FUNC_2(VAR_0, "%04d-", VAR_5.time.tm_year + 1900);
  else
   FUNC_2(VAR_0, "****-");
  if ((unsigned int)VAR_5.time.tm_mon <= 11)
   FUNC_2(VAR_0, "%02d-", VAR_5.time.tm_mon + 1);
  else
   FUNC_2(VAR_0, "**-");
  if (VAR_5.time.tm_mday && (unsigned int)VAR_5.time.tm_mday <= 31)
   FUNC_2(VAR_0, "%02d\n", VAR_5.time.tm_mday);
  else
   FUNC_2(VAR_0, "**\n");
  FUNC_2(VAR_0, "alarm_IRQ\t: %s\n",
    VAR_5.enabled ? "yes" : "no");
  FUNC_2(VAR_0, "alrm_pending\t: %s\n",
    VAR_5.pending ? "yes" : "no");
 }

 FUNC_2(VAR_0, "24hr\t\t: yes\n");

 if (VAR_4->proc)
  VAR_4->proc(VAR_3->dev.parent, VAR_0);

 return 0;
}
