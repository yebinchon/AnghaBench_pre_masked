
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* entryData; } ;
struct TYPE_7__ {int cwdCluster; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,char const*,int *) ;
 int FUNC_1 (TYPE_1__*,int*) ;

bool FUNC_2 (PARTITION* VAR_2, const char* VAR_3)
{
   DIR_ENTRY VAR_4;

   if (!FUNC_0 (VAR_2, &VAR_4, VAR_3, ((void*)0)))
      return 0;

   if (!(VAR_4.entryData[VAR_1] & VAR_0))
      return 0;

   VAR_2->cwdCluster = FUNC_1 (VAR_2, VAR_4.entryData);

   return 1;
}
