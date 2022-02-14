
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {int metadata; } ;
struct TYPE_16__ {int stream; scalar_t__ skip_changes; } ;
struct TYPE_14__ {TYPE_5__* opaque; } ;
struct TYPE_12__ {TYPE_3__ section_filter; } ;
struct TYPE_15__ {TYPE_1__ u; } ;
struct TYPE_13__ {scalar_t__ tid; } ;
typedef TYPE_2__ SectionHeader ;
typedef TYPE_3__ MpegTSSectionFilter ;
typedef TYPE_4__ MpegTSFilter ;
typedef TYPE_5__ MpegTSContext ;
typedef TYPE_6__ AVProgram ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,char*,...) ;
 TYPE_6__* FUNC_3 (int ,int) ;
 int FUNC_4 (int const**,int const*) ;
 int FUNC_5 (int const**,int const*) ;
 char* FUNC_6 (int const**,int const*) ;
 int FUNC_7 (int ,int const*,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int const**,int const*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_10(MpegTSFilter *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    MpegTSContext *VAR_5 = VAR_2->u.section_filter.opaque;
    MpegTSSectionFilter *VAR_6 = &VAR_2->u.section_filter;
    SectionHeader VAR_7, *VAR_8 = &VAR_7;
    const uint8_t *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    char *VAR_20, *VAR_21;

    FUNC_2(VAR_5->stream, VAR_0, "SDT:\n");
    FUNC_7(VAR_5->stream, VAR_3, VAR_4);

    VAR_10 = VAR_3 + VAR_4 - 4;
    VAR_9 = VAR_3;
    if (FUNC_8(VAR_8, &VAR_9, VAR_10) < 0)
        return;
    if (VAR_8->tid != VAR_1)
        return;
    if (VAR_5->skip_changes)
        return;
    if (FUNC_9(VAR_8, VAR_6))
        return;

    VAR_13 = FUNC_4(&VAR_9, VAR_10);
    if (VAR_13 < 0)
        return;
    VAR_14 = FUNC_5(&VAR_9, VAR_10);
    if (VAR_14 < 0)
        return;
    for (;;) {
        VAR_15 = FUNC_4(&VAR_9, VAR_10);
        if (VAR_15 < 0)
            break;
        VAR_14 = FUNC_5(&VAR_9, VAR_10);
        if (VAR_14 < 0)
            break;
        VAR_16 = FUNC_4(&VAR_9, VAR_10);
        if (VAR_16 < 0)
            break;
        VAR_16 &= 0xfff;
        VAR_11 = VAR_9 + VAR_16;
        if (VAR_11 > VAR_10)
            break;
        for (;;) {
            VAR_17 = FUNC_5(&VAR_9, VAR_11);
            if (VAR_17 < 0)
                break;
            VAR_18 = FUNC_5(&VAR_9, VAR_11);
            VAR_12 = VAR_9 + VAR_18;
            if (VAR_18 < 0 || VAR_12 > VAR_11)
                break;

            FUNC_2(VAR_5->stream, VAR_0, "tag: 0x%02x len=%d\n",
                    VAR_17, VAR_18);

            switch (VAR_17) {
            case 0x48:
                VAR_19 = FUNC_5(&VAR_9, VAR_10);
                if (VAR_19 < 0)
                    break;
                VAR_21 = FUNC_6(&VAR_9, VAR_10);
                if (!VAR_21)
                    break;
                VAR_20 = FUNC_6(&VAR_9, VAR_10);
                if (VAR_20) {
                    AVProgram *VAR_22 = FUNC_3(VAR_5->stream, VAR_15);
                    if (VAR_22) {
                        FUNC_0(&VAR_22->metadata, "service_name", VAR_20, 0);
                        FUNC_0(&VAR_22->metadata, "service_provider",
                                    VAR_21, 0);
                    }
                }
                FUNC_1(VAR_20);
                FUNC_1(VAR_21);
                break;
            default:
                break;
            }
            VAR_9 = VAR_12;
        }
        VAR_9 = VAR_11;
    }
}
