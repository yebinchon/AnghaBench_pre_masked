
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int table; } ;
struct TYPE_11__ {int coupling_point; size_t num_coupled; scalar_t__* type; size_t* id_select; size_t* ch_select; void*** gain; } ;
struct TYPE_10__ {TYPE_4__ coup; TYPE_2__* ch; } ;
struct TYPE_8__ {int num_window_groups; int max_sfb; } ;
struct TYPE_9__ {scalar_t__* band_type; TYPE_1__ ics; } ;
typedef TYPE_2__ SingleChannelElement ;
typedef void* INTFLOAT ;
typedef int GetBitContext ;
typedef TYPE_3__ ChannelElement ;
typedef TYPE_4__ ChannelCoupling ;
typedef int AACContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (void*) ;
 void** VAR_5 ;
 int FUNC_4 (int *,TYPE_2__*,int *,int ,int ) ;
 size_t FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int,int) ;
 TYPE_5__ VAR_6 ;

__attribute__((used)) static int FUNC_8(AACContext *VAR_7, GetBitContext *VAR_8, ChannelElement *VAR_9)
{
    int VAR_10 = 0;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15;
    INTFLOAT VAR_16;
    SingleChannelElement *VAR_17 = &VAR_9->ch[0];
    ChannelCoupling *VAR_18 = &VAR_9->coup;

    VAR_18->coupling_point = 2 * FUNC_6(VAR_8);
    VAR_18->num_coupled = FUNC_5(VAR_8, 3);
    for (VAR_11 = 0; VAR_11 <= VAR_18->num_coupled; VAR_11++) {
        VAR_10++;
        VAR_18->type[VAR_11] = FUNC_6(VAR_8) ? VAR_2 : VAR_3;
        VAR_18->id_select[VAR_11] = FUNC_5(VAR_8, 4);
        if (VAR_18->type[VAR_11] == VAR_2) {
            VAR_18->ch_select[VAR_11] = FUNC_5(VAR_8, 2);
            if (VAR_18->ch_select[VAR_11] == 3)
                VAR_10++;
        } else
            VAR_18->ch_select[VAR_11] = 2;
    }
    VAR_18->coupling_point += FUNC_6(VAR_8) || (VAR_18->coupling_point >> 1);

    VAR_15 = FUNC_5(VAR_8, 1);



    VAR_16 = VAR_5[FUNC_5(VAR_8, 2)];


    if ((VAR_14 = FUNC_4(VAR_7, VAR_17, VAR_8, 0, 0)))
        return VAR_14;

    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        int VAR_19 = 0;
        int VAR_20 = 1;
        int VAR_21 = 0;
        INTFLOAT VAR_22 = FUNC_1(1.);
        if (VAR_11) {
            VAR_20 = VAR_18->coupling_point == VAR_0 ? 1 : FUNC_6(VAR_8);
            VAR_21 = VAR_20 ? FUNC_7(VAR_8, VAR_6.table, 7, 3) - 60: 0;
            VAR_22 = FUNC_2(VAR_16, VAR_21);




        }
        if (VAR_18->coupling_point == VAR_0) {
            VAR_18->gain[VAR_11][0] = VAR_22;
        } else {
            for (VAR_12 = 0; VAR_12 < VAR_17->ics.num_window_groups; VAR_12++) {
                for (VAR_13 = 0; VAR_13 < VAR_17->ics.max_sfb; VAR_13++, VAR_19++) {
                    if (VAR_17->band_type[VAR_19] != VAR_4) {
                        if (!VAR_20) {
                            int VAR_23 = FUNC_7(VAR_8, VAR_6.table, 7, 3) - 60;
                            if (VAR_23) {
                                int VAR_24 = 1;
                                VAR_23 = VAR_21 += VAR_23;
                                if (VAR_15) {
                                    VAR_24 -= 2 * (VAR_23 & 0x1);
                                    VAR_23 >>= 1;
                                }
                                VAR_22 = FUNC_2(VAR_16, VAR_23) * VAR_24;




                            }
                        }
                        VAR_18->gain[VAR_11][VAR_19] = VAR_22;
                    }
                }
            }
        }
    }
    return 0;
}
