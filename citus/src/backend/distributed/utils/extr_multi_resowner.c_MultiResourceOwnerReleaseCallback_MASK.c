
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ owner; int jobId; } ;
typedef scalar_t__ ResourceReleasePhase ;
typedef TYPE_1__ JobDirectoryEntry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(ResourceReleasePhase VAR_4,
          bool VAR_5,
          bool VAR_6,
          void *VAR_7)
{
 int VAR_8 = VAR_1 - 1;
 int VAR_9 = 0;

 if (VAR_4 == VAR_2)
 {




  for (VAR_9 = VAR_8; VAR_9 >= 0; VAR_9--)
  {
   JobDirectoryEntry *VAR_10 = &VAR_3[VAR_9];

   if (VAR_10->owner == VAR_0)
   {
    FUNC_0(VAR_10->jobId);
   }
  }
 }
}
