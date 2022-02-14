
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audio_in {TYPE_1__* in; scalar_t__ in_count; scalar_t__ in_tail; scalar_t__ in_head; scalar_t__ dsp_cnt; } ;
struct TYPE_2__ {scalar_t__ read; scalar_t__ size; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct audio_in *VAR_1)
{
 int VAR_2;

 VAR_1->dsp_cnt = 0;
 VAR_1->in_head = 0;
 VAR_1->in_tail = 0;
 VAR_1->in_count = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->in[VAR_2].size = 0;
  VAR_1->in[VAR_2].read = 0;
 }
}
