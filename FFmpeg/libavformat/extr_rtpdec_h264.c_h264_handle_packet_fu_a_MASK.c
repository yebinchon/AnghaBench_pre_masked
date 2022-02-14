
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int PayloadContext ;
typedef int AVPacket ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int const*,int,int,int*,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2, PayloadContext *VAR_3, AVPacket *VAR_4,
                                   const uint8_t *VAR_5, int VAR_6,
                                   int *VAR_7, int VAR_8)
{
    uint8_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    if (VAR_6 < 3) {
        FUNC_0(VAR_2, VAR_1, "Too short data for FU-A H.264 RTP packet\n");
        return VAR_0;
    }

    VAR_9 = VAR_5[0];
    VAR_10 = VAR_5[1];
    VAR_11 = VAR_10 >> 7;
    VAR_12 = VAR_10 & 0x1f;
    VAR_13 = VAR_9 & 0xe0 | VAR_12;


    VAR_5 += 2;
    VAR_6 -= 2;

    if (VAR_11 && VAR_7)
        VAR_7[VAR_12 & VAR_8]++;
    return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_11, &VAR_13, 1);
}
