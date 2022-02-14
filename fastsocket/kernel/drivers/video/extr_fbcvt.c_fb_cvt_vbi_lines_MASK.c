
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_cvt_data {int flags; int hperiod; int vsync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_0(struct fb_cvt_data *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;

 if (VAR_6->flags & VAR_0) {
  VAR_7 = (1000 * VAR_4)/VAR_6->hperiod + 1;
  VAR_8 = VAR_5 + VAR_6->vsync +
   VAR_1;

 } else {
  VAR_7 = (VAR_3 * 1000)/VAR_6->hperiod + 1 +
    VAR_2;
  VAR_8 = VAR_6->vsync + VAR_1 +
   VAR_2;
 }

 if (VAR_7 < VAR_8)
  VAR_9 = VAR_8;
 else
  VAR_9 = VAR_7;

 return VAR_9;
}
