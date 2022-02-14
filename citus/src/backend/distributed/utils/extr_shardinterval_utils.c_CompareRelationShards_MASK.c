
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_2__ {scalar_t__ relationId; scalar_t__ shardId; } ;
typedef TYPE_1__ RelationShard ;
typedef scalar_t__ Oid ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 RelationShard *VAR_2 = *((RelationShard **) VAR_0);
 RelationShard *VAR_3 = *((RelationShard **) VAR_1);
 Oid VAR_4 = VAR_2->relationId;
 Oid VAR_5 = VAR_3->relationId;
 int64 VAR_6 = VAR_2->shardId;
 int64 VAR_7 = VAR_3->shardId;

 if (VAR_4 > VAR_5)
 {
  return 1;
 }
 else if (VAR_4 < VAR_5)
 {
  return -1;
 }
 else if (VAR_6 > VAR_7)
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
