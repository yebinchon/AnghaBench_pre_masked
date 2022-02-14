
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int CrtMiscIO; int Overflow; int ClockingMode; void* ModeControl; void* EndVertRetrace; void* StartVertRetrace; void* EndHorizRetrace; void* StartHorizRetrace; void* HorizDisplayEnd; void* HorizontalTotal; } ;
struct vga16fb_par {TYPE_1__ vga_state; int vesa_blanked; } ;


 int VAR_0 ;
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
 int FUNC_0 (unsigned char,int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct vga16fb_par *VAR_11, int VAR_12)
{
 unsigned char VAR_13 = FUNC_1(VAR_10);
 unsigned char VAR_14 = FUNC_1(VAR_7);


 if(!VAR_11->vesa_blanked) {
  VAR_11->vga_state.CrtMiscIO = FUNC_1(VAR_8);


  VAR_11->vga_state.HorizontalTotal = FUNC_2(0x00);
  VAR_11->vga_state.HorizDisplayEnd = FUNC_2(0x01);
  VAR_11->vga_state.StartHorizRetrace = FUNC_2(0x04);
  VAR_11->vga_state.EndHorizRetrace = FUNC_2(0x05);
  VAR_11->vga_state.Overflow = FUNC_2(0x07);
  VAR_11->vga_state.StartVertRetrace = FUNC_2(0x10);
  VAR_11->vga_state.EndVertRetrace = FUNC_2(0x11);
  VAR_11->vga_state.ModeControl = FUNC_2(0x17);
  VAR_11->vga_state.ClockingMode = FUNC_3(0x01);
 }



 FUNC_6(0x01, VAR_11->vga_state.ClockingMode | 0x20);


 if ((VAR_11->vga_state.CrtMiscIO & 0x80) == 0x80)
  FUNC_4(VAR_9, VAR_11->vga_state.CrtMiscIO & 0xef);






 if (VAR_12 & VAR_1) {
  FUNC_5(VAR_6, 0xff);
  FUNC_5(VAR_5, 0x40);

  FUNC_5(VAR_4, VAR_11->vga_state.Overflow | 0x84);
 }

 if (VAR_12 & VAR_0) {





  FUNC_5(VAR_3, 0xff);
  FUNC_5(VAR_2, 0x00);
 }


 FUNC_0(VAR_13, VAR_10);
 FUNC_0(VAR_14, VAR_7);
}
