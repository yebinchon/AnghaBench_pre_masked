
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int lambda; TYPE_1__* coder; } ;
struct TYPE_12__ {int num_windows; scalar_t__* group_len; } ;
struct TYPE_13__ {TYPE_2__ ics; } ;
struct TYPE_11__ {int (* encode_window_bands_info ) (TYPE_4__*,TYPE_3__*,int,scalar_t__,int ) ;int (* set_special_band_scalefactors ) (TYPE_4__*,TYPE_3__*) ;} ;
typedef TYPE_3__ SingleChannelElement ;
typedef TYPE_4__ AACEncContext ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(AACEncContext *VAR_0, SingleChannelElement *VAR_1)
{
    int VAR_2;

    if (VAR_0->coder->set_special_band_scalefactors)
        VAR_0->coder->set_special_band_scalefactors(VAR_0, VAR_1);

    for (VAR_2 = 0; VAR_2 < VAR_1->ics.num_windows; VAR_2 += VAR_1->ics.group_len[VAR_2])
        VAR_0->coder->encode_window_bands_info(VAR_0, VAR_1, VAR_2, VAR_1->ics.group_len[VAR_2], VAR_0->lambda);
}
