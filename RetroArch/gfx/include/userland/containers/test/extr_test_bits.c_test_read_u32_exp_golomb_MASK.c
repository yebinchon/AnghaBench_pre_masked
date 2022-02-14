
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *,int,char*) ;
 int FUNC_2 (int *,int *,char*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(void)
{
   VC_CONTAINER_BITS_T VAR_3;
   uint32_t VAR_4, VAR_5;
   int VAR_6 = 0;

   FUNC_4(((void*)0), "Testing vc_container_bits_get_u32_exp_golomb");
   FUNC_0(((void*)0), &VAR_3, VAR_0, FUNC_6(VAR_0));

   for (VAR_4 = 0; VAR_4 < 11; VAR_4++)
   {
      VAR_5 = FUNC_2(((void*)0), &VAR_3, "test_read_u32_exp_golomb");
      if (VAR_5 != VAR_4)
      {
         FUNC_5(((void*)0), "Expected %u, got %u", VAR_4, VAR_5);
         VAR_6++;
      }
   }

   VAR_5 = FUNC_1(((void*)0), &VAR_3, 1, "Final bit");
   if (!FUNC_3(((void*)0), &VAR_3) || !VAR_5)
   {
      FUNC_5(((void*)0), "Failed to get final bit (expected a 1)");
      VAR_6++;
   }
   VAR_5 = FUNC_2(((void*)0), &VAR_3, "Beyond end of stream");
   if (FUNC_3(((void*)0), &VAR_3) || VAR_5)
   {
      FUNC_5(((void*)0), "Unexpectedly succeeded reading beyond expected end of stream");
      VAR_6++;
   }


   FUNC_0(((void*)0), &VAR_3, VAR_1, FUNC_6(VAR_1));

   VAR_5 = FUNC_2(((void*)0), &VAR_3, "Second largest 32-bit value");
   if (VAR_5 != 0xFFFFFFFE)
   {
      FUNC_5(((void*)0), "Failed to get second largest 32-bit value");
      VAR_6++;
   }

   VAR_5 = FUNC_2(((void*)0), &VAR_3, "Largest 32-bit value");
   if (VAR_5 != 0xFFFFFFFF)
   {
      FUNC_5(((void*)0), "Failed to get largest 32-bit value");
      VAR_6++;
   }


   FUNC_0(((void*)0), &VAR_3, VAR_2, FUNC_6(VAR_2));

   VAR_5 = FUNC_2(((void*)0), &VAR_3, "Unsigned 33-bit value");
   if (FUNC_3(((void*)0), &VAR_3) || VAR_5)
   {
      FUNC_5(((void*)0), "Unexpectedly got 33-bit value: %u", VAR_5);
      VAR_6++;
   }

   return VAR_6;
}
