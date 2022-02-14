
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int AVCodecContext ;



__attribute__((used)) static int FUNC_0(AVCodecContext *VAR_0,
                           const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;
    uint32_t VAR_4= -1;
    int VAR_5=0;

    for(VAR_3=0; VAR_3<VAR_2; VAR_3++){
        VAR_4= (VAR_4<<8) | VAR_1[VAR_3];
        if(VAR_4 == 0x1B3){
            VAR_5=1;
        }else if(VAR_5 && VAR_4 != 0x1B5 && VAR_4 < 0x200 && VAR_4 >= 0x100)
            return VAR_3-3;
    }
    return 0;
}
