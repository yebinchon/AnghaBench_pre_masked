
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cutoff; int bit_rate; scalar_t__ global_quality; } ;
struct TYPE_6__ {int vbr; int apply_phase_inv; int max_bandwidth; int packet_loss; int complexity; } ;
typedef int OpusMSEncoder ;
typedef TYPE_1__ LibopusEncOpts ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,int ,char*,...) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_4, OpusMSEncoder *VAR_5,
                                     LibopusEncOpts *VAR_6)
{
    int VAR_7;

    if (VAR_4->global_quality) {
        FUNC_8(VAR_4, VAR_0,
               "Quality-based encoding not supported, "
               "please specify a bitrate and VBR setting.\n");
        return FUNC_0(VAR_2);
    }

    VAR_7 = FUNC_9(VAR_5, FUNC_1(VAR_4->bit_rate));
    if (VAR_7 != VAR_3) {
        FUNC_8(VAR_4, VAR_0,
               "Failed to set bitrate: %s\n", FUNC_10(VAR_7));
        return VAR_7;
    }

    VAR_7 = FUNC_9(VAR_5,
                                       FUNC_2(VAR_6->complexity));
    if (VAR_7 != VAR_3)
        FUNC_8(VAR_4, VAR_1,
               "Unable to set complexity: %s\n", FUNC_10(VAR_7));

    VAR_7 = FUNC_9(VAR_5, FUNC_6(!!VAR_6->vbr));
    if (VAR_7 != VAR_3)
        FUNC_8(VAR_4, VAR_1,
               "Unable to set VBR: %s\n", FUNC_10(VAR_7));

    VAR_7 = FUNC_9(VAR_5,
                                       FUNC_7(VAR_6->vbr == 2));
    if (VAR_7 != VAR_3)
        FUNC_8(VAR_4, VAR_1,
               "Unable to set constrained VBR: %s\n", FUNC_10(VAR_7));

    VAR_7 = FUNC_9(VAR_5,
                                       FUNC_4(VAR_6->packet_loss));
    if (VAR_7 != VAR_3)
        FUNC_8(VAR_4, VAR_1,
               "Unable to set expected packet loss percentage: %s\n",
               FUNC_10(VAR_7));

    if (VAR_4->cutoff) {
        VAR_7 = FUNC_9(VAR_5,
                                           FUNC_3(VAR_6->max_bandwidth));
        if (VAR_7 != VAR_3)
            FUNC_8(VAR_4, VAR_1,
                   "Unable to set maximum bandwidth: %s\n", FUNC_10(VAR_7));
    }
    return VAR_3;
}
