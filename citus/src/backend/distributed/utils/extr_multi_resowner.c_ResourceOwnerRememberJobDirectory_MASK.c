
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_3__ {int jobId; int owner; } ;
typedef int ResourceOwner ;
typedef TYPE_1__ JobDirectoryEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_1(ResourceOwner VAR_3, uint64 VAR_4)
{
 JobDirectoryEntry *VAR_5 = ((void*)0);

 FUNC_0(VAR_1 + 1 <= VAR_0);
 VAR_5 = &VAR_2[VAR_1];
 VAR_5->owner = VAR_3;
 VAR_5->jobId = VAR_4;
 VAR_1++;
}
