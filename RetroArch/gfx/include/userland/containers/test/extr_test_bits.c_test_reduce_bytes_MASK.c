
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
typedef int VC_CONTAINER_BITS_T ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int *,scalar_t__,char*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(void)
{
   VC_CONTAINER_BITS_T VAR_1;
   uint32_t VAR_2;
   int VAR_3 = 0;
   uint32_t VAR_4, VAR_5;

   FUNC_6(((void*)0), "Testing vc_container_bits_reduce_bytes");
   FUNC_3(((void*)0), &VAR_1, VAR_0, FUNC_8(VAR_0));

   VAR_4 = FUNC_1(((void*)0), &VAR_1);
   if (VAR_4 != FUNC_8(VAR_0))
   {
      FUNC_7(((void*)0), "Expected bytes available to initially match given size");
      VAR_3++;
   }

   if (FUNC_2(((void*)0), &VAR_1) != VAR_0)
   {
      FUNC_7(((void*)0), "Expected initial current pointer to match original buffer");
      VAR_3++;
   }

   for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
   {
      FUNC_4(((void*)0), &VAR_1, VAR_2, "test_reduce_bytes");

      if (FUNC_2(((void*)0), &VAR_1) != VAR_0)
      {
         FUNC_7(((void*)0), "Did not expect current pointer to have moved");
         VAR_3++;
      }

      VAR_5 = FUNC_1(((void*)0), &VAR_1);
      if (VAR_5 + VAR_2 != VAR_4)
      {
         int32_t VAR_6 = VAR_4 - VAR_5;
         FUNC_7(((void*)0), "Tried to reduce by %u byte%s, actually reduced by %d byte%s",
               VAR_2, FUNC_9(VAR_2), VAR_6, FUNC_9(VAR_6));
         VAR_3++;
      }

      VAR_4 = VAR_5;
   }

   if (!VAR_5)
   {
      FUNC_7(((void*)0), "Reached end of stream too soon");
      VAR_3++;
   }
   if (!FUNC_5(((void*)0), &VAR_1))
   {
      FUNC_7(((void*)0), "Expected stream to be valid");
      VAR_3++;
   }

   FUNC_4(((void*)0), &VAR_1, VAR_5 + 1, "Reducing an empty stream");
   if (FUNC_5(((void*)0), &VAR_1))
   {
      FUNC_7(((void*)0), "Unexpectedly succeeded reducing by too many bytes");
      VAR_3++;
   }
   if (FUNC_0(((void*)0), &VAR_1))
   {
      FUNC_7(((void*)0), "Expected stream to have been reset");
      VAR_3++;
   }

   return VAR_3;
}
