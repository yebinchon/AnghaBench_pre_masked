
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(char *VAR_1)
{
 FUNC_0(VAR_0,
  "usage: %s [options]\n"
  " -a val     request a one-shot alarm after 'val' seconds\n"
  " -A val     request a periodic alarm every 'val' seconds\n"
  " -c         query the ptp clock's capabilities\n"
  " -d name    device to open\n"
  " -e val     read 'val' external time stamp events\n"
  " -f val     adjust the ptp clock frequency by 'val' ppb\n"
  " -g         get the ptp clock time\n"
  " -h         prints this message\n"
  " -p val     enable output with a period of 'val' nanoseconds\n"
  " -P val     enable or disable (val=1|0) the system clock PPS\n"
  " -s         set the ptp clock time from the system time\n"
  " -S         set the system time from the ptp clock time\n"
  " -t val     shift the ptp clock time by 'val' seconds\n",
  VAR_1);
}
