
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; int vc_rows; int vc_cols; int vc_size_row; int vc_video_erase_char; int vc_origin; } ;
struct fb_info {int flags; } ;
struct display {int vrows; int yscroll; int scrollmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 size_t* VAR_4 ;
 struct display* VAR_5 ;
 int FUNC_0 (struct vc_data*,int,int ,int,int ,int,int) ;
 int FUNC_1 (struct vc_data*,int,int ,int,int) ;
 int FUNC_2 (struct vc_data*,int ) ;
 scalar_t__ FUNC_3 (struct vc_data*,struct fb_info*) ;
 int FUNC_4 (struct vc_data*,struct display*,int,int,int) ;
 int FUNC_5 (struct vc_data*,struct fb_info*,struct display*,int,int,int) ;
 int FUNC_6 (struct vc_data*,struct display*,int,int,int) ;
 int FUNC_7 (struct vc_data*,int,int) ;
 int VAR_6 ;
 struct fb_info** VAR_7 ;
 int FUNC_8 (unsigned short*,int ,int) ;
 int VAR_8 ;
 int FUNC_9 (struct vc_data*,int) ;
 int FUNC_10 (struct vc_data*,int,int) ;
 int FUNC_11 (struct vc_data*,int) ;
 int FUNC_12 (struct vc_data*,int,int) ;
 int FUNC_13 (struct vc_data*,int) ;
 int FUNC_14 (struct vc_data*,int) ;

__attribute__((used)) static int FUNC_15(struct vc_data *VAR_9, int VAR_10, int VAR_11, int VAR_12,
   int VAR_13)
{
 struct fb_info *VAR_14 = VAR_7[VAR_4[VAR_9->vc_num]];
 struct display *VAR_15 = &VAR_5[VAR_9->vc_num];
 int VAR_16 = VAR_14->flags & VAR_2;

 if (FUNC_3(VAR_9, VAR_14))
  return -VAR_1;

 FUNC_2(VAR_9, VAR_0);







 switch (VAR_12) {
 case 128:
  if (VAR_13 > VAR_9->vc_rows)
   VAR_13 = VAR_9->vc_rows;
  if (VAR_8)
   FUNC_7(VAR_9, VAR_10, VAR_13);
  if (VAR_6 >= 0)
   goto redraw_up;
  switch (VAR_15->scrollmode) {
  case 134:
   FUNC_5(VAR_9, VAR_14, VAR_15, VAR_10, VAR_11 - VAR_10 - VAR_13,
         VAR_13);
   FUNC_1(VAR_9, VAR_11 - VAR_13, 0, VAR_13, VAR_9->vc_cols);
   FUNC_8((unsigned short *) (VAR_9->vc_origin +
       VAR_9->vc_size_row *
       (VAR_11 - VAR_13)),
        VAR_9->vc_video_erase_char,
        VAR_9->vc_size_row * VAR_13);
   return 1;
   break;

  case 130:
   if (VAR_11 - VAR_10 - VAR_13 > 3 * VAR_9->vc_rows >> 2) {
    if (VAR_10 > 0)
     FUNC_0(VAR_9, 0, 0, VAR_13, 0, VAR_10,
          VAR_9->vc_cols);
    FUNC_14(VAR_9, VAR_13);
    if (VAR_9->vc_rows - VAR_11 > 0)
     FUNC_0(VAR_9, VAR_11 - VAR_13, 0, VAR_11, 0,
          VAR_9->vc_rows - VAR_11,
          VAR_9->vc_cols);
   } else if (VAR_14->flags & VAR_3)
    FUNC_0(VAR_9, VAR_10 + VAR_13, 0, VAR_10, 0,
         VAR_11 - VAR_10 - VAR_13, VAR_9->vc_cols);
   else
    goto redraw_up;
   FUNC_1(VAR_9, VAR_11 - VAR_13, 0, VAR_13, VAR_9->vc_cols);
   break;

  case 132:
   if ((VAR_15->yscroll + VAR_13 <=
        2 * (VAR_15->vrows - VAR_9->vc_rows))
       && ((!VAR_16 && (VAR_11 - VAR_10 == VAR_9->vc_rows))
    || (VAR_16
        && (VAR_11 - VAR_10 - VAR_13 >
     3 * VAR_9->vc_rows >> 2)))) {
    if (VAR_10 > 0)
     FUNC_6(VAR_9, VAR_15, 0, VAR_10, VAR_13);
    FUNC_12(VAR_9, VAR_10, VAR_13);
    if (VAR_9->vc_rows - VAR_11 > 0)
     FUNC_6(VAR_9, VAR_15, VAR_11,
         VAR_9->vc_rows - VAR_11, VAR_11);
   } else
    FUNC_6(VAR_9, VAR_15, VAR_10 + VAR_13, VAR_11 - VAR_10 - VAR_13, VAR_10);
   FUNC_1(VAR_9, VAR_11 - VAR_13, 0, VAR_13, VAR_9->vc_cols);
   break;

  case 133:
   if ((VAR_15->yscroll + VAR_13 <=
        2 * (VAR_15->vrows - VAR_9->vc_rows))
       && ((!VAR_16 && (VAR_11 - VAR_10 == VAR_9->vc_rows))
    || (VAR_16
        && (VAR_11 - VAR_10 - VAR_13 >
     3 * VAR_9->vc_rows >> 2)))) {
    if (VAR_10 > 0)
     FUNC_0(VAR_9, 0, 0, VAR_13, 0, VAR_10,
          VAR_9->vc_cols);
    FUNC_11(VAR_9, VAR_13);
    if (VAR_9->vc_rows - VAR_11 > 0)
     FUNC_0(VAR_9, VAR_11 - VAR_13, 0, VAR_11, 0,
          VAR_9->vc_rows - VAR_11,
          VAR_9->vc_cols);
   } else if (VAR_14->flags & VAR_3)
    FUNC_0(VAR_9, VAR_10 + VAR_13, 0, VAR_10, 0,
         VAR_11 - VAR_10 - VAR_13, VAR_9->vc_cols);
   else
    goto redraw_up;
   FUNC_1(VAR_9, VAR_11 - VAR_13, 0, VAR_13, VAR_9->vc_cols);
   break;

  case 131:
        redraw_up:
   FUNC_4(VAR_9, VAR_15, VAR_10, VAR_11 - VAR_10 - VAR_13,
         VAR_13 * VAR_9->vc_cols);
   FUNC_1(VAR_9, VAR_11 - VAR_13, 0, VAR_13, VAR_9->vc_cols);
   FUNC_8((unsigned short *) (VAR_9->vc_origin +
       VAR_9->vc_size_row *
       (VAR_11 - VAR_13)),
        VAR_9->vc_video_erase_char,
        VAR_9->vc_size_row * VAR_13);
   return 1;
  }
  break;

 case 129:
  if (VAR_13 > VAR_9->vc_rows)
   VAR_13 = VAR_9->vc_rows;
  if (VAR_6 >= 0)
   goto redraw_down;
  switch (VAR_15->scrollmode) {
  case 134:
   FUNC_5(VAR_9, VAR_14, VAR_15, VAR_11 - 1, VAR_11 - VAR_10 - VAR_13,
         -VAR_13);
   FUNC_1(VAR_9, VAR_10, 0, VAR_13, VAR_9->vc_cols);
   FUNC_8((unsigned short *) (VAR_9->vc_origin +
       VAR_9->vc_size_row *
       VAR_10),
        VAR_9->vc_video_erase_char,
        VAR_9->vc_size_row * VAR_13);
   return 1;
   break;

  case 130:
   if (VAR_11 - VAR_10 - VAR_13 > 3 * VAR_9->vc_rows >> 2) {
    if (VAR_9->vc_rows - VAR_11 > 0)
     FUNC_0(VAR_9, VAR_11, 0, VAR_11 - VAR_13, 0,
          VAR_9->vc_rows - VAR_11,
          VAR_9->vc_cols);
    FUNC_13(VAR_9, VAR_13);
    if (VAR_10 > 0)
     FUNC_0(VAR_9, VAR_13, 0, 0, 0, VAR_10,
          VAR_9->vc_cols);
   } else if (VAR_14->flags & VAR_3)
    FUNC_0(VAR_9, VAR_10, 0, VAR_10 + VAR_13, 0,
         VAR_11 - VAR_10 - VAR_13, VAR_9->vc_cols);
   else
    goto redraw_down;
   FUNC_1(VAR_9, VAR_10, 0, VAR_13, VAR_9->vc_cols);
   break;

  case 133:
   if ((VAR_13 - VAR_15->yscroll <= VAR_15->vrows - VAR_9->vc_rows)
       && ((!VAR_16 && (VAR_11 - VAR_10 == VAR_9->vc_rows))
    || (VAR_16
        && (VAR_11 - VAR_10 - VAR_13 >
     3 * VAR_9->vc_rows >> 2)))) {
    if (VAR_9->vc_rows - VAR_11 > 0)
     FUNC_0(VAR_9, VAR_11, 0, VAR_11 - VAR_13, 0,
          VAR_9->vc_rows - VAR_11,
          VAR_9->vc_cols);
    FUNC_9(VAR_9, VAR_13);
    if (VAR_10 > 0)
     FUNC_0(VAR_9, VAR_13, 0, 0, 0, VAR_10,
          VAR_9->vc_cols);
   } else if (VAR_14->flags & VAR_3)
    FUNC_0(VAR_9, VAR_10, 0, VAR_10 + VAR_13, 0,
         VAR_11 - VAR_10 - VAR_13, VAR_9->vc_cols);
   else
    goto redraw_down;
   FUNC_1(VAR_9, VAR_10, 0, VAR_13, VAR_9->vc_cols);
   break;

  case 132:
   if ((VAR_13 - VAR_15->yscroll <= VAR_15->vrows - VAR_9->vc_rows)
       && ((!VAR_16 && (VAR_11 - VAR_10 == VAR_9->vc_rows))
    || (VAR_16
        && (VAR_11 - VAR_10 - VAR_13 >
     3 * VAR_9->vc_rows >> 2)))) {
    if (VAR_9->vc_rows - VAR_11 > 0)
     FUNC_6(VAR_9, VAR_15, VAR_11, VAR_9->vc_rows - VAR_11,
         VAR_11 - VAR_13);
    FUNC_10(VAR_9, VAR_10, VAR_13);
    if (VAR_10 > 0)
     FUNC_6(VAR_9, VAR_15, VAR_13, VAR_10, 0);
   } else
    FUNC_6(VAR_9, VAR_15, VAR_10, VAR_11 - VAR_10 - VAR_13, VAR_10 + VAR_13);
   FUNC_1(VAR_9, VAR_10, 0, VAR_13, VAR_9->vc_cols);
   break;

  case 131:
        redraw_down:
   FUNC_4(VAR_9, VAR_15, VAR_11 - 1, VAR_11 - VAR_10 - VAR_13,
         -VAR_13 * VAR_9->vc_cols);
   FUNC_1(VAR_9, VAR_10, 0, VAR_13, VAR_9->vc_cols);
   FUNC_8((unsigned short *) (VAR_9->vc_origin +
       VAR_9->vc_size_row *
       VAR_10),
        VAR_9->vc_video_erase_char,
        VAR_9->vc_size_row * VAR_13);
   return 1;
  }
 }
 return 0;
}
