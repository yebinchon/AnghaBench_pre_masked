
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int VC_URI_PARTS_T ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (int *,char*,size_t) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_10( VC_CONTAINER_T *VAR_3,
      const char *VAR_4,
      const char *VAR_5,
      char **VAR_6)
{
   VC_URI_PARTS_T *VAR_7 = ((void*)0);
   VC_URI_PARTS_T *VAR_8 = ((void*)0);
   VC_CONTAINER_STATUS_T VAR_9 = VAR_1;
   uint32_t VAR_10;

   *VAR_6 = ((void*)0);
   VAR_8 = FUNC_5();
   if (!VAR_8) goto tidy_up;
   if (!FUNC_7(VAR_8, VAR_5))
   {
      VAR_9 = VAR_0;
      goto tidy_up;
   }

   if (FUNC_9(VAR_8) != ((void*)0))
   {

      size_t VAR_11 = FUNC_2(VAR_5);

      *VAR_6 = (char *)FUNC_1(VAR_11 + 1);
      if (!*VAR_6) goto tidy_up;

      FUNC_3(*VAR_6, VAR_5, VAR_11);
      VAR_9 = VAR_2;
      goto tidy_up;
   }

   VAR_7 = FUNC_5();
   if (!VAR_7) goto tidy_up;
   if (!FUNC_7(VAR_7, VAR_4))
   {
      VAR_9 = VAR_0;
      goto tidy_up;
   }


   if (!FUNC_6(VAR_7, VAR_8)) goto tidy_up;

   VAR_10 = FUNC_4(VAR_8, ((void*)0), 0) + 1;
   *VAR_6 = (char *)FUNC_1(VAR_10);
   if (!*VAR_6) goto tidy_up;

   FUNC_4(VAR_8, *VAR_6, VAR_10);

   VAR_9 = VAR_2;

tidy_up:
   if (VAR_7) FUNC_8(VAR_7);
   if (VAR_8) FUNC_8(VAR_8);
   if (VAR_9 != VAR_2)
      FUNC_0(VAR_3, "RTSP: Error merging URIs: %d", (int)VAR_9);
   return VAR_9;
}
