
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgastate {int vgabase; } ;
struct vc_data {int vc_hi_font_mask; int * vc_sw; } ;
struct TYPE_2__ {struct vc_data* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned short) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 TYPE_1__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char FUNC_7 (char*) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (char,char*) ;
 int FUNC_11 (int ,int ,int) ;

__attribute__((used)) static int FUNC_12(struct vgastate *VAR_23,char *VAR_24,int VAR_25,int VAR_26)
{
 unsigned short VAR_27 = VAR_21 + 6;
 int VAR_28 = 0x00, VAR_29, VAR_30;
 char *VAR_31;

 if (VAR_22 != VAR_11) {
  VAR_31 = (char *) FUNC_0(VAR_15, 0);
  VAR_29 = 0x0e;




 } else {
  VAR_31 = (char *) FUNC_0(VAR_13, 0);
  VAR_29 = 0x0a;
 }
 if (VAR_25) {
  VAR_19 = !VAR_24;
  if (!VAR_24)
   VAR_26 = 0;
  VAR_28 = VAR_24 ? (VAR_26 ? 0x0e : 0x0a) : 0x00;
 }

 if (!VAR_19)
  VAR_31 += 4 * VAR_14;


 FUNC_6();
 FUNC_4(&VAR_20);

 FUNC_11(VAR_23->vgabase, VAR_10, 0x1);

 FUNC_11(VAR_23->vgabase, VAR_9, 0x04);

 FUNC_11(VAR_23->vgabase, VAR_8, 0x07);

 FUNC_11(VAR_23->vgabase, VAR_10, 0x03);


 FUNC_9(VAR_23->vgabase, VAR_6, 0x02);

 FUNC_9(VAR_23->vgabase, VAR_5, 0x00);

 FUNC_9(VAR_23->vgabase, VAR_4, 0x00);
 FUNC_5(&VAR_20);

 if (VAR_24) {
  if (VAR_25)
   for (VAR_30 = 0; VAR_30 < VAR_14; VAR_30++) {
    FUNC_10(VAR_24[VAR_30], VAR_31 + VAR_30);
    FUNC_1();
   }
  else
   for (VAR_30 = 0; VAR_30 < VAR_14; VAR_30++) {
    VAR_24[VAR_30] = FUNC_7(VAR_31 + VAR_30);
    FUNC_1();
   }






  if (VAR_26) {
   VAR_31 += 2 * VAR_14;
   VAR_24 += VAR_14;
   if (VAR_25)
    for (VAR_30 = 0; VAR_30 < VAR_14; VAR_30++) {
     FUNC_10(VAR_24[VAR_30], VAR_31 + VAR_30);
     FUNC_1();
    }
   else
    for (VAR_30 = 0; VAR_30 < VAR_14; VAR_30++) {
     VAR_24[VAR_30] = FUNC_7(VAR_31 + VAR_30);
     FUNC_1();
    }
  }
 }

 FUNC_4(&VAR_20);

 FUNC_11(VAR_23->vgabase, VAR_10, 0x01);

 FUNC_11(VAR_23->vgabase, VAR_9, 0x03);

 FUNC_11(VAR_23->vgabase, VAR_8, 0x03);

 if (VAR_25)
  FUNC_11(VAR_23->vgabase, VAR_7, VAR_28);

 FUNC_11(VAR_23->vgabase, VAR_10, 0x03);


 FUNC_9(VAR_23->vgabase, VAR_6, 0x00);

 FUNC_9(VAR_23->vgabase, VAR_5, 0x10);

 FUNC_9(VAR_23->vgabase, VAR_4, VAR_29);


 if ((VAR_25) && (VAR_26 != VAR_17)) {

  for (VAR_30 = 0; VAR_30 < VAR_1; VAR_30++) {
   struct vc_data *VAR_32 = VAR_16[VAR_30].d;
   if (VAR_32 && VAR_32->vc_sw == &VAR_18)
    VAR_32->vc_hi_font_mask = VAR_26 ? 0x0800 : 0;
  }
  VAR_17 = VAR_26;


  FUNC_2(VAR_27);

  FUNC_8(VAR_23->vgabase, VAR_3, VAR_26 ? 0x07 : 0x0f);


  FUNC_2(VAR_27);
  FUNC_8(VAR_23->vgabase, VAR_2, 0);
 }
 FUNC_5(&VAR_20);
 FUNC_3();
 return 0;
}
