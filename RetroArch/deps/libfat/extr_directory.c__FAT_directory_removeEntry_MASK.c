
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ cluster; scalar_t__ sector; int offset; } ;
struct TYPE_11__ {TYPE_2__ dataEnd; TYPE_2__ dataStart; } ;
struct TYPE_9__ {int cache; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY_POSITION ;
typedef TYPE_3__ DIR_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,scalar_t__,int,int) ;
 int FUNC_1 (int ,int *,scalar_t__,int,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;

bool FUNC_4 (PARTITION* VAR_2, DIR_ENTRY* VAR_3)
{
   DIR_ENTRY_POSITION VAR_4 = VAR_3->dataStart;
   DIR_ENTRY_POSITION VAR_5 = VAR_3->dataEnd;
   bool VAR_6;
   bool VAR_7;
   uint8_t VAR_8[VAR_0];


   for ( VAR_6 = 1, VAR_7 = 0;
         VAR_6 && !VAR_7;
         VAR_6 = FUNC_2 (VAR_2, &VAR_4, 0))
   {
      FUNC_0 (VAR_2->cache, VAR_8, FUNC_3(VAR_2, VAR_4.cluster) + VAR_4.sector, VAR_4.offset * VAR_0, VAR_0);
      VAR_8[0] = VAR_1;
      FUNC_1 (VAR_2->cache, VAR_8, FUNC_3(VAR_2, VAR_4.cluster) + VAR_4.sector, VAR_4.offset * VAR_0, VAR_0);
      if ((VAR_4.cluster == VAR_5.cluster) && (VAR_4.sector == VAR_5.sector) && (VAR_4.offset == VAR_5.offset))
         VAR_7 = 1;
   }

   if (!VAR_6)
      return 0;

   return 1;
}
