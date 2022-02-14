
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int32_t ;
typedef int VC_CONTAINER_BITS_T ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int const* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int const*,scalar_t__) ;
 int FUNC_3 (int *,int *,scalar_t__,char*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,...) ;
 int const* VAR_0 ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(void)
{
   VC_CONTAINER_BITS_T VAR_1;
   uint32_t VAR_2;
   const uint8_t *VAR_3;
   int VAR_4 = 0;
   uint32_t VAR_5, VAR_6;

   FUNC_5(((void*)0), "Testing vc_container_bits_current_pointer, vc_container_bits_skip_bytes and vc_container_bits_bytes_available");
   FUNC_2(((void*)0), &VAR_1, VAR_0, FUNC_7(VAR_0));

   VAR_5 = FUNC_0(((void*)0), &VAR_1);
   if (VAR_5 != FUNC_7(VAR_0))
   {
      FUNC_6(((void*)0), "Expected bytes available to initially match given size");
      VAR_4++;
   }

   if (FUNC_1(((void*)0), &VAR_1) != VAR_0)
   {
      FUNC_6(((void*)0), "Expected initial current pointer to match original buffer");
      VAR_4++;
   }

   VAR_3 = VAR_0;
   for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
   {
      FUNC_3(((void*)0), &VAR_1, VAR_2, "test_ptr_and_skip_bytes");

      VAR_3 += VAR_2;
      if (FUNC_1(((void*)0), &VAR_1) != VAR_3)
      {
         FUNC_6(((void*)0), "Expected current pointer to have moved by %u byte%s", VAR_2, FUNC_8(VAR_2));
         VAR_4++;
      }

      VAR_6 = FUNC_0(((void*)0), &VAR_1);
      if (VAR_6 + VAR_2 != VAR_5)
      {
         int32_t VAR_7 = VAR_5 - VAR_6;
         FUNC_6(((void*)0), "Tried to skip %u byte%s, actually skipped %d byte%s",
               VAR_2, FUNC_8(VAR_2), VAR_7, FUNC_8(VAR_7));
         VAR_4++;
      }

      VAR_5 = VAR_6;
   }

   if (!VAR_6)
   {
      FUNC_6(((void*)0), "Reached end of stream too soon");
      VAR_4++;
   }
   if (!FUNC_4(((void*)0), &VAR_1))
   {
      FUNC_6(((void*)0), "Expected stream to be valid");
      VAR_4++;
   }

   FUNC_3(((void*)0), &VAR_1, VAR_6 + 1, "Beyond end of stream");
   if (FUNC_4(((void*)0), &VAR_1))
   {
      FUNC_6(((void*)0), "Unexpectedly succeeded skipping bytes beyond end of stream");
      VAR_4++;
   }
   if (FUNC_0(((void*)0), &VAR_1))
   {
      FUNC_6(((void*)0), "Expected stream to have been reset");
      VAR_4++;
   }

   return VAR_4;
}
