
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ index; } ;
struct ptp_clock_request {TYPE_1__ extts; int type; } ;
struct ptp_clock_info {scalar_t__ n_ext_ts; int (* enable ) (struct ptp_clock_info*,struct ptp_clock_request*,int) ;} ;
struct ptp_clock {struct ptp_clock_info* info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ptp_clock* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,scalar_t__*,int*) ;
 int FUNC_2 (struct ptp_clock_info*,struct ptp_clock_request*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct ptp_clock *VAR_6 = FUNC_0(VAR_2);
 struct ptp_clock_info *VAR_7 = VAR_6->info;
 struct ptp_clock_request VAR_8 = { .type = VAR_1 };
 int VAR_9, VAR_10;
 int VAR_11 = -VAR_0;

 VAR_9 = FUNC_1(VAR_4, "%u %d", &VAR_8.extts.index, &VAR_10);
 if (VAR_9 != 2)
  goto out;
 if (VAR_8.extts.index >= VAR_7->n_ext_ts)
  goto out;

 VAR_11 = VAR_7->enable(VAR_7, &VAR_8, VAR_10 ? 1 : 0);
 if (VAR_11)
  goto out;

 return VAR_5;
out:
 return VAR_11;
}
