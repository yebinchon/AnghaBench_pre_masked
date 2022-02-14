
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_perf_stats {int dummy; } ;
struct TYPE_5__ {int tx_packets; int rx_packets; } ;
struct TYPE_6__ {int initial_tx_packets; int initial_rx_packets; } ;
struct TYPE_4__ {int performance_stats; } ;
struct qeth_card {int conf_mutex; TYPE_2__ stats; TYPE_3__ perf_stats; TYPE_1__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_0(VAR_1);
 char *VAR_6;
 int VAR_7, VAR_8 = 0;

 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->conf_mutex);
 VAR_7 = FUNC_4(VAR_3, &VAR_6, 16);
 if ((VAR_7 == 0) || (VAR_7 == 1)) {
  if (VAR_7 == VAR_5->options.performance_stats)
   goto out;;
  VAR_5->options.performance_stats = VAR_7;
  if (VAR_7 == 0)
   FUNC_1(&VAR_5->perf_stats, 0,
    sizeof(struct qeth_perf_stats));
  VAR_5->perf_stats.initial_rx_packets = VAR_5->stats.rx_packets;
  VAR_5->perf_stats.initial_tx_packets = VAR_5->stats.tx_packets;
 } else
  VAR_8 = -VAR_0;
out:
 FUNC_3(&VAR_5->conf_mutex);
 return VAR_8 ? VAR_8 : VAR_4;
}
