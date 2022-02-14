
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; int low_latency; struct ipw_tty* driver_data; } ;
struct ipw_tty {scalar_t__ open_count; scalar_t__ tty_type; int ipw_tty_mutex; int network; struct tty_struct* linux_tty; scalar_t__ tx_bytes_queued; scalar_t__ closing; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ipw_tty* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_2, struct file *VAR_3)
{
 int VAR_4 = VAR_2->index;
 struct ipw_tty *VAR_5 = FUNC_0(VAR_4);

 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->ipw_tty_mutex);

 if (VAR_5->closing) {
  FUNC_3(&VAR_5->ipw_tty_mutex);
  return -VAR_0;
 }
 if (VAR_5->open_count == 0)
  VAR_5->tx_bytes_queued = 0;

 VAR_5->open_count++;

 VAR_5->linux_tty = VAR_2;
 VAR_2->driver_data = VAR_5;
 VAR_2->low_latency = 1;

 if (VAR_5->tty_type == VAR_1)
  FUNC_1(VAR_5->network);

 FUNC_3(&VAR_5->ipw_tty_mutex);

 return 0;
}
