
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dum_ch_setup {int xmin; int ymin; int xmax; int ymax; int minadr; int maxadr; int dirtybuffer; scalar_t__ slave_trans; scalar_t__ hwdirty; int format; int pad; scalar_t__ rotate; scalar_t__ ymirror; scalar_t__ xmirror; scalar_t__ disp_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct dum_ch_setup*) ;

__attribute__((used)) static u32 FUNC_1(int VAR_4, int VAR_5, u32 * VAR_6,
   u32 * VAR_7, u32 VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11)
{

 struct dum_ch_setup VAR_12;
 int VAR_13;


 if ((VAR_8 + VAR_10) > VAR_0)
  VAR_10 = VAR_0 - VAR_8;

 if ((VAR_9 + VAR_11) > VAR_1)
  VAR_11 = VAR_1 - VAR_9;


 VAR_12.disp_no = 0;
 VAR_12.xmin = VAR_8;
 VAR_12.ymin = VAR_9;
 VAR_12.xmax = VAR_8 + (VAR_10 - 1);
 VAR_12.ymax = VAR_9 + (VAR_11 - 1);


 if (VAR_12.xmin > VAR_0 - 1)
  VAR_12.xmin = VAR_0 - 1;
 if (VAR_12.ymin > VAR_1 - 1)
  VAR_12.ymin = VAR_1 - 1;

 if (VAR_12.xmax > VAR_0 - 1)
  VAR_12.xmax = VAR_0 - 1;
 if (VAR_12.ymax > VAR_1 - 1)
  VAR_12.ymax = VAR_1 - 1;

 VAR_12.xmirror = 0;
 VAR_12.ymirror = 0;
 VAR_12.rotate = 0;
 VAR_12.minadr = (u32) VAR_7;
 VAR_12.maxadr = (u32) VAR_7 + (((VAR_10 - 1) << 10) | ((VAR_11 << 2) - 2));
 VAR_12.pad = VAR_2;
 VAR_12.dirtybuffer = (u32) VAR_6;
 VAR_12.format = VAR_3;
 VAR_12.hwdirty = 0;
 VAR_12.slave_trans = 0;

 VAR_13 = FUNC_0(VAR_4, &VAR_12);

 return VAR_13;
}
