
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint32_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__ const*,int,size_t,int *) ;
 int FUNC_4 (scalar_t__ const*) ;
 int FUNC_5 (int *,int ,int ) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__ const*,int,size_t,int *) ;
 scalar_t__ FUNC_8 (size_t) ;

__attribute__((used)) static void FUNC_9(void)
{
   FILE* VAR_2 = FUNC_2("sdmc:/3ds/dspfirm.cdc", "rb");

   if (VAR_2)
      FUNC_1(VAR_2);
   else
   {
      FILE *VAR_3 = FUNC_2("sdmc:/3ds/code.bin", "rb");

      if (VAR_3)
      {
         size_t VAR_4;
         uint32_t* VAR_5 = ((void*)0);

         FUNC_5(VAR_3, 0, VAR_0);
         VAR_4 = FUNC_6(VAR_3);
         FUNC_5(VAR_3, 0, VAR_1);

         VAR_5 = (uint32_t*) FUNC_8(VAR_4);

         if (VAR_5)
         {
            uint32_t *VAR_6 = ((void*)0);

            FUNC_3(VAR_5, 1, VAR_4, VAR_3);

            for (VAR_6 = VAR_5 + 0x40;
                 VAR_6 < (VAR_5 + (VAR_4 >> 2)); VAR_6++)
            {
               const uint32_t VAR_7 = 0x31505344;
               if (*VAR_6 == VAR_7)
               {
                  size_t VAR_8 = VAR_6[1];
                  VAR_6 -= 0x40;
                  if ((VAR_6 + (VAR_8 >> 2)) >
                        (VAR_5 + (VAR_4 >> 2)))
                     break;

                  VAR_2 = FUNC_2("sdmc:/3ds/dspfirm.cdc", "wb");
                  if (!VAR_2)
                     break;
                  FUNC_7(VAR_6, 1, VAR_8, VAR_2);
                  FUNC_1(VAR_2);
                  break;
               }
            }
            FUNC_4(VAR_5);
         }
         FUNC_1(VAR_3);
      }
      else
      {
         FUNC_0("\n");
         FUNC_0("\n");
         FUNC_0("Warning:\n");
         FUNC_0("3DS DSP dump is missing.\n");
         FUNC_0("A working DSP dump is required\n");
         FUNC_0("for correct operation.\n");
         FUNC_0("\n");
         FUNC_0("\n");
      }
   }
}
