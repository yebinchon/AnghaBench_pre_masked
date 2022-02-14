
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_2__ {scalar_t__ anchorShardId; } ;
typedef TYPE_1__ Task ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const Task *VAR_2 = *((const Task **) VAR_0);
 const Task *VAR_3 = *((const Task **) VAR_1);

 uint64 VAR_4 = VAR_2->anchorShardId;
 uint64 VAR_5 = VAR_3->anchorShardId;


 if (VAR_4 > VAR_5)
 {
  return 1;
 }
 else if (VAR_4 < VAR_5)
 {
  return -1;
 }
 else
 {
  return 0;
 }
}
