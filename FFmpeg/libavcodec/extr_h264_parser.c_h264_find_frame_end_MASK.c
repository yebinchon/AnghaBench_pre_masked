
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ (* startcode_find_candidate ) (int const*,int) ;} ;
struct TYPE_6__ {int state; int frame_start_found; } ;
struct TYPE_7__ {int nal_length_size; unsigned int parse_last_mb; int* parse_history; int parse_history_count; scalar_t__ is_avc; TYPE_1__ h264dsp; TYPE_2__ pc; } ;
typedef TYPE_2__ ParseContext ;
typedef TYPE_3__ H264ParseContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (void*,int ,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,int) ;
 scalar_t__ FUNC_4 (int const*,int) ;

__attribute__((used)) static int FUNC_5(H264ParseContext *VAR_9, const uint8_t *VAR_10,
                               int VAR_11, void *VAR_12)
{
    int VAR_13, VAR_14;
    uint32_t VAR_15;
    ParseContext *VAR_16 = &VAR_9->pc;

    int VAR_17 = VAR_9->is_avc ? 0 : VAR_11;

    VAR_15 = VAR_16->state;
    if (VAR_15 > 13)
        VAR_15 = 7;

    if (VAR_9->is_avc && !VAR_9->nal_length_size)
        FUNC_0(VAR_12, VAR_0, "AVC-parser: nal length size invalid\n");

    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
        if (VAR_13 >= VAR_17) {
            int VAR_18 = 0;
            VAR_13 = VAR_17;
            for (VAR_14 = 0; VAR_14 < VAR_9->nal_length_size; VAR_14++)
                VAR_18 = (VAR_18 << 8) | VAR_10[VAR_13++];
            if (VAR_18 <= 0 || VAR_18 > VAR_11 - VAR_13) {
                FUNC_0(VAR_12, VAR_0, "AVC-parser: nal size %d remaining %d\n", VAR_18, VAR_11 - VAR_13);
                return VAR_11;
            }
            VAR_17 = VAR_13 + VAR_18;
            VAR_15 = 5;
        }

        if (VAR_15 == 7) {
            VAR_13 += VAR_9->h264dsp.startcode_find_candidate(VAR_10 + VAR_13, VAR_17 - VAR_13);
            if (VAR_13 < VAR_17)
                VAR_15 = 2;
        } else if (VAR_15 <= 2) {
            if (VAR_10[VAR_13] == 1)
                VAR_15 ^= 5;
            else if (VAR_10[VAR_13])
                VAR_15 = 7;
            else
                VAR_15 >>= 1;
        } else if (VAR_15 <= 5) {
            int VAR_19 = VAR_10[VAR_13] & 0x1F;
            if (VAR_19 == VAR_6 || VAR_19 == VAR_8 ||
                VAR_19 == VAR_5 || VAR_19 == VAR_2) {
                if (VAR_16->frame_start_found) {
                    VAR_13++;
                    goto found;
                }
            } else if (VAR_19 == VAR_7 || VAR_19 == VAR_3 ||
                       VAR_19 == VAR_4) {
                VAR_15 += 8;
                continue;
            }
            VAR_15 = 7;
        } else {
            unsigned int VAR_20, VAR_21 = VAR_9->parse_last_mb;
            GetBitContext VAR_22;
            VAR_9->parse_history[VAR_9->parse_history_count++] = VAR_10[VAR_13];

            FUNC_3(&VAR_22, VAR_9->parse_history, 8*VAR_9->parse_history_count);
            VAR_20= FUNC_2(&VAR_22);
            if (FUNC_1(&VAR_22) > 0 || VAR_9->parse_history_count > 5) {
                VAR_9->parse_last_mb = VAR_20;
                if (VAR_16->frame_start_found) {
                    if (VAR_20 <= VAR_21) {
                        VAR_13 -= VAR_9->parse_history_count - 1;
                        VAR_9->parse_history_count = 0;
                        goto found;
                    }
                } else
                    VAR_16->frame_start_found = 1;
                VAR_9->parse_history_count = 0;
                VAR_15 = 7;
            }
        }
    }
    VAR_16->state = VAR_15;
    if (VAR_9->is_avc)
        return VAR_17;
    return VAR_1;

found:
    VAR_16->state = 7;
    VAR_16->frame_start_found = 0;
    if (VAR_9->is_avc)
        return VAR_17;
    return VAR_13 - (VAR_15 & 5);
}
