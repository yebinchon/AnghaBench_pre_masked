
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *,int,char*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
   VC_CONTAINER_BITS_T VAR_1;
   uint32_t VAR_2, VAR_3;
   int VAR_4 = 0;

   FUNC_3(((void*)0), "Testing vc_container_bits_get_u32");
   FUNC_0(((void*)0), &VAR_1, VAR_0, FUNC_5(VAR_0));

   for (VAR_2 = 0; VAR_2 < 11; VAR_2++)
   {
      VAR_3 = FUNC_1(((void*)0), &VAR_1, VAR_2, "test_read_u32");
      if (VAR_3 != VAR_2)
      {
         FUNC_4(((void*)0), "Expected %u, got %u", VAR_2, VAR_3);
         VAR_4++;
      }
   }

   VAR_3 = FUNC_1(((void*)0), &VAR_1, 1, "Final bit");
   if (!FUNC_2(((void*)0), &VAR_1) || VAR_3)
   {
      FUNC_4(((void*)0), "Failed to get final bit");
      VAR_4++;
   }
   VAR_3 = FUNC_1(((void*)0), &VAR_1, 1, "Beyond final bit");
   if (FUNC_2(((void*)0), &VAR_1) || VAR_3)
   {
      FUNC_4(((void*)0), "Unexpectedly succeeded reading beyond expected end of stream");
      VAR_4++;
   }

   return VAR_4;
}
