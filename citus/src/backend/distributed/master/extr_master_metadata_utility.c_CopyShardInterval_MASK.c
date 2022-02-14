
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valueTypeLen; int valueByVal; void* maxValue; scalar_t__ maxValueExists; void* minValue; scalar_t__ minValueExists; int shardIndex; int shardId; int valueTypeId; int storageType; int relationId; int type; } ;
typedef TYPE_1__ ShardInterval ;


 void* FUNC_0 (void*,int ,int ) ;

void
FUNC_1(ShardInterval *VAR_0, ShardInterval *VAR_1)
{
 VAR_1->type = VAR_0->type;
 VAR_1->relationId = VAR_0->relationId;
 VAR_1->storageType = VAR_0->storageType;
 VAR_1->valueTypeId = VAR_0->valueTypeId;
 VAR_1->valueTypeLen = VAR_0->valueTypeLen;
 VAR_1->valueByVal = VAR_0->valueByVal;
 VAR_1->minValueExists = VAR_0->minValueExists;
 VAR_1->maxValueExists = VAR_0->maxValueExists;
 VAR_1->shardId = VAR_0->shardId;
 VAR_1->shardIndex = VAR_0->shardIndex;

 VAR_1->minValue = 0;
 if (VAR_1->minValueExists)
 {
  VAR_1->minValue = FUNC_0(VAR_0->minValue,
             VAR_0->valueByVal,
             VAR_0->valueTypeLen);
 }

 VAR_1->maxValue = 0;
 if (VAR_1->maxValueExists)
 {
  VAR_1->maxValue = FUNC_0(VAR_0->maxValue,
             VAR_0->valueByVal,
             VAR_0->valueTypeLen);
 }
}
