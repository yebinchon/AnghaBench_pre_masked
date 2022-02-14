
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int buffer ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *,int *,int,int *,char*) ;
 int FUNC_1 (int *,int *,int *,int) ;
 int FUNC_2 (int *,int *,int,char*) ;
 int FUNC_3 (int *,int *,int,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int * VAR_0 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int ,int) ;

__attribute__((used)) static int FUNC_10(void)
{
   VC_CONTAINER_BITS_T VAR_1;
   int VAR_2 = 0;
   uint8_t VAR_3[FUNC_7(VAR_0)];
   uint32_t VAR_4;

   FUNC_5(((void*)0), "Testing vc_container_bits_copy_bytes");
   FUNC_1(((void*)0), &VAR_1, VAR_0, FUNC_7(VAR_0));
   FUNC_9(VAR_3, 0, sizeof(VAR_3));


   FUNC_0(((void*)0), &VAR_1, FUNC_7(VAR_3), VAR_3, "Copy whole buffer");

   if (!FUNC_4(((void*)0), &VAR_1))
   {
      FUNC_6(((void*)0), "Failed to copy the whole buffer");
      VAR_2++;
   }

   if (FUNC_8(VAR_3, VAR_0, FUNC_7(VAR_0)) != 0)
   {
      FUNC_6(((void*)0), "Single copy doesn't match original");
      VAR_2++;
   }

   FUNC_1(((void*)0), &VAR_1, VAR_0, FUNC_7(VAR_0));
   FUNC_9(VAR_3, 0, sizeof(VAR_3));


   for (VAR_4 = 0; VAR_4 < FUNC_7(VAR_0); VAR_4++)
   {
      FUNC_0(((void*)0), &VAR_1, 1, VAR_3 + VAR_4, "Copy buffer piecemeal");
   }

   if (!FUNC_4(((void*)0), &VAR_1))
   {
      FUNC_6(((void*)0), "Failed to copy the buffer piecemeal");
      VAR_2++;
   }

   if (FUNC_8(VAR_3, VAR_0, FUNC_7(VAR_0)) != 0)
   {
      FUNC_6(((void*)0), "Multiple copy doesn't match original");
      VAR_2++;
   }

   FUNC_1(((void*)0), &VAR_1, VAR_0, FUNC_7(VAR_0));
   FUNC_9(VAR_3, 0, sizeof(VAR_3));


   FUNC_3(((void*)0), &VAR_1, 1, "Copy part of buffer");
   FUNC_2(((void*)0), &VAR_1, 1, "Copy part of buffer");
   FUNC_0(((void*)0), &VAR_1, FUNC_7(VAR_3) - 2, VAR_3, "Copy part of buffer");

   if (!FUNC_4(((void*)0), &VAR_1))
   {
      FUNC_6(((void*)0), "Failed to copy part of buffer");
      VAR_2++;
   }

   if (FUNC_8(VAR_3, VAR_0 + 1, FUNC_7(VAR_0) - 2) != 0)
   {
      FUNC_6(((void*)0), "Partial copy doesn't match original");
      VAR_2++;
   }

   return VAR_2;
}
