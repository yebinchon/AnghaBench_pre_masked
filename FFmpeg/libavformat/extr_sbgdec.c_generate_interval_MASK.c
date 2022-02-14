
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ws_intervals {int dummy; } ;
struct TYPE_2__ {int l; int r; } ;
struct sbg_script_synth {scalar_t__ vol; int type; int beat; TYPE_1__ ref; int carrier; } ;
struct sbg_script {int dummy; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ws_intervals*,struct sbg_script*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (struct ws_intervals*,int ,int,int,scalar_t__,int ,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (void*,int ,char*,...) ;

__attribute__((used)) static int FUNC_3(void *VAR_5, struct sbg_script *VAR_6,
                             struct ws_intervals *VAR_7,
                             int64_t VAR_8, int64_t VAR_9,
                             struct sbg_script_synth *VAR_10,
                             struct sbg_script_synth *VAR_11,
                             int VAR_12)
{
    int VAR_13;

    if (VAR_9 <= VAR_8 || (VAR_10->vol == 0 && VAR_11->vol == 0))
        return 0;
    switch (VAR_10->type) {
        case 130:
            break;
        case 129:
            if (VAR_10->beat == 0 && VAR_11->beat == 0) {
                VAR_13 = FUNC_1(VAR_7, VAR_4, 3, VAR_10->ref.l,
                                 VAR_8, VAR_10->carrier, VAR_10->vol,
                                 VAR_9, VAR_11->carrier, VAR_11->vol);
                if (VAR_13 < 0)
                    return VAR_13;
                VAR_11->ref.l = VAR_11->ref.r = VAR_13;
            } else {
                VAR_13 = FUNC_1(VAR_7, VAR_4, 1, VAR_10->ref.l,
                                 VAR_8, VAR_10->carrier + VAR_10->beat / 2, VAR_10->vol,
                                 VAR_9, VAR_11->carrier + VAR_11->beat / 2, VAR_11->vol);
                if (VAR_13 < 0)
                    return VAR_13;
                VAR_11->ref.l = VAR_13;
                VAR_13 = FUNC_1(VAR_7, VAR_4, 2, VAR_10->ref.r,
                                 VAR_8, VAR_10->carrier - VAR_10->beat / 2, VAR_10->vol,
                                 VAR_9, VAR_11->carrier - VAR_11->beat / 2, VAR_11->vol);
                if (VAR_13 < 0)
                    return VAR_13;
                VAR_11->ref.r = VAR_13;
            }
            break;

        case 133:
            if (VAR_12 == 2) {
                VAR_13 = FUNC_0(VAR_7, VAR_6, VAR_8, VAR_9, VAR_10->carrier, VAR_11->vol);
                if (VAR_13 < 0)
                    return VAR_13;
            }
            break;

        case 128:
            FUNC_2(VAR_5, VAR_2, "Spinning noise not implemented, "
                                        "using pink noise instead.\n");

        case 131:
            VAR_13 = FUNC_1(VAR_7, VAR_3, 3, VAR_10->ref.l,
                             VAR_8, 0, VAR_10->vol - VAR_10->vol / 4,
                             VAR_9, 0, VAR_11->vol - VAR_11->vol / 4);
            if (VAR_13 < 0)
                return VAR_13;
            VAR_11->ref.l = VAR_11->ref.r = VAR_13;
            break;

        case 132:

        default:
            FUNC_2(VAR_5, VAR_1,
                   "Type %d is not implemented\n", VAR_10->type);
            return VAR_0;
    }
    return 0;
}
