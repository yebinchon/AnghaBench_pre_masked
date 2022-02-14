
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int outputwidth ;
typedef int outputheight ;
typedef int movieposition ;
typedef int i ;
struct TYPE_8__ {int (* GetGlSize ) (int*,int*) ;} ;
struct TYPE_7__ {int DecilineStop; scalar_t__ CurSH2FreqType; int UsecFrac; int IsPal; int MaxLineCount; int VBlankLineCount; int LineCount; int DecilineCount; } ;
struct TYPE_6__ {scalar_t__ size; scalar_t__ done; } ;
typedef TYPE_1__ IOCheck_struct ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_10 ;
 int FUNC_4 (int *,TYPE_1__) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char*,int) ;
 TYPE_4__* VAR_11 ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_12 ;
 int FUNC_12 () ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int,int *) ;
 int VAR_13 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ,int,int,int ,int ,int *) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (int*,int*) ;
 TYPE_3__ VAR_14 ;
 int FUNC_23 (TYPE_1__*,void*,int,int,int *) ;

int FUNC_24(FILE *VAR_15)
{
   u32 VAR_16;
   int VAR_17;
   IOCheck_struct VAR_18;
   u8 *VAR_19;
   int VAR_20;
   int VAR_21;
   int VAR_22;
   int VAR_23;
   int VAR_24;
   u32 VAR_25;

   VAR_18.done = 0;
   VAR_18.size = 0;


   FUNC_13(VAR_15, "YSS");





   FUNC_14(0x01, VAR_15);



   VAR_16 = 2;
   FUNC_23(&VAR_18, (void *)&VAR_16, sizeof(VAR_16), 1, VAR_15);


   VAR_16 = 0;
   FUNC_23(&VAR_18, (void *)&VAR_16, sizeof(VAR_16), 1, VAR_15);


   FUNC_23(&VAR_18, (void *)&VAR_13, 4, 1, VAR_15);


   FUNC_23(&VAR_18, (void *)&VAR_13, 4, 1, VAR_15);


   VAR_16 += FUNC_0(VAR_15);
   VAR_16 += FUNC_1(VAR_15);
   VAR_16 += FUNC_3(VAR_7, VAR_15);
   VAR_16 += FUNC_3(VAR_10, VAR_15);
   VAR_16 += FUNC_7(VAR_15);
   VAR_16 += FUNC_5(VAR_15);
   VAR_16 += FUNC_6(VAR_15);
   VAR_16 += FUNC_10(VAR_15);
   VAR_16 += FUNC_11(VAR_15);

   VAR_17 = FUNC_9(VAR_15, "OTHR", 1);


   FUNC_23(&VAR_18, (void *)VAR_0, 0x10000, 1, VAR_15);
   FUNC_23(&VAR_18, (void *)VAR_5, 0x100000, 1, VAR_15);
   FUNC_23(&VAR_18, (void *)VAR_6, 0x100000, 1, VAR_15);

   FUNC_23(&VAR_18, (void *)&VAR_14.DecilineCount, sizeof(int), 1, VAR_15);
   FUNC_23(&VAR_18, (void *)&VAR_14.LineCount, sizeof(int), 1, VAR_15);
   FUNC_23(&VAR_18, (void *)&VAR_14.VBlankLineCount, sizeof(int), 1, VAR_15);
   FUNC_23(&VAR_18, (void *)&VAR_14.MaxLineCount, sizeof(int), 1, VAR_15);
   VAR_24 = VAR_14.DecilineStop >> VAR_12;
   FUNC_23(&VAR_18, (void *)&VAR_24, sizeof(int), 1, VAR_15);
   VAR_24 = (VAR_14.CurSH2FreqType == VAR_1) ? 268 : 286;
   FUNC_23(&VAR_18, (void *)&VAR_24, sizeof(int), 1, VAR_15);
   VAR_25 = (VAR_14.UsecFrac * VAR_24 / 10) >> VAR_12;
   FUNC_23(&VAR_18, (void *)&VAR_25, sizeof(u32), 1, VAR_15);
   FUNC_23(&VAR_18, (void *)&VAR_14.CurSH2FreqType, sizeof(int), 1, VAR_15);
   FUNC_23(&VAR_18, (void *)&VAR_14.IsPal, sizeof(int), 1, VAR_15);

   VAR_11->GetGlSize(&VAR_21, &VAR_22);

   VAR_20=VAR_21 * VAR_22 * sizeof(u32);

   if ((VAR_19 = (u8 *)FUNC_21(VAR_20)) == ((void*)0))
   {
      return -2;
   }

   FUNC_12();





   FUNC_12();

   FUNC_23(&VAR_18, (void *)&VAR_21, sizeof(VAR_21), 1, VAR_15);
   FUNC_23(&VAR_18, (void *)&VAR_22, sizeof(VAR_22), 1, VAR_15);

   FUNC_23(&VAR_18, (void *)VAR_19, VAR_20, 1, VAR_15);

   VAR_23=FUNC_17(VAR_15);

   FUNC_4(VAR_15, VAR_18);

   VAR_16 += FUNC_8(VAR_15, VAR_17);


   FUNC_16(VAR_15, 8, VAR_9);
   FUNC_23(&VAR_18, (void *)&VAR_16, sizeof(VAR_16), 1, VAR_15);
   FUNC_16(VAR_15, 16, VAR_9);
   FUNC_23(&VAR_18, (void *)&VAR_23, sizeof(VAR_23), 1, VAR_15);

   FUNC_15(VAR_19);

   FUNC_2(VAR_8, 150, "STATE SAVED");

   return 0;
}
