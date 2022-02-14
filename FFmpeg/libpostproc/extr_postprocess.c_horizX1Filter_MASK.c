
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(uint8_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    static uint64_t VAR_5[256];
    if(!VAR_5[255])
    {
        int VAR_6;
        for(VAR_6=0; VAR_6<256; VAR_6++)
        {
            int VAR_7= VAR_6 < 128 ? 2*VAR_6 : 2*(VAR_6-256);
            uint64_t VAR_8= (VAR_7/16) & 0xFF;
            uint64_t VAR_9= (VAR_7*3/16) & 0xFF;
            uint64_t VAR_10= (VAR_7*5/16) & 0xFF;
            uint64_t VAR_11= (7*VAR_7/16) & 0xFF;
            uint64_t VAR_12= (0x100 - VAR_8)&0xFF;
            uint64_t VAR_13= (0x100 - VAR_9)&0xFF;
            uint64_t VAR_14= (0x100 - VAR_10)&0xFF;
            uint64_t VAR_15= (0x100 - VAR_10)&0xFF;

            VAR_5[VAR_6] = (VAR_8<<56) | (VAR_9<<48) | (VAR_10<<40) | (VAR_11<<32) |
                       (VAR_15<<24) | (VAR_14<<16) | (VAR_13<<8) | (VAR_12);

        }
    }

    for(VAR_4=0; VAR_4<VAR_0; VAR_4++){
        int VAR_16= VAR_1[1] - VAR_1[2];
        int VAR_17= VAR_1[3] - VAR_1[4];
        int VAR_18= VAR_1[5] - VAR_1[6];

        int VAR_19= FUNC_1(FUNC_0(VAR_17) - (FUNC_0(VAR_16) + FUNC_0(VAR_18))/2, 0);

        if(VAR_19 < VAR_3){
            int VAR_20 = VAR_19 * FUNC_2(-VAR_17);

            VAR_1[1] +=VAR_20/8;
            VAR_1[2] +=VAR_20/4;
            VAR_1[3] +=3*VAR_20/8;
            VAR_1[4] -=3*VAR_20/8;
            VAR_1[5] -=VAR_20/4;
            VAR_1[6] -=VAR_20/8;
        }
        VAR_1+=VAR_2;
    }
}
