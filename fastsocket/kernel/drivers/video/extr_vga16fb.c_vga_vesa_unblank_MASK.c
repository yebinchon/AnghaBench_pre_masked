
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char CrtMiscIO; int ClockingMode; int ModeControl; int EndVertRetrace; int StartVertRetrace; int Overflow; int EndHorizRetrace; int StartHorizRetrace; int HorizDisplayEnd; int HorizontalTotal; } ;
struct vga16fb_par {TYPE_1__ vga_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct vga16fb_par *VAR_3)
{
 unsigned char VAR_4 = FUNC_0(VAR_2);
 unsigned char VAR_5 = FUNC_0(VAR_0);


 FUNC_1(VAR_1, VAR_3->vga_state.CrtMiscIO);


 FUNC_2(0x00, VAR_3->vga_state.HorizontalTotal);

 FUNC_2(0x01, VAR_3->vga_state.HorizDisplayEnd);

 FUNC_2(0x04, VAR_3->vga_state.StartHorizRetrace);

 FUNC_2(0x05, VAR_3->vga_state.EndHorizRetrace);

 FUNC_2(0x07, VAR_3->vga_state.Overflow);

 FUNC_2(0x10, VAR_3->vga_state.StartVertRetrace);

 FUNC_2(0x11, VAR_3->vga_state.EndVertRetrace);

 FUNC_2(0x17, VAR_3->vga_state.ModeControl);

 FUNC_3(0x01, VAR_3->vga_state.ClockingMode);


 FUNC_1(VAR_2, VAR_4);
 FUNC_1(VAR_0, VAR_5);
}
