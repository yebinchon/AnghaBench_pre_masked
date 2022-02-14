
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int PayloadContext ;
typedef int AVStream ;
typedef int AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int *,int *,int *,int *,int *,int const*,int) ;
 int FUNC_1 (int *,int *,int *,int *,int *,int const*,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, PayloadContext *VAR_1,
                              AVStream *VAR_2, AVPacket *VAR_3, uint32_t *VAR_4,
                              const uint8_t *VAR_5, int VAR_6, uint16_t VAR_7,
                              int VAR_8)
{
    if (VAR_5)
        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    else
        return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
