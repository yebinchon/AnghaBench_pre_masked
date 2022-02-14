
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_chan {int sglist; int lcdc; } ;
struct list_head {int dummy; } ;
struct fb_info {int dev; struct sh_mobile_lcdc_chan* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int,int ) ;
 int FUNC_1 (int ,int ,unsigned int,int ) ;
 int FUNC_2 (struct sh_mobile_lcdc_chan*,int ,int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct fb_info*,struct list_head*) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_2,
           struct list_head *VAR_3)
{
 struct sh_mobile_lcdc_chan *VAR_4 = VAR_2->par;
 unsigned int VAR_5;


 FUNC_3(VAR_4->lcdc);

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 FUNC_0(VAR_2->dev, VAR_4->sglist, VAR_5, VAR_0);


 FUNC_2(VAR_4, VAR_1, 1);

 FUNC_1(VAR_2->dev, VAR_4->sglist, VAR_5, VAR_0);
}
