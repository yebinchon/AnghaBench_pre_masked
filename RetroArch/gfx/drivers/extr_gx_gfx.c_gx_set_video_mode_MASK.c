
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int u16 ;
struct TYPE_16__ {unsigned int video_viwidth; int menu_rgui_aspect_ratio; } ;
struct TYPE_14__ {scalar_t__ video_vfilter; } ;
struct TYPE_17__ {TYPE_3__ uints; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_15__ {unsigned int full_width; unsigned int full_height; } ;
struct TYPE_18__ {int double_strike; int should_resize; int * framebuf; TYPE_2__ vp; } ;
typedef TYPE_5__ gx_video_t ;
typedef int f32 ;
struct TYPE_21__ {int viTVMode; unsigned int fbWidth; int efbHeight; int xfbHeight; unsigned int viWidth; unsigned int viHeight; int viXOrigin; int viYOrigin; int** sample_pattern; int* vfilter; void* field_rendering; void* aa; int xfbMode; } ;
struct TYPE_20__ {int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_19__ {unsigned int fbWidth; unsigned int xfbHeight; } ;
typedef TYPE_6__ GXRModeObj ;
typedef TYPE_7__ GXColor ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;


 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 () ;
 float FUNC_4 (int,unsigned int) ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_7__,int ) ;
 int FUNC_7 (void*,int**,int ,int*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,unsigned int,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (void*,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,unsigned int,int,int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (unsigned int,int) ;
 int VAR_8 ;
 int FUNC_15 (char*,unsigned int,int,char*) ;




 int FUNC_16 (TYPE_8__*,int ,int ) ;
 int FUNC_17 (TYPE_8__*) ;
 int FUNC_18 () ;
 unsigned int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (TYPE_6__*) ;
 int FUNC_22 () ;
 scalar_t__ FUNC_23 (unsigned int) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 () ;

 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;

 unsigned int VAR_18 ;
 unsigned int VAR_19 ;

 unsigned int VAR_20 ;
 int FUNC_28 (unsigned int,unsigned int) ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_4__* FUNC_29 () ;
 int FUNC_30 (int ,float*) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_31 (int) ;
 scalar_t__ FUNC_32 (int) ;
 TYPE_8__ VAR_25 ;
 scalar_t__ VAR_26 ;
 unsigned int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_33 (size_t) ;
 int FUNC_34 (unsigned int) ;
 int FUNC_35 (unsigned int) ;
 int * VAR_35 ;

__attribute__((used)) static void FUNC_36(void *VAR_36, unsigned VAR_37, unsigned VAR_38,
      bool VAR_39)
{
   int VAR_40;
   float VAR_41;
   bool VAR_42;
   unsigned VAR_43, VAR_44, VAR_45, VAR_46,
            VAR_47, VAR_48;
   size_t VAR_49 = 0;
   unsigned VAR_50 = 0;
   unsigned VAR_51 = 0;
   float VAR_52 = 0.0f;
   uint16_t VAR_53 = 0;
   uint16_t VAR_54 = 0;
   gx_video_t *VAR_55 = (gx_video_t*)VAR_36;
   settings_t *VAR_56 = FUNC_29();


   FUNC_26(((void*)0));
   VAR_24 = 0;



   do FUNC_27();
   while (!FUNC_20());

   FUNC_24(1);
   FUNC_18();
   VAR_44 = 1;
   VAR_45 = VAR_56->uints.video_viwidth;
   VAR_42 = FUNC_22();
   VAR_46 = FUNC_19();


   switch (VAR_46)
   {
      case 128:
         VAR_47 = VAR_17;
         VAR_34 = VAR_13;
         break;
      case 129:
         VAR_47 = VAR_15;
         VAR_34 = VAR_11;
         break;
      case 130:
         VAR_47 = VAR_14;
         VAR_34 = VAR_10;
         break;
      default:
         VAR_46 = VAR_19;
         VAR_47 = VAR_16;
         VAR_34 = VAR_12;
         break;
   }

   if (VAR_38 == 0 || VAR_37 == 0)
   {
      GXRModeObj VAR_57;
      FUNC_21(&VAR_57);
      VAR_37 = VAR_57.fbWidth;
      VAR_38 = VAR_57.xfbHeight;
   }

   if (VAR_38 <= VAR_34 / 2)
   {
      VAR_43 = VAR_18;
      VAR_44 = 2;
   }
   else
   {
      VAR_43 = VAR_42 ? VAR_20 : VAR_9;
   }

   if (VAR_38 > VAR_34)
      VAR_38 = VAR_34;

   if (VAR_37 > VAR_47)
      VAR_37 = VAR_47;

   VAR_25.viTVMode = FUNC_28(VAR_46, VAR_43);
   VAR_25.fbWidth = VAR_37;
   VAR_25.efbHeight = FUNC_14(VAR_38, 480);

   if (VAR_43 == VAR_18 && VAR_38 > VAR_34 / 2)
      VAR_25.xfbHeight = VAR_34 / 2;
   else if (VAR_43 != VAR_18 && VAR_38 > VAR_34)
      VAR_25.xfbHeight = VAR_34;
   else
      VAR_25.xfbHeight = VAR_38;

   VAR_25.viWidth = VAR_45;
   VAR_25.viHeight = VAR_25.xfbHeight * VAR_44;

   VAR_27 = VAR_26;
   if(VAR_27 > 0)
   {
      while(VAR_45 + VAR_27 > 720) VAR_27--;
   }
   else if(VAR_27 < 0)
   {
      while(VAR_45 + VAR_27 > 720) VAR_27++;
   }

   VAR_40 = (VAR_47 - VAR_25.viWidth) / 2;

   if(VAR_26 > 0)
   {
      while(!FUNC_31(VAR_40)) VAR_40--;
   }
   else if(VAR_26 < 0)
   {
      while(!FUNC_31(VAR_40)) VAR_40++;
   }

   VAR_25.viXOrigin = VAR_28 = VAR_40;
   VAR_25.viYOrigin = VAR_31 =
      (VAR_34 - VAR_25.viHeight) / (2 * VAR_44);

   VAR_29 = 0, VAR_30 = 0;
   while(FUNC_31(VAR_25.viXOrigin+(VAR_29-1))) VAR_29--;
   while(FUNC_31(VAR_25.viXOrigin+(VAR_30+1))) VAR_30++;
   VAR_32 = 0, VAR_33 = 0;
   while(FUNC_32(VAR_25.viYOrigin+(VAR_32-1))) VAR_32--;
   while(FUNC_32(VAR_25.viYOrigin+(VAR_33+1))) VAR_33++;

   VAR_25.xfbMode = VAR_43 == VAR_9 ? VAR_21 : VAR_22;
   VAR_25.field_rendering = VAR_3;
   VAR_25.aa = VAR_3;

   for (VAR_48 = 0; VAR_48 < 12; VAR_48++)
      VAR_25.sample_pattern[VAR_48][0] = VAR_25.sample_pattern[VAR_48][1] = 6;

   if (VAR_43 != VAR_18 && VAR_56->bools.video_vfilter)
   {
      VAR_25.vfilter[0] = 8;
      VAR_25.vfilter[1] = 8;
      VAR_25.vfilter[2] = 10;
      VAR_25.vfilter[3] = 12;
      VAR_25.vfilter[4] = 10;
      VAR_25.vfilter[5] = 8;
      VAR_25.vfilter[6] = 8;
   }
   else
   {
      VAR_25.vfilter[0] = 0;
      VAR_25.vfilter[1] = 0;
      VAR_25.vfilter[2] = 21;
      VAR_25.vfilter[3] = 22;
      VAR_25.vfilter[4] = 21;
      VAR_25.vfilter[5] = 0;
      VAR_25.vfilter[6] = 0;
   }

   VAR_55->vp.full_width = VAR_25.fbWidth;
   VAR_55->vp.full_height = VAR_25.xfbHeight;
   VAR_55->double_strike = (VAR_43 == VAR_18);
   VAR_55->should_resize = 1;




   VAR_51 = (VAR_25.efbHeight / (VAR_55->double_strike ? 1 : 2)) & ~3;
   if (VAR_51 > 240)
      VAR_51 = 240;






   switch (VAR_56->uints.menu_rgui_aspect_ratio)
   {
      case 132:
      case 131:
         if (VAR_51 == 240)
            VAR_50 = 424;
         else
            VAR_50 = (unsigned)((16.0f / 9.0f) * (float)VAR_51) & ~3;
         break;
      case 134:
      case 133:
         if (VAR_51 == 240)
            VAR_50 = 384;
         else
            VAR_50 = (unsigned)((16.0f / 10.0f) * (float)VAR_51) & ~3;
         break;
      default:

         if (VAR_51 == 240)
            VAR_50 = 320;
         else
            VAR_50 = (unsigned)((4.0f / 3.0f) * (float)VAR_51) & ~3;
         break;
   }
   if (VAR_50 > 424)
      VAR_50 = 424;

   VAR_49 = VAR_50 * 2;

   FUNC_35(VAR_50);
   FUNC_34(VAR_51);
   FUNC_33(VAR_49);

   FUNC_13(0, 0, VAR_25.fbWidth, VAR_25.efbHeight, 0, 1, 1);
   FUNC_9(0, 0, VAR_25.fbWidth, VAR_25.efbHeight);

   VAR_52 = FUNC_4(VAR_25.efbHeight, VAR_25.xfbHeight);
   VAR_53 = FUNC_23(VAR_25.fbWidth);
   VAR_54 = FUNC_10((f32)VAR_52);
   FUNC_8((u16)VAR_53, (u16)VAR_54);

   FUNC_7(VAR_25.aa, VAR_25.sample_pattern,
         VAR_6, VAR_25.vfilter);
   GXColor VAR_58 = { 0, 0, 0, 0xff };
   FUNC_6(VAR_58, VAR_4);
   FUNC_11(VAR_25.field_rendering,
         (VAR_25.viHeight == 2 * VAR_25.xfbHeight) ? VAR_2 : VAR_1);
   FUNC_12(VAR_5, VAR_7);
   FUNC_5();
   FUNC_3();


   FUNC_17(&VAR_25);
   FUNC_16(&VAR_25, VAR_55->framebuf[0], VAR_0);
   FUNC_16(&VAR_25, VAR_55->framebuf[1], VAR_0);
   FUNC_25(VAR_55->framebuf[0]);
   VAR_23 = 0;

   FUNC_26(VAR_35);
   FUNC_24(0);
   FUNC_18();
   FUNC_27();

   FUNC_15("[GX]: Resolution: %dx%d (%s)\n", VAR_25.fbWidth,
         VAR_25.efbHeight, (VAR_25.viTVMode & 3) == VAR_9
         ? "interlaced" : "progressive");

   if (VAR_46 == 128)
   {
      VAR_41 = 50.0f;
      if (VAR_43 == VAR_18)
         VAR_41 = 50.0801f;
   }
   else
   {
      VAR_41 = 59.94f;
      if (VAR_43 == VAR_18)
         VAR_41 = 59.8261f;
   }

   FUNC_30(VAR_8, &VAR_41);
}
