
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int warned_960_sbr; } ;
struct TYPE_7__ {int frame_length_short; int sbr; int ps; int object_type; } ;
typedef TYPE_1__ MPEG4AudioConfig ;
typedef int GetBitContext ;
typedef int AVCodecContext ;
typedef TYPE_2__ AACContext ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int *,TYPE_1__*,int **,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int **,int,int ,int ) ;
 int FUNC_6 (int *,int **,int*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(AACContext *VAR_4, AVCodecContext *VAR_5,
                                     GetBitContext *VAR_6,
                                     int VAR_7,
                                     MPEG4AudioConfig *VAR_8,
                                     int VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13;
    uint8_t VAR_14[VAR_2*4][3];
    int VAR_15 = 0;
    VAR_8->frame_length_short = FUNC_4(VAR_6);
    if (VAR_8->frame_length_short && VAR_8->sbr == 1) {
      FUNC_0(VAR_5, "SBR with 960 frame length");
      if (VAR_4) VAR_4->warned_960_sbr = 1;
      VAR_8->sbr = 0;
      VAR_8->ps = 0;
    }


    if (FUNC_4(VAR_6))
        FUNC_7(VAR_6, 14);
    VAR_10 = FUNC_4(VAR_6);

    if (VAR_8->object_type == VAR_0 ||
        VAR_8->object_type == 129)
        FUNC_7(VAR_6, 3);

    if (VAR_9 == 0) {
        FUNC_7(VAR_6, 4);
        VAR_15 = FUNC_2(VAR_5, VAR_8, VAR_14, VAR_6, VAR_7);
        if (VAR_15 < 0)
            return VAR_15;
    } else {
        if ((VAR_11 = FUNC_6(VAR_5, VAR_14,
                                              &VAR_15, VAR_9)))
            return VAR_11;
    }

    if (FUNC_1(VAR_14, VAR_15) > 1) {
        VAR_8->ps = 0;
    } else if (VAR_8->sbr == 1 && VAR_8->ps == -1)
        VAR_8->ps = 1;

    if (VAR_4 && (VAR_11 = FUNC_5(VAR_4, VAR_14, VAR_15, VAR_3, 0)))
        return VAR_11;

    if (VAR_10) {
        switch (VAR_8->object_type) {
        case 128:
            FUNC_7(VAR_6, 5);
            FUNC_7(VAR_6, 11);
            break;
        case 132:
        case 130:
        case 129:
        case 131:
            VAR_13 = FUNC_3(VAR_6, 3);
            if (VAR_13) {
                FUNC_0(VAR_5,
                                              "AAC data resilience (flags %x)",
                                              VAR_13);
                return VAR_1;
            }
            break;
        }
        FUNC_8(VAR_6);
    }
    switch (VAR_8->object_type) {
    case 132:
    case 130:
    case 129:
    case 131:
        VAR_12 = FUNC_3(VAR_6, 2);
        if (VAR_12) {
            FUNC_0(VAR_5,
                                          "epConfig %d", VAR_12);
            return VAR_1;
        }
    }
    return 0;
}
