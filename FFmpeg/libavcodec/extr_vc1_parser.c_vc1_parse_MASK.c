
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ VC1ParseSearchState ;
struct TYPE_12__ {int frame_start_found; } ;
struct TYPE_8__ {scalar_t__ (* startcode_find_candidate ) (int const*,int) ;} ;
struct TYPE_9__ {TYPE_1__ vc1dsp; } ;
struct TYPE_10__ {int* unesc_buffer; size_t unesc_index; scalar_t__ search_state; int bytes_to_skip; int prev_start_code; TYPE_7__ pc; TYPE_2__ v; } ;
typedef TYPE_3__ VC1ParseContext ;
struct TYPE_11__ {int flags; TYPE_3__* priv_data; } ;
typedef TYPE_4__ AVCodecParserContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int,int const**,int*) ;
 int FUNC_1 (int*,int ,size_t) ;
 scalar_t__ FUNC_2 (int const*,int) ;
 int FUNC_3 (TYPE_4__*,int *,int*,size_t) ;

__attribute__((used)) static int FUNC_4(AVCodecParserContext *VAR_10,
                           AVCodecContext *VAR_11,
                           const uint8_t **VAR_12, int *VAR_13,
                           const uint8_t *VAR_14, int VAR_15)
{



    VC1ParseContext *VAR_16 = VAR_10->priv_data;
    int VAR_17 = VAR_16->pc.frame_start_found;
    uint8_t *VAR_18 = VAR_16->unesc_buffer;
    size_t VAR_19 = VAR_16->unesc_index;
    VC1ParseSearchState VAR_20 = VAR_16->search_state;
    int VAR_21 = 0;
    int VAR_22 = VAR_0;
    int VAR_23 = VAR_16->bytes_to_skip;

    if (VAR_17 && VAR_15 == 0) {

        FUNC_1(VAR_18 + VAR_19, 0, VAR_6 - VAR_19);
        FUNC_3(VAR_10, VAR_11, VAR_18, VAR_19);
        VAR_22 = 0;
    }
    while (VAR_23 < VAR_15) {
        uint8_t VAR_24;
        VAR_21 = 0;
        while (VAR_23 < VAR_15 && VAR_19 < VAR_6) {
            VAR_24 = VAR_14[VAR_23++];
            VAR_18[VAR_19++] = VAR_24;
            if (VAR_20 <= VAR_3)
                VAR_20 = VAR_24 ? VAR_1 : VAR_20 + 1;
            else if (VAR_20 == VAR_5) {
                if (VAR_24 == 1)
                    VAR_20 = VAR_2;
                else if (VAR_24 > 1) {
                    if (VAR_24 == 3)
                        VAR_19--;
                    VAR_20 = VAR_1;
                }
            }
            else {

                VAR_20 = VAR_1;
                VAR_21 = 1;
                break;
            }
        }
        if ((VAR_10->flags & VAR_4) &&
                VAR_19 >= VAR_6 &&
                VAR_16->prev_start_code == (VAR_8 & 0xFF))
        {



            FUNC_3(VAR_10, VAR_11, VAR_18, VAR_19);
            break;
        }
        if (VAR_19 >= VAR_6 && !VAR_21) {
            while (VAR_23 < VAR_15) {
                if (VAR_20 == VAR_1) {
                    VAR_23 += VAR_16->v.vc1dsp.startcode_find_candidate(VAR_14 + VAR_23, VAR_15 - VAR_23);
                    if (VAR_23 < VAR_15) {
                        VAR_20 = VAR_3;
                    }
                    VAR_23++;
                } else {
                    VAR_24 = VAR_14[VAR_23++];
                    if (VAR_20 == VAR_3)
                        VAR_20 = VAR_24 ? VAR_1 : VAR_5;
                    else if (VAR_20 == VAR_5) {
                        if (VAR_24 >= 1)
                            VAR_20 = VAR_24 == 1 ? VAR_2 : VAR_1;
                    }
                    else {
                        VAR_20 = VAR_1;
                        VAR_21 = 1;
                        break;
                    }
                }
            }
        }
        if (VAR_21) {
            FUNC_3(VAR_10, VAR_11, VAR_18, VAR_19);

            VAR_16->prev_start_code = VAR_24;
            VAR_19 = 0;

            if (!(VAR_10->flags & VAR_4)) {
                if (!VAR_17 && (VAR_24 == (VAR_8 & 0xFF) || VAR_24 == (VAR_7 & 0xFF))) {
                    VAR_17 = 1;
                }
                else if (VAR_17 && VAR_24 != (VAR_7 & 0xFF) && VAR_24 != (VAR_9 & 0xFF)) {
                    VAR_22 = VAR_23 - 4;
                    VAR_17 = VAR_24 == (VAR_8 & 0xFF);
                    break;
                }
            }
        }
    }

    VAR_16->pc.frame_start_found = VAR_17;
    VAR_16->unesc_index = VAR_19;
    VAR_16->search_state = VAR_20;

    if (VAR_10->flags & VAR_4) {
        VAR_22 = VAR_15;
    } else {
        if (FUNC_0(&VAR_16->pc, VAR_22, &VAR_14, &VAR_15) < 0) {
            VAR_16->bytes_to_skip = 0;
            *VAR_12 = ((void*)0);
            *VAR_13 = 0;
            return VAR_15;
        }
    }
    VAR_16->bytes_to_skip = 4;
    if (VAR_22 < 0 && VAR_22 != VAR_0)
        VAR_16->bytes_to_skip += VAR_22;

    *VAR_12 = VAR_14;
    *VAR_13 = VAR_15;
    return VAR_22;
}
