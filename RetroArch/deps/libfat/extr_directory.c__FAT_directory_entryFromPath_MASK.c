
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_13__ {char* filename; int* entryData; } ;
struct TYPE_12__ {scalar_t__ rootDirCluster; scalar_t__ cwdCluster; scalar_t__ filesysType; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 char const VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (char const*,char*,size_t) ;
 char* FUNC_6 (char const*,char const) ;
 size_t FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,size_t) ;
 scalar_t__ FUNC_9 (char*,char const*,size_t) ;
 size_t FUNC_10 (char*,int) ;

bool FUNC_11 (PARTITION* VAR_7, DIR_ENTRY* VAR_8, const char* VAR_9, const char* VAR_10)
{
   size_t VAR_11;
   const char* VAR_12;
   uint32_t VAR_13;
   bool VAR_14;
   char VAR_15[VAR_5];
   const char *VAR_16 = VAR_9;
   bool VAR_17 = 0;
   bool VAR_18 = 0;


   if (VAR_10 == ((void*)0))
      VAR_10 = FUNC_6 (VAR_9, '\0');

   if (VAR_16[0] == VAR_3)
   {

      VAR_13 = VAR_7->rootDirCluster;

      while (VAR_16[0] == VAR_3)
         VAR_16++;

      if (VAR_16 >= VAR_10)
      {
         FUNC_4 (VAR_7, VAR_8);
         VAR_17 = 1;
      }
   }

   else
      VAR_13 = VAR_7->cwdCluster;

   while (!VAR_17 && !VAR_18)
   {

      VAR_12 = FUNC_6 (VAR_16, VAR_3);
      if (VAR_12 != ((void*)0))
         VAR_11 = VAR_12 - VAR_16;
      else
         VAR_11 = FUNC_7(VAR_16);


      if (VAR_11 > VAR_6)
         return 0;



      if ((VAR_13 == VAR_7->rootDirCluster)
            && ((FUNC_9(".", VAR_16, VAR_11) == 0)
               || (FUNC_9("..", VAR_16, VAR_11) == 0)))
      {
         VAR_14 = 1;
         FUNC_4(VAR_7, VAR_8);
      }
      else
      {

         VAR_14 = FUNC_2 (VAR_7, VAR_8, VAR_13);

         while (VAR_14 && !VAR_17 && !VAR_18)
         {


            if ((VAR_11 == FUNC_10(VAR_8->filename, VAR_6))
                  && (FUNC_5(VAR_16, VAR_8->filename, VAR_11) == 0))
               VAR_17 = 1;


            FUNC_0 (VAR_8->entryData, VAR_15);
            if ((VAR_11 == FUNC_10(VAR_15, VAR_5))
                  && (FUNC_8(VAR_16, VAR_15, VAR_11) == 0))
               VAR_17 = 1;


            if (VAR_17 && !(VAR_8->entryData[VAR_2] & VAR_0) && (VAR_12 != ((void*)0)))
               VAR_17 = 0;

            if (!VAR_17)
               VAR_14 = FUNC_3 (VAR_7, VAR_8);
         }
      }

      if (!VAR_14)
      {

         VAR_18 = 1;
         VAR_17 = 0;
      }

      else if ((VAR_12 == ((void*)0)) || (VAR_12 >= VAR_10))
         VAR_17 = 1;
      else if (VAR_8->entryData[VAR_2] & VAR_0)
      {
         VAR_13 = FUNC_1 (VAR_7, VAR_8->entryData);
         if (VAR_13 == VAR_1)
            VAR_13 = VAR_7->rootDirCluster;
         VAR_16 = VAR_12;

         while (VAR_16[0] == VAR_3)
            VAR_16++;

         if (VAR_16 >= VAR_10)
            VAR_17 = 1;
         else
            VAR_17 = 0;
      }
   }

   if (VAR_17 && !VAR_18)
   {


      if (VAR_7->filesysType == VAR_4 && (VAR_8->entryData[VAR_2] & VAR_0) &&
            FUNC_1 (VAR_7, VAR_8->entryData) == VAR_1)
         FUNC_4 (VAR_7, VAR_8);
      return 1;
   }

   return 0;
}
