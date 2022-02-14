
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vga16fb_par {int clkdiv; int misc; } ;
struct fb_info {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct vga16fb_par *VAR_0,
          unsigned int VAR_1,
          const struct fb_info *VAR_2,
          int VAR_3, int VAR_4)
{
 static const struct {
  u32 pixclock;
  u8 misc;
  u8 seq_clock_mode;
 } *VAR_5, *VAR_6, VAR_7[] = {
  { 79442 , 0x00, 0x08},
  { 70616 , 0x04, 0x08},
  { 39721 , 0x00, 0x00},
  { 35308 , 0x04, 0x00},
  { 0 , 0x00, 0x00}};
 int VAR_8;

 VAR_1 = (VAR_1 * VAR_3) / VAR_4;
 VAR_6 = VAR_7;
 VAR_8 = VAR_1 - VAR_6->pixclock;
 if (VAR_8 < 0) VAR_8 = -VAR_8;
 for (VAR_5 = VAR_7 + 1; VAR_5->pixclock; VAR_5++) {
  int VAR_9;

  VAR_9 = VAR_1 - VAR_5->pixclock;
  if (VAR_9 < 0) VAR_9 = -VAR_9;
  if (VAR_9 < VAR_8) {
   VAR_8 = VAR_9;
   VAR_6 = VAR_5;
  }
 }
 VAR_0->misc |= VAR_6->misc;
 VAR_0->clkdiv = VAR_6->seq_clock_mode;
 VAR_1 = (VAR_6->pixclock * VAR_4) / VAR_3;
}
