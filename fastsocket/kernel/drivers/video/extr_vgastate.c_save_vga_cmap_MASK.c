
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgastate {int vgabase; scalar_t__ vidstate; } ;
struct regstate {int * vga_cmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct vgastate *VAR_3)
{
 struct regstate *VAR_4 = (struct regstate *) VAR_3->vidstate;
 int VAR_5;

 FUNC_1(VAR_3->vgabase, VAR_2, 0xff);


 FUNC_1(VAR_3->vgabase, VAR_1, 0x00);
 for (VAR_5 = 0; VAR_5 < 768; VAR_5++)
  VAR_4->vga_cmap[VAR_5] = FUNC_0(VAR_3->vgabase, VAR_0);
}
