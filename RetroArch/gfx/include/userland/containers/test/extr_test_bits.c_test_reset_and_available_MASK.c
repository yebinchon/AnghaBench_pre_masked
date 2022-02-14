
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_CONTAINER_BITS_T ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
   VC_CONTAINER_BITS_T VAR_1;
   int VAR_2 = 0;

   FUNC_3(((void*)0), "Testing vc_container_bits_reset and vc_container_bits_available");
   FUNC_1(((void*)0), &VAR_1, VAR_0, FUNC_5(VAR_0));

   if (!FUNC_0(((void*)0), &VAR_1))
   {
      FUNC_4(((void*)0), "Expected initialised stream to contain bits");
      VAR_2++;
   }

   FUNC_2(((void*)0), &VAR_1);

   if (FUNC_0(((void*)0), &VAR_1))
   {
      FUNC_4(((void*)0), "Expected reset stream not to contain bits");
      VAR_2++;
   }

   return VAR_2;
}
