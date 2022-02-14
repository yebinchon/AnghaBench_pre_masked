
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int URLContext ;
struct TYPE_5__ {int stream; } ;
typedef TYPE_1__ RTMPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int ,int*,int) ;
 scalar_t__ FUNC_5 (int ,int*,int) ;
 scalar_t__ FUNC_6 (int*,int*,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__*,scalar_t__*,int*,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int ,int*,int) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_4, RTMPContext *VAR_5)
{
    uint8_t VAR_6[VAR_3];
    uint32_t VAR_7;
    uint32_t VAR_8;
    uint8_t VAR_9[VAR_3];
    uint8_t VAR_10[VAR_3];
    uint32_t VAR_11;
    uint32_t VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15;

    VAR_14 = FUNC_4(VAR_5->stream, VAR_6, 1);
    if (VAR_14 <= 0) {
        FUNC_3(VAR_4, VAR_0, "Unable to read handshake\n");
        return FUNC_0(VAR_2);
    }

    if (VAR_6[0] != 3) {
        FUNC_3(VAR_4, VAR_0, "RTMP protocol version mismatch\n");
        return FUNC_0(VAR_2);
    }
    if (FUNC_5(VAR_5->stream, VAR_6, 1) <= 0) {
        FUNC_3(VAR_4, VAR_0,
               "Unable to write answer - RTMP S0\n");
        return FUNC_0(VAR_2);
    }

    VAR_15 = FUNC_7(VAR_5, &VAR_7, &VAR_11, VAR_9,
                                 VAR_3);
    if (VAR_15) {
        FUNC_3(VAR_4, VAR_0, "RTMP Handshake C1 Error\n");
        return VAR_15;
    }


    VAR_8 = VAR_7;

    for (VAR_13 = 8; VAR_13 < (VAR_3);
         VAR_13 += 4)
        FUNC_1(VAR_10 + VAR_13, FUNC_2());

    VAR_15 = FUNC_8(VAR_5, VAR_8, 0, VAR_10,
                              VAR_3);
    if (VAR_15) {
        FUNC_3(VAR_4, VAR_0, "RTMP Handshake S1 Error\n");
        return VAR_15;
    }

    VAR_15 = FUNC_8(VAR_5, VAR_7, 0, VAR_9,
                              VAR_3);
    if (VAR_15) {
        FUNC_3(VAR_4, VAR_0, "RTMP Handshake S2 Error\n");
        return VAR_15;
    }

    VAR_15 = FUNC_7(VAR_5, &VAR_12, &VAR_11, VAR_6,
                                 VAR_3);
    if (VAR_15) {
        FUNC_3(VAR_4, VAR_0, "RTMP Handshake C2 Error\n");
        return VAR_15;
    }
    if (VAR_12 != VAR_8)
        FUNC_3(VAR_4, VAR_1,
               "Erroneous C2 Message epoch does not match up with C1 epoch\n");
    if (FUNC_6(VAR_6 + 8, VAR_10 + 8,
               VAR_3 - 8))
        FUNC_3(VAR_4, VAR_1,
               "Erroneous C2 Message random does not match up\n");

    return 0;
}
