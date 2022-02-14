
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int intfstream_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (char const*,int ,int ) ;
 int * FUNC_4 (int *,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int *,scalar_t__) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (size_t) ;

__attribute__((used)) static bool FUNC_9(const char *VAR_4,
      uint64_t VAR_5, uint64_t VAR_6, char *VAR_7)
{
   int VAR_8;
   uint8_t *VAR_9 = ((void*)0);
   int64_t VAR_10 = -1;
   intfstream_t *VAR_11 = FUNC_3(VAR_4,
         VAR_1, VAR_0);

   if (!VAR_11)
      return 0;

   if (FUNC_6(VAR_11, 0, VAR_2) == -1)
      goto error;

   VAR_10 = FUNC_7(VAR_11);

   if (FUNC_6(VAR_11, 0, VAR_3) == -1)
      goto error;

   if (VAR_10 < 0)
      goto error;

   if (VAR_5 != 0 || VAR_6 < (uint64_t) VAR_10)
   {
      if (FUNC_6(VAR_11, (int64_t)VAR_5, VAR_3) == -1)
         goto error;

      VAR_9 = (uint8_t*)FUNC_8((size_t)VAR_6);

      if (FUNC_5(VAR_11, VAR_9, VAR_6) != (int64_t) VAR_6)
      {
         FUNC_0(VAR_9);
         goto error;
      }

      FUNC_1(VAR_11);
      FUNC_0(VAR_11);
      VAR_11 = FUNC_4(VAR_9, VAR_1,
            VAR_0,
            VAR_6);
      if (!VAR_11)
      {
         FUNC_0(VAR_9);
         return 0;
      }
   }

   VAR_8 = FUNC_2(VAR_11, VAR_7);
   FUNC_1(VAR_11);
   FUNC_0(VAR_11);
   FUNC_0(VAR_9);
   return VAR_8;

error:
   FUNC_1(VAR_11);
   FUNC_0(VAR_11);
   return 0;
}
