
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {struct sh_mobile_lcdc_chan* ch; scalar_t__ started; } ;
struct sh_mobile_lcdc_board_cfg {int board_data; int (* display_off ) (int ) ;} ;
struct TYPE_3__ {struct sh_mobile_lcdc_board_cfg board_cfg; } ;
struct sh_mobile_lcdc_chan {scalar_t__ enabled; TYPE_1__ cfg; TYPE_2__* info; scalar_t__ frame_end; int frame_end_wait; } ;
struct TYPE_4__ {int * fbdefio; int deferred_work; } ;


 int FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct sh_mobile_lcdc_priv*) ;
 int FUNC_4 (struct sh_mobile_lcdc_priv*) ;
 int FUNC_5 (struct sh_mobile_lcdc_priv*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct sh_mobile_lcdc_priv *VAR_0)
{
 struct sh_mobile_lcdc_chan *VAR_1;
 struct sh_mobile_lcdc_board_cfg *VAR_2;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->ch); VAR_3++) {
  VAR_1 = &VAR_0->ch[VAR_3];
  if (!VAR_1->enabled)
   continue;





  if (VAR_1->info->fbdefio) {
   VAR_1->frame_end = 0;
   FUNC_2(&VAR_1->info->deferred_work, 0);
   FUNC_7(VAR_1->frame_end_wait, VAR_1->frame_end);
   FUNC_1(VAR_1->info);
   VAR_1->info->fbdefio = ((void*)0);
   FUNC_4(VAR_0);
  }

  VAR_2 = &VAR_1->cfg.board_cfg;
  if (VAR_2->display_off)
   VAR_2->display_off(VAR_2->board_data);
 }


 if (VAR_0->started) {
  FUNC_5(VAR_0, 0);
  VAR_0->started = 0;
 }


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->ch); VAR_3++)
  if (VAR_0->ch[VAR_3].enabled)
   FUNC_3(VAR_0);
}
