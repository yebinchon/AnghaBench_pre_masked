
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int binlog_index; } ;
typedef TYPE_1__ StorageBinLogReader ;


 char* FUNC_0 (int ,char*) ;

__attribute__((used)) static inline char *FUNC_1(const void *VAR_0,
  char *VAR_1)
{
    return FUNC_0(
            ((const StorageBinLogReader *)VAR_0)->binlog_index,
            VAR_1);
}
