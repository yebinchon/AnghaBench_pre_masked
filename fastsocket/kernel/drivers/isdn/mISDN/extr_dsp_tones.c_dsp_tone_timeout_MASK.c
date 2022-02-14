
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pattern {int* seq; int ** siz; int ** data; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct dsp_tone {int index; TYPE_1__ tl; int tone; scalar_t__ pattern; } ;
struct dsp {struct dsp_tone tone; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct dsp*,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

void
FUNC_3(void *VAR_3)
{
 struct dsp *VAR_4 = VAR_3;
 struct dsp_tone *VAR_5 = &VAR_4->tone;
 struct pattern *VAR_6 = (struct pattern *)VAR_5->pattern;
 int VAR_7 = VAR_5->index;

 if (!VAR_5->tone)
  return;

 VAR_7++;
 if (!VAR_6->seq[VAR_7])
  VAR_7 = 0;
 VAR_5->index = VAR_7;


 if (VAR_6->data[VAR_7] == VAR_0)
  FUNC_1(VAR_4, ((void*)0), 0);
 else
  FUNC_1(VAR_4, VAR_6->data[VAR_7], *(VAR_6->siz[VAR_7]));

 FUNC_2(&VAR_5->tl);
 VAR_5->tl.expires = VAR_2 + (VAR_6->seq[VAR_7] * VAR_1) / 8000;
 FUNC_0(&VAR_5->tl);
}
