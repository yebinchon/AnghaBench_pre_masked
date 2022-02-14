
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ws ;
struct winsize {unsigned int ws_row; unsigned int ws_col; int ws_ypixel; } ;
struct vc_data {unsigned int vc_resize_user; unsigned int vc_cols; unsigned int vc_rows; unsigned int vc_size_row; unsigned int vc_screenbuf_size; unsigned long vc_origin; unsigned int vc_y; unsigned int vc_scr_end; unsigned short* vc_screenbuf; unsigned int vc_bottom; int vc_num; int vc_scan_lines; int vc_x; scalar_t__ vc_top; int vc_video_erase_char; } ;
struct tty_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (struct vc_data*,int ,unsigned int) ;
 int FUNC_3 (unsigned short*) ;
 unsigned short* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct winsize*,int ,int) ;
 unsigned long FUNC_6 (unsigned int,unsigned int) ;
 unsigned long FUNC_7 (struct vc_data*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_8 (struct vc_data*) ;
 int FUNC_9 (unsigned short*,unsigned short*,unsigned long) ;
 int FUNC_10 (void*,int ,unsigned long) ;
 int FUNC_11 (struct vc_data*) ;
 int FUNC_12 (struct tty_struct*,struct winsize*) ;
 int FUNC_13 (struct vc_data*) ;
 int FUNC_14 (struct vc_data*) ;
 int FUNC_15 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct tty_struct *VAR_7, struct vc_data *VAR_8,
    unsigned int VAR_9, unsigned int VAR_10)
{
 unsigned long VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 unsigned int VAR_17, VAR_18, VAR_19, VAR_20;
 unsigned int VAR_21, VAR_22, VAR_23, VAR_24;
 unsigned int VAR_25, VAR_26;
 unsigned short *VAR_27;

 FUNC_1();

 if (!VAR_8)
  return -VAR_2;

 VAR_26 = VAR_8->vc_resize_user;
 VAR_8->vc_resize_user = 0;

 if (VAR_9 > VAR_4 || VAR_10 > VAR_5)
  return -VAR_0;

 VAR_21 = (VAR_9 ? VAR_9 : VAR_8->vc_cols);
 VAR_22 = (VAR_10 ? VAR_10 : VAR_8->vc_rows);
 VAR_23 = VAR_21 << 1;
 VAR_24 = VAR_23 * VAR_22;

 if (VAR_21 == VAR_8->vc_cols && VAR_22 == VAR_8->vc_rows)
  return 0;

 VAR_27 = FUNC_4(VAR_24, VAR_3);
 if (!VAR_27)
  return -VAR_1;

 VAR_18 = VAR_8->vc_rows;
 VAR_17 = VAR_8->vc_cols;
 VAR_19 = VAR_8->vc_size_row;
 VAR_20 = VAR_8->vc_screenbuf_size;

 VAR_16 = FUNC_7(VAR_8, VAR_21, VAR_22, VAR_26);
 if (VAR_16) {
  FUNC_3(VAR_27);
  return VAR_16;
 }

 VAR_8->vc_rows = VAR_22;
 VAR_8->vc_cols = VAR_21;
 VAR_8->vc_size_row = VAR_23;
 VAR_8->vc_screenbuf_size = VAR_24;

 VAR_14 = FUNC_6(VAR_19, VAR_23);
 VAR_15 = VAR_23 - VAR_14;
 VAR_11 = VAR_8->vc_origin;
 VAR_12 = (long) VAR_27;
 VAR_13 = VAR_12 + VAR_24;

 if (VAR_8->vc_y > VAR_22) {
  if (VAR_18 - VAR_8->vc_y < VAR_22) {




   VAR_11 += (VAR_18 - VAR_22) * VAR_19;
   VAR_25 = VAR_8->vc_scr_end;
  } else {




   VAR_11 += (VAR_8->vc_y - VAR_22/2) * VAR_19;
   VAR_25 = VAR_11 + (VAR_19 * VAR_22);
  }
 } else



  VAR_25 = (VAR_18 > VAR_22) ? VAR_11 +
   (VAR_19 * VAR_22) :
   VAR_8->vc_scr_end;

 FUNC_13(VAR_8);

 while (VAR_11 < VAR_25) {
  FUNC_9((unsigned short *) VAR_12,
       (unsigned short *) VAR_11, VAR_14);
  if (VAR_15)
   FUNC_10((void *)(VAR_12 + VAR_14),
        VAR_8->vc_video_erase_char, VAR_15);
  VAR_11 += VAR_19;
  VAR_12 += VAR_23;
 }
 if (VAR_13 > VAR_12)
  FUNC_10((void *)VAR_12, VAR_8->vc_video_erase_char,
       VAR_13 - VAR_12);
 FUNC_3(VAR_8->vc_screenbuf);
 VAR_8->vc_screenbuf = VAR_27;
 VAR_8->vc_screenbuf_size = VAR_24;
 FUNC_11(VAR_8);


 VAR_8->vc_top = 0;
 VAR_8->vc_bottom = VAR_8->vc_rows;
 FUNC_2(VAR_8, VAR_8->vc_x, VAR_8->vc_y);
 FUNC_8(VAR_8);

 if (VAR_7) {


  struct winsize VAR_28;
  FUNC_5(&VAR_28, 0, sizeof(VAR_28));
  VAR_28.ws_row = VAR_8->vc_rows;
  VAR_28.ws_col = VAR_8->vc_cols;
  VAR_28.ws_ypixel = VAR_8->vc_scan_lines;
  FUNC_12(VAR_7, &VAR_28);
 }

 if (FUNC_0(VAR_8))
  FUNC_14(VAR_8);
 FUNC_15(VAR_6, VAR_8->vc_num, VAR_8->vc_num);
 return VAR_16;
}
