
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int VC_URI_PARTS_T ;


 int FUNC_0 (int *,char*) ;
 char* VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char const**,char const**) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(VC_URI_PARTS_T *VAR_1)
{
   int VAR_2 = 0;
   const char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
   char VAR_5[1];

   if (FUNC_8( VAR_1 ))
      VAR_2++;
   if (FUNC_9( VAR_1 ))
      VAR_2++;
   if (FUNC_3( VAR_1 ))
      VAR_2++;
   if (FUNC_6( VAR_1 ))
      VAR_2++;
   if (FUNC_5( VAR_1 ))
      VAR_2++;
   if (FUNC_2( VAR_1 ))
      VAR_2++;
   if (FUNC_4( VAR_1 ) != 0)
      VAR_2++;

   FUNC_7( VAR_1, 0, &VAR_3, &VAR_4 );
   if (VAR_3 != ((void*)0) || VAR_4 != ((void*)0))
      VAR_2++;

   if (FUNC_1(VAR_1, ((void*)0), 0) != 0)
      VAR_2++;
   VAR_5[0] = ~*VAR_0;
   FUNC_1(VAR_1, VAR_5, sizeof(VAR_5));
   if (VAR_5[0] != '\0')
      VAR_2++;

   if (VAR_2)
      FUNC_0(((void*)0), "Getting default values gave unexpected values");

   return VAR_2;
}
