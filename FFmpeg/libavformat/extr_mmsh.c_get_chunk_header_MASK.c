
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int mms_hd; } ;
struct TYPE_4__ {int chunk_seq; TYPE_2__ mms; } ;
typedef TYPE_1__ MMSHContext ;
typedef TYPE_2__ MMSContext ;
typedef int ChunkType ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static ChunkType FUNC_5(MMSHContext *VAR_5, int *VAR_6)
{
    MMSContext *VAR_7 = &VAR_5->mms;
    uint8_t VAR_8[VAR_2];
    uint8_t VAR_9[VAR_4];
    ChunkType VAR_10;
    int VAR_11, VAR_12, VAR_13;

    VAR_12 = FUNC_4(VAR_7->mms_hd, VAR_8, VAR_2);
    if (VAR_12 != VAR_2) {
        FUNC_3(((void*)0), VAR_1, "Read data packet header failed!\n");
        return FUNC_0(VAR_3);
    }
    VAR_10 = FUNC_1(VAR_8);
    VAR_11 = FUNC_1(VAR_8 + 2);

    switch (VAR_10) {
    case 129:
    case 128:
        VAR_13 = 4;
        break;
    case 131:
    case 130:
        VAR_13 = 8;
        break;
    default:
        FUNC_3(((void*)0), VAR_1, "Strange chunk type %d\n", VAR_10);
        return VAR_0;
    }

    VAR_12 = FUNC_4(VAR_7->mms_hd, VAR_9, VAR_13);
    if (VAR_12 != VAR_13) {
        FUNC_3(((void*)0), VAR_1, "Read ext header failed!\n");
        return FUNC_0(VAR_3);
    }
    *VAR_6 = VAR_11 - VAR_13;
    if (VAR_10 == 129 || VAR_10 == 130)
        VAR_5->chunk_seq = FUNC_2(VAR_9);
    return VAR_10;
}
