
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ partitionId; } ;
typedef TYPE_1__ Task ;
struct TYPE_10__ {scalar_t__ fragmentType; scalar_t__ fragmentReference; } ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_2__* StringInfo ;
typedef int ShardInterval ;
typedef TYPE_3__ RangeTableFragment ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_3__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_6(RangeTableFragment *VAR_2, RangeTableFragment *VAR_3)
{
 bool VAR_4 = 0;
 bool VAR_5 = 0;
 ShardInterval *VAR_6 = ((void*)0);
 ShardInterval *VAR_7 = ((void*)0);






 if (VAR_2->fragmentType == VAR_0 &&
  VAR_3->fragmentType == VAR_0)
 {
  Task *VAR_8 = (Task *) VAR_2->fragmentReference;
  Task *VAR_9 = (Task *) VAR_3->fragmentReference;


  if (VAR_8->partitionId != VAR_9->partitionId)
  {
   FUNC_4(VAR_1, (FUNC_5("join prunable for task partitionId %u and %u",
         VAR_8->partitionId,
         VAR_9->partitionId)));
   return 1;
  }
  else
  {
   return 0;
  }
 }






 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = FUNC_0(VAR_3);

 VAR_5 = FUNC_3(VAR_6, VAR_7);
 if (!VAR_5)
 {
  if (FUNC_2(VAR_1))
  {
   StringInfo VAR_10 = FUNC_1(VAR_6);
   StringInfo VAR_11 = FUNC_1(VAR_7);

   FUNC_4(VAR_1, (FUNC_5("join prunable for intervals %s and %s",
         VAR_10->data, VAR_11->data)));
  }

  VAR_4 = 1;
 }

 return VAR_4;
}
