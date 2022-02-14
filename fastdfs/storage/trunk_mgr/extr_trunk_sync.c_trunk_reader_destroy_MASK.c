
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int * current; int * buffer; } ;
struct TYPE_5__ {int mark_fd; int binlog_fd; TYPE_1__ binlog_buff; } ;
typedef TYPE_2__ TrunkBinLogReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(TrunkBinLogReader *VAR_0)
{
 if (VAR_0->mark_fd >= 0)
 {
  FUNC_0(VAR_0->mark_fd);
  VAR_0->mark_fd = -1;
 }

 if (VAR_0->binlog_fd >= 0)
 {
  FUNC_0(VAR_0->binlog_fd);
  VAR_0->binlog_fd = -1;
 }

 if (VAR_0->binlog_buff.buffer != ((void*)0))
 {
  FUNC_1(VAR_0->binlog_buff.buffer);
  VAR_0->binlog_buff.buffer = ((void*)0);
  VAR_0->binlog_buff.current = ((void*)0);
  VAR_0->binlog_buff.length = 0;
 }
}
