
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ucs2_t ;
struct TYPE_10__ {scalar_t__ cluster; scalar_t__ sector; int offset; } ;
struct TYPE_11__ {int filename; int entryData; TYPE_2__ dataStart; TYPE_2__ dataEnd; } ;
struct TYPE_9__ {int cache; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY_POSITION ;
typedef TYPE_3__ DIR_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int*,scalar_t__,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 size_t FUNC_3 (int ,int*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int ,char,int ) ;

bool FUNC_7 (PARTITION* VAR_6, DIR_ENTRY* VAR_7)
{
   DIR_ENTRY_POSITION VAR_8 = VAR_7->dataStart;
   DIR_ENTRY_POSITION VAR_9 = VAR_7->dataEnd;
   bool VAR_10;
   bool VAR_11;
   ucs2_t VAR_12[VAR_4];
   int VAR_13;
   int VAR_14;
   uint8_t VAR_15[VAR_0];

   FUNC_6 (VAR_7->filename, '\0', VAR_5);


   for ( VAR_10 = 1, VAR_11 = 0;
         VAR_10 && !VAR_11;
         VAR_10 = FUNC_2 (VAR_6, &VAR_8, 0))
   {
      FUNC_0 (VAR_6->cache, VAR_15,
            FUNC_4(VAR_6, VAR_8.cluster) + VAR_8.sector,
            VAR_8.offset * VAR_0, VAR_0);

      if ((VAR_8.cluster == VAR_9.cluster)
            && (VAR_8.sector == VAR_9.sector)
            && (VAR_8.offset == VAR_9.offset))
      {


         FUNC_5 (VAR_7->entryData, VAR_15, VAR_0);
         VAR_11 = 1;
      }
      else
      {

         VAR_14 = ((VAR_15[VAR_2] & ~VAR_1) - 1) * 13;
         for (VAR_13 = 0; VAR_13 < 13; VAR_13++)
         {
            if (VAR_14 + VAR_13 < VAR_4 - 1)
               VAR_12[VAR_14 + VAR_13] = VAR_15[VAR_3[VAR_13]] | (VAR_15[VAR_3[VAR_13]+1] << 8);
         }
      }
   }

   if (!VAR_10)
      return 0;

   VAR_8 = VAR_7->dataStart;
   if ((VAR_8.cluster == VAR_9.cluster)
         && (VAR_8.sector == VAR_9.sector)
         && (VAR_8.offset == VAR_9.offset))
   {

      if (!FUNC_1 (VAR_7->entryData, VAR_7->filename))
         return 0;
   }
   else
   {

      if (FUNC_3 (VAR_7->filename, VAR_12, VAR_5) == (size_t)-1)
         return 0;
   }

   return 1;
}
