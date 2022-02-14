
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int outputwidth ;
typedef int outputheight ;
struct TYPE_7__ {scalar_t__ id; int (* GetGlSize ) (int*,int*) ;} ;
struct TYPE_6__ {int UsecFrac; int CurSH2FreqType; int IsPal; int MaxLineCount; int VBlankLineCount; int LineCount; int DecilineCount; } ;
struct TYPE_5__ {int size; scalar_t__ done; } ;
typedef TYPE_1__ IOCheck_struct ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (int ,int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int *,int,int) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int,int) ;
 scalar_t__ FUNC_10 (int *,char*,int*,int*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_4__* VAR_13 ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (int ,void*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int VAR_16 ;
 int FUNC_16 (int*) ;
 int FUNC_17 (int *,int,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int,int,int ,int ,int*) ;
 int FUNC_20 (float,float) ;
 int FUNC_21 (int ,int) ;
 scalar_t__ FUNC_22 (int) ;
 scalar_t__ FUNC_23 (char*,char*,int) ;
 int FUNC_24 (int*,int*) ;
 TYPE_3__ VAR_17 ;
 int FUNC_25 (TYPE_1__*,void*,int,int,int *) ;

int FUNC_26(FILE *VAR_18)
{
   char VAR_19[3];
   u8 VAR_20;
   int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
   IOCheck_struct VAR_26;
   u8* VAR_27;
   int VAR_28;
   int VAR_29;
   int VAR_30;
   int VAR_31;
   int VAR_32;
   int VAR_33;
   int VAR_34;
   u32 VAR_35;
   int VAR_36;

   VAR_25 = 0xC;
   VAR_26.done = 0;
   VAR_26.size = 0;


   FUNC_25(&VAR_26, (void *)VAR_19, 1, 3, VAR_18);

   if (FUNC_23(VAR_19, "YSS", 3) != 0)
   {
      return -2;
   }


   FUNC_25(&VAR_26, (void *)&VAR_20, 1, 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_21, 4, 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_23, 4, 1, VAR_18);
   switch(VAR_21)
   {
      case 1:

         break;
      case 2:

         FUNC_25(&VAR_26, (void *)&VAR_16, 4, 1, VAR_18);
   VAR_33=FUNC_18(VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_33, 4, 1, VAR_18);
         VAR_25 = 0x14;
         break;
      default:


         return -3;
         break;
   }




   VAR_36 = VAR_20 == 0;

   if (VAR_36)
   {

      FUNC_13(VAR_15, (void *)"Load State byteswapping not supported");
      return -3;
   }


   FUNC_17(VAR_18, 0, VAR_8);

   if (VAR_23 != (FUNC_18(VAR_18) - VAR_25))
   {
      return -2;
   }
   FUNC_17(VAR_18, VAR_25, VAR_9);



   FUNC_5(VAR_7);

   if (FUNC_10(VAR_18, "CART", &VAR_22, &VAR_24) != 0)
   {

      FUNC_6(VAR_7);
      return -3;
   }
   FUNC_0(VAR_18, VAR_22, VAR_24);

   if (FUNC_10(VAR_18, "CS2 ", &VAR_22, &VAR_24) != 0)
   {

      FUNC_6(VAR_7);
      return -3;
   }
   FUNC_1(VAR_18, VAR_22, VAR_24);

   if (FUNC_10(VAR_18, "MSH2", &VAR_22, &VAR_24) != 0)
   {

      FUNC_6(VAR_7);
      return -3;
   }
   FUNC_4(VAR_5, VAR_18, VAR_22, VAR_24);

   if (FUNC_10(VAR_18, "SSH2", &VAR_22, &VAR_24) != 0)
   {

      FUNC_6(VAR_7);
      return -3;
   }
   FUNC_4(VAR_10, VAR_18, VAR_22, VAR_24);

   if (FUNC_10(VAR_18, "SCSP", &VAR_22, &VAR_24) != 0)
   {

      FUNC_6(VAR_7);
      return -3;
   }
   FUNC_9(VAR_18, VAR_22, VAR_24);

   if (FUNC_10(VAR_18, "SCU ", &VAR_22, &VAR_24) != 0)
   {

      FUNC_6(VAR_7);
      return -3;
   }
   FUNC_7(VAR_18, VAR_22, VAR_24);

   if (FUNC_10(VAR_18, "SMPC", &VAR_22, &VAR_24) != 0)
   {

      FUNC_6(VAR_7);
      return -3;
   }
   FUNC_8(VAR_18, VAR_22, VAR_24);

   if (FUNC_10(VAR_18, "VDP1", &VAR_22, &VAR_24) != 0)
   {

      FUNC_6(VAR_7);
      return -3;
   }
   FUNC_11(VAR_18, VAR_22, VAR_24);

   if (FUNC_10(VAR_18, "VDP2", &VAR_22, &VAR_24) != 0)
   {

      FUNC_6(VAR_7);
      return -3;
   }
   FUNC_12(VAR_18, VAR_22, VAR_24);

   if (FUNC_10(VAR_18, "OTHR", &VAR_22, &VAR_24) != 0)
   {

      FUNC_6(VAR_7);
      return -3;
   }

   FUNC_25(&VAR_26, (void *)VAR_0, 0x10000, 1, VAR_18);
   FUNC_25(&VAR_26, (void *)VAR_3, 0x100000, 1, VAR_18);
   FUNC_25(&VAR_26, (void *)VAR_4, 0x100000, 1, VAR_18);

   FUNC_25(&VAR_26, (void *)&VAR_17.DecilineCount, sizeof(int), 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_17.LineCount, sizeof(int), 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_17.VBlankLineCount, sizeof(int), 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_17.MaxLineCount, sizeof(int), 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_34, sizeof(int), 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_34, sizeof(int), 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_35, sizeof(u32), 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_17.CurSH2FreqType, sizeof(int), 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_17.IsPal, sizeof(int), 1, VAR_18);
   FUNC_14(VAR_17.CurSH2FreqType);
   VAR_17.UsecFrac = (VAR_35 << VAR_14) * VAR_34 / 10;

   if (VAR_21 > 1) {

   FUNC_25(&VAR_26, (void *)&VAR_29, sizeof(VAR_29), 1, VAR_18);
   FUNC_25(&VAR_26, (void *)&VAR_30, sizeof(VAR_30), 1, VAR_18);

   VAR_28=VAR_29 * VAR_30 * sizeof(u32);

   if ((VAR_27 = (u8 *)FUNC_22(VAR_28)) == ((void*)0))
   {
      return -2;
   }

   FUNC_25(&VAR_26, (void *)VAR_27, VAR_28, 1, VAR_18);

   FUNC_15();
   VAR_13->GetGlSize(&VAR_31, &VAR_32);




   FUNC_15();
   FUNC_16(VAR_27);

   FUNC_17(VAR_18, VAR_33, VAR_9);
   FUNC_2(VAR_18);
   }

   FUNC_6(VAR_7);

   FUNC_3(VAR_6, 150, "STATE LOADED");

   return 0;
}
