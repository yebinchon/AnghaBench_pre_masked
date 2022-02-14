
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct dib8000_state {TYPE_2__* current_agc; } ;
struct TYPE_3__ {scalar_t__ max; scalar_t__ min_thres; scalar_t__ min; scalar_t__ max_thres; } ;
struct TYPE_4__ {TYPE_1__ split; int perform_agc_softsplit; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dib8000_state *VAR_1)
{
 u16 VAR_2, VAR_3;

 if (!VAR_1->current_agc || !VAR_1->current_agc->perform_agc_softsplit || VAR_1->current_agc->split.max == 0)
  return VAR_0;


 VAR_2 = FUNC_0(VAR_1, 390);

 if (VAR_2 > VAR_1->current_agc->split.min_thres)
  VAR_3 = VAR_1->current_agc->split.min;
 else if (VAR_2 < VAR_1->current_agc->split.max_thres)
  VAR_3 = VAR_1->current_agc->split.max;
 else
  VAR_3 = VAR_1->current_agc->split.max *
      (VAR_2 - VAR_1->current_agc->split.min_thres) / (VAR_1->current_agc->split.max_thres - VAR_1->current_agc->split.min_thres);

 FUNC_2("AGC split_offset: %d", VAR_3);


 FUNC_1(VAR_1, 107, (FUNC_0(VAR_1, 107) & 0xff00) | VAR_3);
 return 5000;
}
