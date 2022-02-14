
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ strict_std_compliance; } ;
struct TYPE_18__ {TYPE_1__* par; } ;
struct TYPE_17__ {unsigned int codec_tag; scalar_t__ codec_id; scalar_t__ codec_type; } ;
typedef TYPE_2__ MOVTrack ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_0 (char,char,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int VAR_11 ;
 void* FUNC_3 (int ,scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 unsigned int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 unsigned int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 unsigned int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 unsigned int FUNC_8 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static unsigned int FUNC_9(AVFormatContext *VAR_16, MOVTrack *VAR_17)
{
    unsigned int VAR_18 = VAR_17->par->codec_tag;

    if (!VAR_18 || (VAR_16->strict_std_compliance >= VAR_10 &&
                 (VAR_17->par->codec_id == VAR_4 ||
                  VAR_17->par->codec_id == VAR_8 ||
                  VAR_17->par->codec_id == VAR_5 ||
                  VAR_17->par->codec_id == VAR_6 ||
                  VAR_17->par->codec_id == VAR_3 ||
                  VAR_17->par->codec_id == VAR_7 ||
                  FUNC_1(VAR_17->par->codec_id)))) {
        if (VAR_17->par->codec_id == VAR_4)
            VAR_18 = FUNC_5(VAR_16, VAR_17);
        else if (VAR_17->par->codec_id == VAR_8)
            VAR_18 = FUNC_8(VAR_16, VAR_17);
        else if (VAR_17->par->codec_id == VAR_7)
            VAR_18 = FUNC_7(VAR_16, VAR_17);
        else if (VAR_17->par->codec_id == VAR_6)
            VAR_18 = FUNC_6(VAR_16, VAR_17);
        else if (VAR_17->par->codec_id == VAR_3)
            VAR_18 = FUNC_4(VAR_16, VAR_17);
        else if (VAR_17->par->codec_type == VAR_2) {
            VAR_18 = FUNC_3(VAR_14, VAR_17->par->codec_id);
            if (!VAR_18) {
                VAR_18 = FUNC_3(VAR_11, VAR_17->par->codec_id);
                if (VAR_18)
                    FUNC_2(VAR_16, VAR_9, "Using MS style video codec tag, "
                           "the file may be unplayable!\n");
            }
        } else if (VAR_17->par->codec_type == VAR_0) {
            VAR_18 = FUNC_3(VAR_12, VAR_17->par->codec_id);
            if (!VAR_18) {
                int VAR_19 = FUNC_3(VAR_15, VAR_17->par->codec_id);
                if (VAR_19) {
                    VAR_18 = FUNC_0('m', 's', ((VAR_19 >> 8) & 0xff), (VAR_19 & 0xff));
                    FUNC_2(VAR_16, VAR_9, "Using MS style audio codec tag, "
                           "the file may be unplayable!\n");
                }
            }
        } else if (VAR_17->par->codec_type == VAR_1)
            VAR_18 = FUNC_3(VAR_13, VAR_17->par->codec_id);
    }

    return VAR_18;
}
