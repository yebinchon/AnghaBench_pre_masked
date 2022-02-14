
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int first_gop_closed; } ;
typedef TYPE_1__ GXFStreamContext ;



__attribute__((used)) static int FUNC_0(GXFStreamContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    uint32_t VAR_3=-1;
    int VAR_4;
    for(VAR_4=0; VAR_4<VAR_2-4 && VAR_3!=0x100; VAR_4++){
        VAR_3 = (VAR_3<<8) + VAR_1[VAR_4];
        if(VAR_3 == 0x1B8 && VAR_0->first_gop_closed == -1)
            VAR_0->first_gop_closed= (VAR_1[VAR_4+4]>>6)&1;
    }
    return (VAR_1[VAR_4+1]>>3)&7;
}
