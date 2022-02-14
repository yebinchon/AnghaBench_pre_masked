
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_info {scalar_t__ pps; scalar_t__ n_per_out; scalar_t__ n_ext_ts; } ;
struct ptp_clock {struct ptp_clock_info* info; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int *) ;

int FUNC_1(struct ptp_clock *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 struct ptp_clock_info *VAR_6 = VAR_4->info;

 if (VAR_6->n_ext_ts) {
  FUNC_0(VAR_5, &VAR_0);
  FUNC_0(VAR_5, &VAR_1);
 }
 if (VAR_6->n_per_out)
  FUNC_0(VAR_5, &VAR_2);

 if (VAR_6->pps)
  FUNC_0(VAR_5, &VAR_3);

 return 0;
}
