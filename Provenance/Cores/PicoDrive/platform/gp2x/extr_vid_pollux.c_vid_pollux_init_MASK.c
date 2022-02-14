
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_fix_screeninfo {char* id; int smem_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;
 char** VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (scalar_t__,int ,struct fb_fix_screeninfo*) ;
 int VAR_25 ;
 int FUNC_2 (char*,int ,int ) ;
 char* FUNC_3 (int ,int ,int,int ,int ,int) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;

void FUNC_7(void)
{
 struct fb_fix_screeninfo VAR_26;
 int VAR_27, VAR_28;

 VAR_10 = FUNC_4("/dev/fb0", VAR_5);
 if (VAR_10 < 0) {
  FUNC_5("can't open fbdev");
  FUNC_0(1);
 }

 VAR_28 = FUNC_1(VAR_10, VAR_0, &VAR_26);
 if (VAR_28 == -1) {
  FUNC_5("ioctl(fbdev) failed");
  FUNC_0(1);
 }

 FUNC_6("framebuffer: \"%s\" @ %08lx\n", VAR_26.id, VAR_26.smem_start);
 VAR_8[0] = VAR_26.smem_start;

 VAR_12[0] = FUNC_3(0, VAR_2, VAR_6|VAR_7,
   VAR_4, VAR_25, VAR_8[0]);
 if (VAR_12[0] == VAR_3)
 {
  FUNC_5("mmap(gp2x_screens) failed");
  FUNC_0(1);
 }
 FUNC_2(VAR_12[0], 0, VAR_2);

 FUNC_6("  %p -> %08x\n", VAR_12[0], VAR_8[0]);
 for (VAR_27 = 1; VAR_27 < VAR_1; VAR_27++)
 {
  VAR_8[VAR_27] = VAR_8[VAR_27-1] + 320*240*2;
  VAR_12[VAR_27] = (char *)VAR_12[VAR_27-1] + 320*240*2;
  FUNC_6("  %p -> %08x\n", VAR_12[VAR_27], VAR_8[VAR_27]);
 }
 VAR_9 = 0;
 VAR_11 = VAR_12[0];

 VAR_17 = VAR_20;
 VAR_18 = VAR_19;
 VAR_15 = VAR_16;
 VAR_21 = VAR_22;
 VAR_13 = VAR_14;
 VAR_23 = VAR_24;
}
