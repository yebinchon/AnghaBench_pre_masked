
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_2__ {scalar_t__ shardId; scalar_t__ listIndex; } ;
typedef TYPE_1__ InsertValues ;
typedef scalar_t__ Index ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 InsertValues *VAR_2 = *((InsertValues **) VAR_0);
 InsertValues *VAR_3 = *((InsertValues **) VAR_1);
 int64 VAR_4 = VAR_2->shardId;
 int64 VAR_5 = VAR_3->shardId;
 Index VAR_6 = VAR_2->listIndex;
 Index VAR_7 = VAR_3->listIndex;

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

  if (VAR_6 > VAR_7)
  {
   return 1;
  }
  else if (VAR_6 < VAR_7)
  {
   return -1;
  }
  else
  {
   return 0;
  }
 }
}
