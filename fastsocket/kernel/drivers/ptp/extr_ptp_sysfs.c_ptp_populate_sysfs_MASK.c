
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_info {scalar_t__ n_ext_ts; scalar_t__ n_per_out; scalar_t__ pps; } ;
struct ptp_clock {struct ptp_clock_info* info; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,int *) ;

int FUNC_2(struct ptp_clock *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 struct ptp_clock_info *VAR_6 = VAR_4->info;
 int VAR_7;

 if (VAR_6->n_ext_ts) {
  VAR_7 = FUNC_0(VAR_5, &VAR_0);
  if (VAR_7)
   goto out1;
  VAR_7 = FUNC_0(VAR_5, &VAR_1);
  if (VAR_7)
   goto out2;
 }
 if (VAR_6->n_per_out) {
  VAR_7 = FUNC_0(VAR_5, &VAR_2);
  if (VAR_7)
   goto out3;
 }
 if (VAR_6->pps) {
  VAR_7 = FUNC_0(VAR_5, &VAR_3);
  if (VAR_7)
   goto out4;
 }
 return 0;
out4:
 if (VAR_6->n_per_out)
  FUNC_1(VAR_5, &VAR_2);
out3:
 if (VAR_6->n_ext_ts)
  FUNC_1(VAR_5, &VAR_1);
out2:
 if (VAR_6->n_ext_ts)
  FUNC_1(VAR_5, &VAR_0);
out1:
 return VAR_7;
}
