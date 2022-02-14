
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int height; } ;
struct vc_data {size_t vc_num; scalar_t__ vc_mode; int vc_top; scalar_t__ vc_bottom; scalar_t__ vc_rows; int vc_origin; int vc_size_row; int vc_cols; TYPE_3__ vc_font; } ;
struct TYPE_6__ {int yoffset; scalar_t__ xoffset; } ;
struct fbcon_ops {int (* update_start ) (struct fb_info*) ;TYPE_2__ var; } ;
struct TYPE_5__ {int vmode; } ;
struct fb_info {TYPE_1__ var; struct fbcon_ops* fbcon_par; } ;
struct display {int yscroll; int vrows; int scrollmode; } ;
struct TYPE_8__ {struct vc_data* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;



 size_t* VAR_7 ;
 struct display* VAR_8 ;
 int FUNC_0 (struct vc_data*,int) ;
 scalar_t__ FUNC_1 (struct vc_data*,struct fb_info*) ;
 int FUNC_2 (struct vc_data*,struct display*,int) ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 struct fb_info** VAR_12 ;
 int FUNC_3 (int *,int *,unsigned long) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 long VAR_20 ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct vc_data*,int,int) ;
 TYPE_4__* VAR_21 ;

__attribute__((used)) static int FUNC_6(struct vc_data *VAR_22, int VAR_23)
{
 struct fb_info *VAR_24 = VAR_12[VAR_7[VAR_9]];
 struct fbcon_ops *VAR_25 = VAR_24->fbcon_par;
 struct display *VAR_26 = &VAR_8[VAR_9];
 int VAR_27, VAR_28, VAR_29;

 if (VAR_20) {
  if (VAR_22->vc_num != VAR_9)
   return 0;
  if (VAR_22->vc_mode != VAR_6 || !VAR_23)
   return 0;
  if (VAR_11 >= 0) {
   struct vc_data *VAR_30 = VAR_21[VAR_11].d;

   if (VAR_30->vc_top == VAR_10
       && VAR_30->vc_bottom == VAR_30->vc_rows)
    VAR_30->vc_top = 0;
   if (VAR_11 == VAR_22->vc_num) {
    unsigned long VAR_31, VAR_32;
    int VAR_33;

    VAR_31 = VAR_19;
    VAR_32 = VAR_22->vc_origin +
        VAR_10 * VAR_22->vc_size_row;
    for (VAR_33 = 0; VAR_33 < VAR_10; VAR_33++) {
     if (VAR_31 == VAR_20)
      break;
     if (VAR_31 == VAR_16)
      VAR_31 = VAR_18;
     VAR_31 -= VAR_22->vc_size_row;
     VAR_32 -= VAR_22->vc_size_row;
     FUNC_3((u16 *) VAR_32, (u16 *) VAR_31,
          VAR_22->vc_size_row);
    }
    VAR_19 = VAR_17 = VAR_31;
    FUNC_5(VAR_22, VAR_22->vc_origin,
           VAR_10 * VAR_22->vc_cols);
   }
   VAR_11 = VAR_4;
  }
  FUNC_0(VAR_22, VAR_1 | VAR_2);
  FUNC_2(VAR_22, VAR_26, VAR_23);
  FUNC_0(VAR_22, VAR_0 | VAR_2);
  return 0;
 }

 if (!VAR_15)
  return -VAR_3;

 VAR_29 = VAR_13;
 VAR_13 -= VAR_23;
 if (VAR_13 < 0)
  VAR_13 = 0;
 else if (VAR_13 > VAR_14)
  VAR_13 = VAR_14;
 if (VAR_13 == VAR_29)
  return 0;

 if (FUNC_1(VAR_22, VAR_24))
  return 0;

 FUNC_0(VAR_22, VAR_1);

 VAR_27 = VAR_26->yscroll - VAR_13;
 VAR_28 = VAR_26->vrows;
 switch (VAR_26->scrollmode) {
 case 128:
  VAR_24->var.vmode |= VAR_5;
  break;
 case 130:
 case 129:
  VAR_28 -= VAR_22->vc_rows;
  VAR_24->var.vmode &= ~VAR_5;
  break;
 }
 if (VAR_27 < 0)
  VAR_27 += VAR_28;
 else if (VAR_27 >= VAR_28)
  VAR_27 -= VAR_28;

 VAR_25->var.xoffset = 0;
 VAR_25->var.yoffset = VAR_27 * VAR_22->vc_font.height;
 VAR_25->update_start(VAR_24);

 if (!VAR_13)
  FUNC_0(VAR_22, VAR_0);
 return 0;
}
