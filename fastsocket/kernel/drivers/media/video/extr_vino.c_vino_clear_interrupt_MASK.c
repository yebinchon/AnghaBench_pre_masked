
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vino_channel_settings {scalar_t__ channel; } ;
struct sgi_vino_channel {int next_4_desc; int start_desc_tbl; scalar_t__ line_count; scalar_t__ page_index; } ;
struct TYPE_6__ {struct sgi_vino_channel b; struct sgi_vino_channel a; } ;
struct TYPE_4__ {int dma; } ;
struct TYPE_5__ {TYPE_1__ dummy_desc_table; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char) ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void FUNC_2(struct vino_channel_settings *VAR_4)
{
 struct sgi_vino_channel *VAR_5;

 VAR_5 = (VAR_4->channel == VAR_0) ? &VAR_2->a : &VAR_2->b;

 VAR_5->page_index = 0;
 VAR_5->line_count = 0;

 VAR_5->start_desc_tbl = VAR_3->dummy_desc_table.dma;
 VAR_5->next_4_desc = VAR_3->dummy_desc_table.dma;

 FUNC_1(VAR_1);
 FUNC_0("channel %c clear interrupt condition\n",
        (VAR_4->channel == VAR_0) ? 'A':'B');
}
