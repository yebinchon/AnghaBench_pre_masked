
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *,int,char*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(void)
{
   VC_CONTAINER_BITS_T VAR_1;
   uint32_t VAR_2;
   int VAR_3 = 0;
   uint32_t VAR_4, VAR_5;

   FUNC_4(((void*)0), "Testing vc_container_bits_skip");
   FUNC_1(((void*)0), &VAR_1, VAR_0, FUNC_6(VAR_0));

   VAR_4 = FUNC_0(((void*)0), &VAR_1);
   for (VAR_2 = 0; VAR_2 < 11; VAR_2++)
   {
      FUNC_2(((void*)0), &VAR_1, VAR_2, "test_skip");
      VAR_5 = FUNC_0(((void*)0), &VAR_1);
      if (VAR_5 + VAR_2 != VAR_4)
      {
         int32_t VAR_6 = VAR_4 - VAR_5;
         FUNC_5(((void*)0), "Tried to skip %u bit%s, actually skipped %d bit%s",
               VAR_2, FUNC_7(VAR_2), VAR_6, FUNC_7(VAR_6));
         VAR_3++;
      }
      VAR_4 = VAR_5;
   }

   FUNC_2(((void*)0), &VAR_1, 1, "Final bit");
   if (!FUNC_3(((void*)0), &VAR_1))
   {
      FUNC_5(((void*)0), "Failed to skip final bit");
      VAR_3++;
   }
   if (FUNC_0(((void*)0), &VAR_1))
   {
      FUNC_5(((void*)0), "End of stream not reached by skipping");
      VAR_3++;
   }

   FUNC_2(((void*)0), &VAR_1, 1, "Beyond final bit");
   if (FUNC_3(((void*)0), &VAR_1))
   {
      FUNC_5(((void*)0), "Unexpectedly succeeded skipping beyond expected end of stream");
      VAR_3++;
   }
   return VAR_3;
}
