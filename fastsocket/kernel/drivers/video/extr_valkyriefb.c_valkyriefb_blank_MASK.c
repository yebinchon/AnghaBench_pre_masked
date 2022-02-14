
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct valkyrie_regvals {int mode; } ;
struct fb_par_valkyrie {struct valkyrie_regvals* init; } ;
struct fb_info_valkyrie {TYPE_2__* valkyrie_regs; } ;
struct fb_info {struct fb_par_valkyrie* par; } ;
struct TYPE_3__ {int r; } ;
struct TYPE_4__ {TYPE_1__ mode; } ;







 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct fb_info *VAR_1)
{
 struct fb_info_valkyrie *VAR_2 = (struct fb_info_valkyrie *) VAR_1;
 struct fb_par_valkyrie *VAR_3 = VAR_1->par;
 struct valkyrie_regvals *VAR_4 = VAR_3->init;

 if (VAR_4 == ((void*)0))
  return 1;

 switch (VAR_0) {
 case 129:
  FUNC_0(&VAR_2->valkyrie_regs->mode.r, VAR_4->mode);
  break;
 case 131:
  return 1;
 case 128:
 case 132:





  FUNC_0(&VAR_2->valkyrie_regs->mode.r, VAR_4->mode | 0x40);
  break;
 case 130:
  FUNC_0(&VAR_2->valkyrie_regs->mode.r, 0x66);
  break;
 }
 return 0;
}
