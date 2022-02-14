
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_12__ {int nb_streams; TYPE_4__** streams; } ;
struct TYPE_11__ {int metadata; TYPE_1__* codecpar; } ;
struct TYPE_10__ {int size; } ;
struct TYPE_9__ {scalar_t__ trak_index; int found_hdlr_mdta; int isom; TYPE_7__* fc; } ;
struct TYPE_8__ {int codec_type; int codec_id; } ;
typedef TYPE_2__ MOVContext ;
typedef TYPE_3__ MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (char,char,char,char) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int *,char*,char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (TYPE_7__*,int ,char*,int ) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,int) ;

__attribute__((used)) static int FUNC_13(MOVContext *VAR_10, AVIOContext *VAR_11, MOVAtom VAR_12)
{
    AVStream *VAR_13;
    uint32_t VAR_14;
    uint32_t VAR_15;
    int64_t VAR_16;
    char *VAR_17;
    int VAR_18;

    FUNC_8(VAR_11);
    FUNC_9(VAR_11);


    VAR_15 = FUNC_11(VAR_11);
    VAR_14 = FUNC_11(VAR_11);

    FUNC_6(VAR_10->fc, VAR_6, "ctype=%s\n", FUNC_4(VAR_15));
    FUNC_6(VAR_10->fc, VAR_6, "stype=%s\n", FUNC_4(VAR_14));

    if (VAR_10->trak_index < 0) {
        if (VAR_14 == FUNC_2('m','d','t','a')) {
            VAR_10->found_hdlr_mdta = 1;
        }
        return 0;
    }

    VAR_13 = VAR_10->fc->streams[VAR_10->fc->nb_streams-1];

    if (VAR_14 == FUNC_2('v','i','d','e'))
        VAR_13->codecpar->codec_type = VAR_3;
    else if (VAR_14 == FUNC_2('s','o','u','n'))
        VAR_13->codecpar->codec_type = VAR_1;
    else if (VAR_14 == FUNC_2('m','1','a',' '))
        VAR_13->codecpar->codec_id = VAR_4;
    else if ((VAR_14 == FUNC_2('s','u','b','p')) || (VAR_14 == FUNC_2('c','l','c','p')))
        VAR_13->codecpar->codec_type = VAR_2;

    FUNC_10(VAR_11);
    FUNC_10(VAR_11);
    FUNC_10(VAR_11);

    VAR_16 = VAR_12.size - 24;
    if (VAR_16 > 0) {
        if (VAR_16 > FUNC_1(VAR_8, VAR_9-1))
            return VAR_0;
        VAR_17 = FUNC_7(VAR_16 + 1);
        if (!VAR_17)
            return FUNC_0(VAR_7);

        VAR_18 = FUNC_12(VAR_11, VAR_17, VAR_16);
        if (VAR_18 < 0) {
            FUNC_5(&VAR_17);
            return VAR_18;
        }
        VAR_17[VAR_16] = 0;
        if (VAR_17[0]) {
            int VAR_19 = (!VAR_10->isom && VAR_17[0] == VAR_16 - 1);

            FUNC_3(&VAR_13->metadata, "handler_name", VAR_17 + VAR_19, VAR_5);
        }
        FUNC_5(&VAR_17);
    }

    return 0;
}
