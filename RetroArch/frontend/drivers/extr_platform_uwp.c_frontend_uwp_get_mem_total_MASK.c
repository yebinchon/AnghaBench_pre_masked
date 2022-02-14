
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int dwLength; int dwTotalPhys; } ;
struct TYPE_5__ {int dwLength; int ullTotalPhys; } ;
typedef TYPE_1__ MEMORYSTATUSEX ;
typedef TYPE_2__ MEMORYSTATUS ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static uint64_t FUNC_2(void)
{
   MEMORYSTATUS VAR_0;
   VAR_0.dwLength = sizeof(MEMORYSTATUS);
   FUNC_0(&VAR_0);
   return VAR_0.dwTotalPhys;

}
