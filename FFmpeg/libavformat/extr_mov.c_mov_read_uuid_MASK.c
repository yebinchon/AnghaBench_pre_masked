
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uuid ;
typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_13__ {int nb_streams; int metadata; TYPE_4__** streams; } ;
struct TYPE_12__ {TYPE_1__* priv_data; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_10__ {int bitrates_count; int* bitrates; TYPE_8__* fc; scalar_t__ export_xmp; } ;
struct TYPE_9__ {int spherical; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVContext ;
typedef TYPE_3__ MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int*,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (TYPE_8__*,int ,char*) ;
 int* FUNC_5 (size_t) ;
 int* FUNC_6 (int*,int,int) ;
 int* FUNC_7 (int*,char*) ;
 int FUNC_8 (int *,int*,size_t) ;
 int FUNC_9 (int *,size_t) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int*,int const*,int) ;
 int FUNC_11 (TYPE_1__*,int *,size_t) ;
 int FUNC_12 (int*,char**,int) ;

__attribute__((used)) static int FUNC_13(MOVContext *VAR_6, AVIOContext *VAR_7, MOVAtom VAR_8)
{
    AVStream *VAR_9;
    MOVStreamContext *VAR_10;
    int64_t VAR_11;
    uint8_t VAR_12[16];
    static const uint8_t VAR_13[] = {
        0xa5, 0xd4, 0x0b, 0x30, 0xe8, 0x14, 0x11, 0xdd,
        0xba, 0x2f, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66
    };
    static const uint8_t VAR_14[] = {
        0xbe, 0x7a, 0xcf, 0xcb, 0x97, 0xa9, 0x42, 0xe8,
        0x9c, 0x71, 0x99, 0x94, 0x91, 0xe3, 0xaf, 0xac
    };
    static const uint8_t VAR_15[] = {
        0xff, 0xcc, 0x82, 0x63, 0xf8, 0x55, 0x4a, 0x93,
        0x88, 0x14, 0x58, 0x7a, 0x02, 0x52, 0x1f, 0xdd,
    };

    if (VAR_8.size < sizeof(VAR_12) || VAR_8.size >= FUNC_1(VAR_3, VAR_4))
        return VAR_0;

    if (VAR_6->fc->nb_streams < 1)
        return 0;
    VAR_9 = VAR_6->fc->streams[VAR_6->fc->nb_streams - 1];
    VAR_10 = VAR_9->priv_data;

    VAR_11 = FUNC_8(VAR_7, VAR_12, sizeof(VAR_12));
    if (VAR_11 < 0) {
        return VAR_11;
    } else if (VAR_11 != sizeof(VAR_12)) {
        return VAR_0;
    }
    if (!FUNC_10(VAR_12, VAR_13, sizeof(VAR_12))) {
        uint8_t *VAR_16, *VAR_17;
        char *VAR_18;
        size_t VAR_19 = VAR_8.size - sizeof(VAR_12);

        if (VAR_19 < 4) {
            return VAR_0;
        }
        VAR_11 = FUNC_9(VAR_7, 4);
        VAR_19 -= 4;

        VAR_16 = FUNC_5(VAR_19 + 1);
        if (!VAR_16) {
            return FUNC_0(VAR_2);
        }
        VAR_11 = FUNC_8(VAR_7, VAR_16, VAR_19);
        if (VAR_11 < 0) {
            FUNC_3(VAR_16);
            return VAR_11;
        } else if (VAR_11 != VAR_19) {
            FUNC_3(VAR_16);
            return VAR_0;
        }

        VAR_17 = VAR_16;
        while ((VAR_17 = FUNC_7(VAR_17, "systemBitrate=\""))) {
            VAR_17 += sizeof("systemBitrate=\"") - 1;
            VAR_6->bitrates_count++;
            VAR_6->bitrates = FUNC_6(VAR_6->bitrates, VAR_6->bitrates_count, sizeof(*VAR_6->bitrates));
            if (!VAR_6->bitrates) {
                VAR_6->bitrates_count = 0;
                FUNC_3(VAR_16);
                return FUNC_0(VAR_2);
            }
            VAR_5 = 0;
            VAR_11 = FUNC_12(VAR_17, &VAR_18, 10);
            if (VAR_11 < 0 || VAR_5 || *VAR_18 != '"') {
                VAR_6->bitrates[VAR_6->bitrates_count - 1] = 0;
            } else {
                VAR_6->bitrates[VAR_6->bitrates_count - 1] = VAR_11;
            }
        }

        FUNC_3(VAR_16);
    } else if (!FUNC_10(VAR_12, VAR_14, sizeof(VAR_12))) {
        uint8_t *VAR_20;
        size_t VAR_21 = VAR_8.size - sizeof(VAR_12);
        if (VAR_6->export_xmp) {
            VAR_20 = FUNC_5(VAR_21 + 1);
            if (!VAR_20) {
                return FUNC_0(VAR_2);
            }
            VAR_11 = FUNC_8(VAR_7, VAR_20, VAR_21);
            if (VAR_11 < 0) {
                FUNC_3(VAR_20);
                return VAR_11;
            } else if (VAR_11 != VAR_21) {
                FUNC_3(VAR_20);
                return VAR_0;
            }
            VAR_20[VAR_21] = '\0';
            FUNC_2(&VAR_6->fc->metadata, "xmp", VAR_20, 0);
            FUNC_3(VAR_20);
        } else {

            VAR_11 = FUNC_9(VAR_7, VAR_21);
            if (VAR_11 < 0)
                return VAR_11;
        }
    } else if (!FUNC_10(VAR_12, VAR_15, sizeof(VAR_12))) {
        size_t VAR_22 = VAR_8.size - sizeof(VAR_12);
        VAR_11 = FUNC_11(VAR_10, VAR_7, VAR_22);
        if (VAR_11 < 0)
            return VAR_11;
        if (!VAR_10->spherical)
            FUNC_4(VAR_6->fc, VAR_1, "Invalid spherical metadata found\n");
    }

    return 0;
}
