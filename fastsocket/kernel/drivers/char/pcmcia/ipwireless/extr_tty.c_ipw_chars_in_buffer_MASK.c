
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ipw_tty* driver_data; } ;
struct ipw_tty {int tx_bytes_queued; int open_count; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0)
{
 struct ipw_tty *VAR_1 = VAR_0->driver_data;

 if (!VAR_1)
  return 0;

 if (!VAR_1->open_count)
  return 0;

 return VAR_1->tx_bytes_queued;
}
