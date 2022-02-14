
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *,char*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(void)
{
   VC_CONTAINER_BITS_T VAR_1;
   uint32_t VAR_2;
   int VAR_3 = 0;

   FUNC_3(((void*)0), "Testing vc_container_bits_skip_exp_golomb");
   FUNC_0(((void*)0), &VAR_1, VAR_0, FUNC_5(VAR_0));

   for (VAR_2 = 0; VAR_2 < 12; VAR_2++)
   {
      FUNC_1(((void*)0), &VAR_1, "test_skip_exp_golomb");
   }

   if (!FUNC_2(((void*)0), &VAR_1))
   {
      FUNC_4(((void*)0), "Failed to skip through buffer");
      VAR_3++;
   }

   FUNC_1(((void*)0), &VAR_1, "Skip beyond end of stream");
   if (FUNC_2(((void*)0), &VAR_1))
   {
      FUNC_4(((void*)0), "Unexpectedly succeeded skipping beyond expected end of stream");
      VAR_3++;
   }

   return VAR_3;
}
