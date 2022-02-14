
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct dumchannel {int channelnr; scalar_t__ dum_ch_min; scalar_t__ dum_ch_max; int dum_ch_conf; int dum_ch_ctrl; int member_0; } ;
struct dum_ch_setup {int disp_no; int format; int minadr; scalar_t__ maxadr; scalar_t__ xmin; scalar_t__ ymin; scalar_t__ xmax; scalar_t__ ymax; scalar_t__ dirtybuffer; scalar_t__ slave_trans; scalar_t__ rotate; scalar_t__ ymirror; scalar_t__ xmirror; } ;
struct disp_window {int xmin_l; int xmin_h; int ymin; int xmax_l; int xmax_h; int ymax; } ;
struct cmdstring {int channelnr; int prestringlen; int poststringlen; int reserved; int startaddr_low; int startaddr_high; int pixdatlen_low; int pixdatlen_high; void** postcmd; void** precmd; scalar_t__ format; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct dum_ch_setup*,struct disp_window*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct dum_ch_setup*) ;
 int FUNC_5 (struct dumchannel) ;
 int FUNC_6 (struct cmdstring) ;

__attribute__((used)) static u32 FUNC_7(int VAR_9, struct dum_ch_setup * VAR_10)
{
 struct cmdstring VAR_11;
 struct cmdstring *VAR_12 = &VAR_11;
 struct disp_window VAR_13;
 int VAR_14;
 u32 VAR_15 = 0;
 struct dumchannel VAR_16 = { 0 };
 int VAR_17;

 if ((VAR_10->xmirror) || (VAR_10->ymirror) || (VAR_10->rotate)) {
  VAR_14 = 0;

  VAR_15 = FUNC_0(1);
  if (VAR_10->xmirror)
   VAR_15 |= FUNC_0(4);
  if (VAR_10->ymirror)
   VAR_15 |= FUNC_0(3);
  if (VAR_10->rotate)
   VAR_15 |= FUNC_0(0);
 } else
  VAR_14 = 1;

 VAR_12->channelnr = VAR_9;


 if (VAR_14) {
  VAR_12->prestringlen = 32;
  VAR_12->poststringlen = 0;
 } else {
  VAR_12->prestringlen = 48;
  VAR_12->poststringlen = 16;
 }

 VAR_12->format =
     (u16) ((VAR_10->disp_no << 4) | (FUNC_0(3)) | (VAR_10->format));
 VAR_12->reserved = 0x0;
 VAR_12->startaddr_low = (VAR_10->minadr & 0xFFFF);
 VAR_12->startaddr_high = (VAR_10->minadr >> 16);

 if ((VAR_10->minadr == 0) && (VAR_10->maxadr == 0)
     && (VAR_10->xmin == 0)
     && (VAR_10->ymin == 0) && (VAR_10->xmax == 0)
     && (VAR_10->ymax == 0)) {
  VAR_12->pixdatlen_low = 0;
  VAR_12->pixdatlen_high = 0;
 } else {
  u32 VAR_18 = FUNC_4(VAR_10);
  VAR_12->pixdatlen_low = (VAR_18 & 0xFFFF);
  VAR_12->pixdatlen_high = (VAR_18 >> 16);
 }

 if (VAR_10->slave_trans)
  VAR_12->pixdatlen_high |= FUNC_0(15);


 FUNC_2(VAR_10, &VAR_13);

 if (VAR_14) {
  VAR_12->precmd[0] =
      FUNC_1(VAR_10->disp_no, VAR_6, 0x99);
  VAR_12->precmd[1] =
      FUNC_1(VAR_10->disp_no, VAR_6,
      VAR_13.xmin_l);
  VAR_12->precmd[2] =
      FUNC_1(VAR_10->disp_no, VAR_5,
      VAR_13.xmin_h);
  VAR_12->precmd[3] =
      FUNC_1(VAR_10->disp_no, VAR_8, VAR_13.ymin);
  VAR_12->precmd[4] =
      FUNC_1(VAR_10->disp_no, VAR_4,
      VAR_13.xmax_l);
  VAR_12->precmd[5] =
      FUNC_1(VAR_10->disp_no, VAR_3,
      VAR_13.xmax_h);
  VAR_12->precmd[6] =
      FUNC_1(VAR_10->disp_no, VAR_7, VAR_13.ymax);
  VAR_12->precmd[7] =
      FUNC_3(VAR_10->disp_no, VAR_2);
 } else {
  if (VAR_13.xmin_l == VAR_9)
   VAR_12->precmd[0] =
       FUNC_1(VAR_10->disp_no, VAR_6,
       0x99);
  else
   VAR_12->precmd[0] =
       FUNC_1(VAR_10->disp_no, VAR_6,
       VAR_9);

  VAR_12->precmd[1] =
      FUNC_1(VAR_10->disp_no, VAR_6,
      VAR_13.xmin_l);
  VAR_12->precmd[2] =
      FUNC_1(VAR_10->disp_no, VAR_5,
      VAR_13.xmin_h);
  VAR_12->precmd[3] =
      FUNC_1(VAR_10->disp_no, VAR_8, VAR_13.ymin);
  VAR_12->precmd[4] =
      FUNC_1(VAR_10->disp_no, VAR_4,
      VAR_13.xmax_l);
  VAR_12->precmd[5] =
      FUNC_1(VAR_10->disp_no, VAR_3,
      VAR_13.xmax_h);
  VAR_12->precmd[6] =
      FUNC_1(VAR_10->disp_no, VAR_7, VAR_13.ymax);
  VAR_12->precmd[7] =
      FUNC_1(VAR_10->disp_no, VAR_0, VAR_15);
  VAR_12->precmd[8] =
      FUNC_3(VAR_10->disp_no, VAR_2);
  VAR_12->precmd[9] =
      FUNC_3(VAR_10->disp_no, VAR_2);
  VAR_12->precmd[0xA] =
      FUNC_3(VAR_10->disp_no, VAR_2);
  VAR_12->precmd[0xB] =
      FUNC_3(VAR_10->disp_no, VAR_2);
  VAR_12->postcmd[0] =
      FUNC_1(VAR_10->disp_no, VAR_0, FUNC_0(1));
  VAR_12->postcmd[1] =
      FUNC_1(VAR_10->disp_no, VAR_1, 1);
  VAR_12->postcmd[2] =
      FUNC_1(VAR_10->disp_no, VAR_1, 2);
  VAR_12->postcmd[3] =
      FUNC_1(VAR_10->disp_no, VAR_1, 3);
 }

 if ((VAR_17 = FUNC_6(VAR_11)) != 0) {
  return VAR_17;
 }

 VAR_16.channelnr = VAR_12->channelnr;
 VAR_16.dum_ch_min = VAR_10->dirtybuffer + VAR_10->minadr;
 VAR_16.dum_ch_max = VAR_10->dirtybuffer + VAR_10->maxadr;
 VAR_16.dum_ch_conf = 0x002;
 VAR_16.dum_ch_ctrl = 0x04;

 FUNC_5(VAR_16);

 return 0;
}
