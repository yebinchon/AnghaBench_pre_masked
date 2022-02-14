
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int intfstream_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (char const*,int ,int ) ;
 int * FUNC_4 (int *,int ,int ,size_t) ;
 scalar_t__ FUNC_5 (int *,int *,size_t) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (size_t) ;

__attribute__((used)) static bool FUNC_9(const char *VAR_4,
      uint64_t VAR_5, size_t VAR_6, uint32_t *VAR_7)
{
   int VAR_8;
   intfstream_t *VAR_9 = FUNC_3(VAR_4,
         VAR_1, VAR_0);
   uint8_t *VAR_10 = ((void*)0);
   int64_t VAR_11 = -1;

   if (!VAR_9)
      return 0;

   if (FUNC_6(VAR_9, 0, VAR_2) == -1)
      goto error;

   VAR_11 = FUNC_7(VAR_9);

   if (FUNC_6(VAR_9, 0, VAR_3) == -1)
      goto error;

   if (VAR_11 < 0)
      goto error;

   if (VAR_5 != 0 || VAR_6 < (uint64_t) VAR_11)
   {
      if (FUNC_6(VAR_9, (int64_t)VAR_5, VAR_3) == -1)
         goto error;

      VAR_10 = (uint8_t*)FUNC_8(VAR_6);

      if (FUNC_5(VAR_9, VAR_10, VAR_6) != (int64_t) VAR_6)
         goto error;

      FUNC_1(VAR_9);
      FUNC_0(VAR_9);
      VAR_9 = FUNC_4(VAR_10, VAR_1,
            VAR_0, VAR_6);

      if (!VAR_9)
         goto error;
   }

   VAR_8 = FUNC_2(VAR_9, VAR_7);
   FUNC_1(VAR_9);
   FUNC_0(VAR_9);
   FUNC_0(VAR_10);
   return VAR_8;

error:
   if (VAR_9)
   {
      FUNC_1(VAR_9);
      FUNC_0(VAR_9);
   }
   if (VAR_10)
      FUNC_0(VAR_10);
   return 0;
}
