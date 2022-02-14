
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int color_fmt; int depth; int bpp; int x; int y; int bpl; int vidadr; int sheight; int width; int height; } ;
struct saa7146 {TYPE_1__ win; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 size_t* VAR_17 ;
 int* VAR_18 ;
 int* VAR_19 ;
 int FUNC_0 (int,int ) ;
 int* VAR_20 ;

__attribute__((used)) static void FUNC_1(struct saa7146 *VAR_21)
{
 u32 VAR_22;
 int VAR_23, VAR_24, VAR_25;
 VAR_21->win.color_fmt = VAR_22 =
     (VAR_21->win.depth == 15) ? VAR_19[VAR_16] :
     VAR_19[VAR_17[(VAR_21->win.bpp - 1) & 3]];
 VAR_23 = VAR_21->win.x * VAR_21->win.bpp + VAR_21->win.y * VAR_21->win.bpl;
 FUNC_0(VAR_21->win.vidadr + VAR_23, VAR_1);
 FUNC_0(VAR_21->win.vidadr + VAR_23 + VAR_21->win.bpl, VAR_2);
 FUNC_0(VAR_21->win.bpl * 2, VAR_13);
 FUNC_0(VAR_21->win.vidadr + VAR_21->win.bpl * VAR_21->win.sheight,
   VAR_14);
 FUNC_0(0, VAR_12);
 FUNC_0(VAR_22 | 0x60, VAR_3);
 VAR_23 = (704 / (VAR_21->win.width - 1)) & 0x3f;
 FUNC_0(VAR_18[VAR_23], VAR_4);
 VAR_23 = (720896 / VAR_21->win.width) / (VAR_23 + 1);
 FUNC_0((VAR_23 << 12) | 0x0c, VAR_5);
 if (VAR_0 == VAR_15) {
  VAR_24 = 0;
  VAR_25 = 1024 - (VAR_21->win.height * 1024 / 480);
 } else {
  VAR_24 = 0;
  VAR_25 = 1024 - (VAR_21->win.height * 1024 / 576);
 }
 FUNC_0((1 << 31) | (VAR_25 << 21) | (VAR_24 << 15), VAR_7);
 FUNC_0(VAR_20[VAR_24], VAR_6);
 FUNC_0(((VAR_9 | VAR_11 |
  VAR_10) << 16) | (VAR_9 |
  VAR_11 | VAR_10), VAR_8);
}
