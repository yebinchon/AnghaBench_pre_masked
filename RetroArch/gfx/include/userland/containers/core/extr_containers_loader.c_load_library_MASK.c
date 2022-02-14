
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * VC_CONTAINER_READER_OPEN_FUNC_T ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char const* VAR_3 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,unsigned int,char*,char const*,char const*,char const*,...) ;
 unsigned int FUNC_4 (char const*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (void*,char const*) ;

__attribute__((used)) static VC_CONTAINER_READER_OPEN_FUNC_T FUNC_9(void **VAR_5, const char *VAR_6, const char *VAR_7, int VAR_8)
{


   const char *VAR_9 = {"reader_open"};
   const char *VAR_10 = {"writer_open"};
   char *VAR_11, *VAR_12;
   void *VAR_13;
   VC_CONTAINER_READER_OPEN_FUNC_T VAR_14 = ((void*)0);
   unsigned VAR_15, VAR_16, VAR_17 = FUNC_4(VAR_6) + (VAR_7 ? FUNC_4(VAR_7) : 0);

   FUNC_5(VAR_8 == 0 || VAR_8 == 1);

   VAR_15 = FUNC_4(VAR_0) + FUNC_0(FUNC_4("reader_"), FUNC_4("writer_")) + VAR_17 + FUNC_4(VAR_3) + 1;
   if ((VAR_11 = FUNC_2(VAR_15)) == ((void*)0))
      return ((void*)0);

   VAR_16 = VAR_17 + 1 + FUNC_0(FUNC_4(VAR_9), FUNC_4(VAR_10)) + 1;
   if ((VAR_12 = FUNC_2(VAR_16)) == ((void*)0))
   {
      FUNC_1(VAR_11);
      return ((void*)0);
   }

   FUNC_3(VAR_11, VAR_15, "%s%s%s%s%s", VAR_0, VAR_8 ? "reader_" : "writer_", VAR_7 ? VAR_7 : "", VAR_6, VAR_3);
   FUNC_3(VAR_12, VAR_16, "%s_%s%s", VAR_6, VAR_7 ? VAR_7 : "", VAR_8 ? VAR_9 : VAR_10);

   if ( (VAR_13 = FUNC_7(VAR_11, VAR_4)) != ((void*)0) )
   {

      VAR_14 = (VC_CONTAINER_READER_OPEN_FUNC_T)FUNC_8(VAR_13, VAR_8 ? VAR_9 : VAR_10);

      if (!VAR_14) VAR_14 = (VC_CONTAINER_READER_OPEN_FUNC_T)FUNC_8(VAR_13, VAR_12);


      if (VAR_14)
         *VAR_5 = VAR_13;
      else
         FUNC_6(VAR_13);
   }

   FUNC_1(VAR_12);
   FUNC_1(VAR_11);
   return VAR_14;
}
