
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sram_channel {int vid_cdt_size; int vid_active_ctl2; int vid_active_ctl1; int vid_fmt_ctl; } ;
struct cx25821_dev {int _lines_count; scalar_t__ _isNTSC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

void FUNC_1(struct cx25821_dev *VAR_3, struct sram_channel *VAR_4,
        int VAR_5)
{
 int VAR_6 = VAR_2;
 int VAR_7 = VAR_3->_lines_count;
 int VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11 = VAR_0;

 VAR_10 = ((VAR_5 & 0x3) << 12) | (VAR_11 & 0x7);
 VAR_10 &= 0xFFFFFFEF;
 VAR_10 |= VAR_3->_isNTSC ? 0 : 0x10;
 FUNC_0(VAR_4->vid_fmt_ctl, VAR_10);


 FUNC_0(VAR_4->vid_active_ctl1, VAR_6);

 VAR_8 = (VAR_7 / 2) & 0x3FF;
 VAR_9 = VAR_8;

 if (VAR_3->_isNTSC) {
  VAR_9 += 1;
 }

 VAR_10 = (VAR_8 << 16) | VAR_9;


 FUNC_0(VAR_4->vid_active_ctl2, VAR_10);

 FUNC_0(VAR_4->vid_cdt_size, VAR_1 >> 3);
}
