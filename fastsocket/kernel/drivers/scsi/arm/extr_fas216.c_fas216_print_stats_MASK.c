
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queues; int removes; int fins; int reads; int writes; int miscs; int disconnects; int aborts; int bus_resets; int host_resets; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
typedef TYPE_2__ FAS216_Info ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int,int,int,int) ;

int FUNC_1(FAS216_Info *VAR_0, char *VAR_1)
{
 char *VAR_2 = VAR_1;

 VAR_2 += FUNC_0(VAR_2, "\n"
   "Command Statistics:\n"
   " Queued     : %u\n"
   " Issued     : %u\n"
   " Completed  : %u\n"
   " Reads      : %u\n"
   " Writes     : %u\n"
   " Others     : %u\n"
   " Disconnects: %u\n"
   " Aborts     : %u\n"
   " Bus resets : %u\n"
   " Host resets: %u\n",
   VAR_0->stats.queues, VAR_0->stats.removes,
   VAR_0->stats.fins, VAR_0->stats.reads,
   VAR_0->stats.writes, VAR_0->stats.miscs,
   VAR_0->stats.disconnects, VAR_0->stats.aborts,
   VAR_0->stats.bus_resets, VAR_0->stats.host_resets);

 return VAR_2 - VAR_1;
}
