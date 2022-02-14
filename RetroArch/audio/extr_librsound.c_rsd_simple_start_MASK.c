
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rsound_t ;
typedef enum rsd_format { ____Placeholder_rsd_format } rsd_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int *,int ,int*) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(rsound_t** VAR_6, const char* VAR_7, const char* VAR_8, const char* VAR_9,
                     int VAR_10, int VAR_11, enum rsd_format VAR_12)
{
   if ( FUNC_1(VAR_6) < 0 )
      return -1;

   int VAR_13 = VAR_12;

   if ( VAR_7 != ((void*)0) )
      FUNC_2(*VAR_6, VAR_2, (void*)VAR_7);
   if ( VAR_8 != ((void*)0) )
      FUNC_2(*VAR_6, VAR_4, (void*)VAR_8);
   if ( VAR_9 != ((void*)0) )
      FUNC_2(*VAR_6, VAR_3, (void*)VAR_9);

   if ( FUNC_2(*VAR_6, VAR_5, &VAR_10) < 0 ||
         FUNC_2(*VAR_6, VAR_0, &VAR_11) < 0 ||
         FUNC_2(*VAR_6, VAR_1, &VAR_13) < 0 )
   {
      FUNC_0(*VAR_6);
      return -1;
   }

   if ( FUNC_3(*VAR_6) < 0 )
   {
      FUNC_0(*VAR_6);
      return -1;
   }

   return 0;
}
