
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct resource {char* name; int start; int end; } ;
struct TYPE_7__ {char const* (* con_startup ) () ;} ;
struct TYPE_6__ {scalar_t__ orig_video_isVGA; int orig_video_mode; scalar_t__ orig_video_lines; int orig_video_cols; int orig_video_ega_bx; int orig_video_points; } ;
struct TYPE_5__ {int * vgabase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int* VAR_18 ;
 TYPE_3__* VAR_19 ;
 int* VAR_20 ;
 int* VAR_21 ;
 int* VAR_22 ;
 TYPE_3__ VAR_23 ;
 int FUNC_1 (int ) ;
 int VAR_24 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct resource*) ;
 int FUNC_4 (int volatile*) ;
 int FUNC_5 (int,int volatile*) ;
 TYPE_2__ VAR_25 ;
 TYPE_1__ VAR_26 ;
 char const* FUNC_6 () ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_7 () ;
 int VAR_42 ;
 int VAR_43 ;

__attribute__((used)) static const char *FUNC_8(void)
{
 const char *VAR_44 = ((void*)0);
 u16 VAR_45, VAR_46;
 volatile u16 *VAR_47;

 if (VAR_25.orig_video_isVGA == VAR_17 ||
     VAR_25.orig_video_isVGA == VAR_12) {
       no_vga:




  return ((void*)0);

 }


 if ((VAR_25.orig_video_mode == 0) &&
     (VAR_25.orig_video_lines == 0) &&
     (VAR_25.orig_video_cols == 0))
  goto no_vga;


 if ((VAR_25.orig_video_mode == 0x0D) ||
     (VAR_25.orig_video_mode == 0x0E) ||
     (VAR_25.orig_video_mode == 0x10) ||
     (VAR_25.orig_video_mode == 0x12) ||
     (VAR_25.orig_video_mode == 0x6A))
  goto no_vga;

 VAR_35 = VAR_25.orig_video_lines;
 VAR_34 = VAR_25.orig_video_cols;
 VAR_26.vgabase = ((void*)0);

 if (VAR_25.orig_video_mode == 7) {

  VAR_39 = 0xb0000;
  VAR_36 = VAR_4;
  VAR_37 = VAR_2;
  if ((VAR_25.orig_video_ega_bx & 0xff) != 0x10) {
   static struct resource VAR_48 =
       { .name = "ega", .start = 0x3B0, .end = 0x3BF };
   VAR_38 = VAR_14;
   VAR_41 = 0x8000;
   VAR_44 = "EGA+";
   FUNC_3(&VAR_24,
      &VAR_48);
  } else {
   static struct resource VAR_49 =
       { .name = "mda", .start = 0x3B0, .end = 0x3BB };
   static struct resource VAR_50 =
       { .name = "mda", .start = 0x3BF, .end = 0x3BF };
   VAR_38 = VAR_15;
   VAR_41 = 0x2000;
   VAR_44 = "*MDA";
   FUNC_3(&VAR_24,
      &VAR_49);
   FUNC_3(&VAR_24,
      &VAR_50);
   VAR_33 = 14;
  }
 } else {

  VAR_27 = 1;
  VAR_39 = 0xb8000;
  VAR_36 = VAR_3;
  VAR_37 = VAR_1;
  if ((VAR_25.orig_video_ega_bx & 0xff) != 0x10) {
   int VAR_51;

   VAR_41 = 0x8000;

   if (!VAR_25.orig_video_isVGA) {
    static struct resource VAR_52
        = { .name = "ega", .start = 0x3C0, .end = 0x3DF };
    VAR_38 = VAR_13;
    VAR_44 = "EGA";
    FUNC_3(&VAR_24,
       &VAR_52);
   } else {
    static struct resource VAR_53
        = { .name = "vga+", .start = 0x3C0, .end = 0x3DF };
    VAR_38 = VAR_16;
    VAR_44 = "VGA+";
    FUNC_3(&VAR_24,
       &VAR_53);
    for (VAR_51 = 0; VAR_51 < 16; VAR_51++) {
     FUNC_1(VAR_8);
     FUNC_2(VAR_51, VAR_0);
     FUNC_2(VAR_51, VAR_0);
    }
    FUNC_2(0x20, VAR_0);





    for (VAR_51 = 0; VAR_51 < 16; VAR_51++) {
     FUNC_2(VAR_18[VAR_51], VAR_10);
     FUNC_2(VAR_22[VAR_51], VAR_9);
     FUNC_2(VAR_21[VAR_51], VAR_9);
     FUNC_2(VAR_20[VAR_51], VAR_9);
    }
   }
  } else {
   static struct resource VAR_54 =
       { .name = "cga", .start = 0x3D4, .end = 0x3D5 };
   VAR_38 = VAR_11;
   VAR_41 = 0x2000;
   VAR_44 = "*CGA";
   FUNC_3(&VAR_24,
      &VAR_54);
   VAR_33 = 8;
  }
 }

 VAR_39 = FUNC_0(VAR_39, VAR_41);
 VAR_40 = VAR_39 + VAR_41;





 VAR_47 = (volatile u16 *) VAR_39;
 VAR_45 = FUNC_4(VAR_47);
 VAR_46 = FUNC_4(VAR_47 + 1);
 FUNC_5(0xAA55, VAR_47);
 FUNC_5(0x55AA, VAR_47 + 1);
 if (FUNC_4(VAR_47) != 0xAA55 || FUNC_4(VAR_47 + 1) != 0x55AA) {
  FUNC_5(VAR_45, VAR_47);
  FUNC_5(VAR_46, VAR_47 + 1);
  goto no_vga;
 }
 FUNC_5(0x55AA, VAR_47);
 FUNC_5(0xAA55, VAR_47 + 1);
 if (FUNC_4(VAR_47) != 0x55AA || FUNC_4(VAR_47 + 1) != 0xAA55) {
  FUNC_5(VAR_45, VAR_47);
  FUNC_5(VAR_46, VAR_47 + 1);
  goto no_vga;
 }
 FUNC_5(VAR_45, VAR_47);
 FUNC_5(VAR_46, VAR_47 + 1);

 if (VAR_38 == VAR_13
     || VAR_38 == VAR_16
     || VAR_38 == VAR_14) {
  VAR_29 = VAR_30;
  VAR_28 = VAR_25.orig_video_points;
  VAR_33 = VAR_25.orig_video_points;

  VAR_32 =
      VAR_33 * VAR_35;
 }

 VAR_42 = VAR_25.orig_video_cols * VAR_5;
 VAR_43 = VAR_32;

 if (!VAR_31) {
  FUNC_7();
  VAR_31 = 1;
 }

 return VAR_44;
}
