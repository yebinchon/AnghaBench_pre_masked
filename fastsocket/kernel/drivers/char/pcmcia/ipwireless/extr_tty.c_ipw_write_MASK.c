
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ipw_tty* driver_data; } ;
struct ipw_tty {int tx_bytes_queued; int ipw_tty_mutex; int hardware; int open_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,unsigned char const*,int,int ,struct ipw_tty*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_5,
       const unsigned char *VAR_6, int VAR_7)
{
 struct ipw_tty *VAR_8 = VAR_5->driver_data;
 int VAR_9, VAR_10;

 if (!VAR_8)
  return -VAR_1;

 FUNC_1(&VAR_8->ipw_tty_mutex);
 if (!VAR_8->open_count) {
  FUNC_2(&VAR_8->ipw_tty_mutex);
  return -VAR_0;
 }

 VAR_9 = VAR_2 - VAR_8->tx_bytes_queued;
 if (VAR_9 < 0)
  VAR_9 = 0;

 if (VAR_7 > VAR_9)
  VAR_7 = VAR_9;

 if (VAR_7 == 0) {
  FUNC_2(&VAR_8->ipw_tty_mutex);
  return 0;
 }

 VAR_10 = FUNC_0(VAR_8->hardware, VAR_3,
          VAR_6, VAR_7,
          VAR_4, VAR_8);
 if (VAR_10 == -1) {
  FUNC_2(&VAR_8->ipw_tty_mutex);
  return 0;
 }

 VAR_8->tx_bytes_queued += VAR_7;
 FUNC_2(&VAR_8->ipw_tty_mutex);

 return VAR_7;
}
