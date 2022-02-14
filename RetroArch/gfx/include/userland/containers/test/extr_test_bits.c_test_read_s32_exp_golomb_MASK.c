
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *,char*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_6(void)
{
   VC_CONTAINER_BITS_T VAR_4;
   uint32_t VAR_5;
   int32_t VAR_6;
   int VAR_7 = 0;

   FUNC_3(((void*)0), "Testing vc_container_bits_get_s32_exp_golomb");
   FUNC_0(((void*)0), &VAR_4, VAR_0, FUNC_5(VAR_0));

   for (VAR_5 = 0; VAR_5 < 11; VAR_5++)
   {
      VAR_6 = FUNC_1(((void*)0), &VAR_4, "test_read_s32_exp_golomb");
      if (VAR_6 != VAR_3[VAR_5])
      {
         FUNC_4(((void*)0), "Expected %u, got %u", VAR_5, VAR_6);
         VAR_7++;
      }
   }

   VAR_6 = FUNC_1(((void*)0), &VAR_4, "Final bit");
   if (!FUNC_2(((void*)0), &VAR_4) || VAR_6)
   {
      FUNC_4(((void*)0), "Failed to get final Exp-Golomb value (expected a zero)");
      VAR_7++;
   }
   VAR_6 = FUNC_1(((void*)0), &VAR_4, "Beyond final bit");
   if (FUNC_2(((void*)0), &VAR_4) || VAR_6)
   {
      FUNC_4(((void*)0), "Unexpectedly succeeded reading beyond expected end of stream");
      VAR_7++;
   }


   FUNC_0(((void*)0), &VAR_4, VAR_1, FUNC_5(VAR_1));

   VAR_6 = FUNC_1(((void*)0), &VAR_4, "Largest signed 32-bit value");
   if (!FUNC_2(((void*)0), &VAR_4) || VAR_6 != -0x7FFFFFFF)
   {
      FUNC_4(((void*)0), "Failed to get largest signed 32-bit value: %d", VAR_6);
      VAR_7++;
   }

   VAR_6 = FUNC_1(((void*)0), &VAR_4, "Just too large signed 33-bit value");
   if (FUNC_2(((void*)0), &VAR_4) || VAR_6)
   {
      FUNC_4(((void*)0), "Unexpectedly got slightly too large signed 32-bit value: %d", VAR_6);
      VAR_7++;
   }


   FUNC_0(((void*)0), &VAR_4, VAR_2, FUNC_5(VAR_2));

   VAR_6 = FUNC_1(((void*)0), &VAR_4, "Larger signed 33-bit value");
   if (FUNC_2(((void*)0), &VAR_4) || VAR_6)
   {
      FUNC_4(((void*)0), "Unexpectedly got signed 33-bit value: %d", VAR_6);
      VAR_7++;
   }

   return VAR_7;
}
