
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_request {int type; } ;
struct ptp_clock_info {int (* enable ) (struct ptp_clock_info*,struct ptp_clock_request*,int) ;} ;
struct ptp_clock {struct ptp_clock_info* info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct ptp_clock* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (struct ptp_clock_info*,struct ptp_clock_request*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 struct ptp_clock *VAR_8 = FUNC_1(VAR_4);
 struct ptp_clock_info *VAR_9 = VAR_8->info;
 struct ptp_clock_request VAR_10 = { .type = VAR_3 };
 int VAR_11, VAR_12;
 int VAR_13 = -VAR_1;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_11 = FUNC_2(VAR_6, "%d", &VAR_12);
 if (VAR_11 != 1)
  goto out;

 VAR_13 = VAR_9->enable(VAR_9, &VAR_10, VAR_12 ? 1 : 0);
 if (VAR_13)
  goto out;

 return VAR_7;
out:
 return VAR_13;
}
