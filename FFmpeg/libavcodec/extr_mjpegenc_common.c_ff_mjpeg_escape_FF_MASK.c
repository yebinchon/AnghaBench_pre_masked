
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int* buf; } ;
typedef TYPE_1__ PutBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(PutBitContext *VAR_0, int VAR_1)
{
    int VAR_2;
    int VAR_3, VAR_4;
    uint8_t *VAR_5 = VAR_0->buf + VAR_1;
    int VAR_6= (-(size_t)(VAR_5))&3;
    int VAR_7 = (-FUNC_3(VAR_0))&7;

    if (VAR_7)
        FUNC_2(VAR_0, VAR_7, (1<<VAR_7)-1);

    FUNC_1(VAR_0);
    VAR_2 = FUNC_3(VAR_0) - VAR_1 * 8;

    FUNC_0((VAR_2&7) == 0);
    VAR_2 >>= 3;

    VAR_4=0;
    for(VAR_3=0; VAR_3<VAR_2 && VAR_3<VAR_6; VAR_3++){
        if(VAR_5[VAR_3]==0xFF) VAR_4++;
    }
    for(; VAR_3<VAR_2-15; VAR_3+=16){
        int VAR_8, VAR_9;

        VAR_9= *(uint32_t*)(&VAR_5[VAR_3]);
        VAR_8= (((VAR_9 & (VAR_9>>4))&0x0F0F0F0F)+0x01010101)&0x10101010;
        VAR_9= *(uint32_t*)(&VAR_5[VAR_3+4]);
        VAR_8+=(((VAR_9 & (VAR_9>>4))&0x0F0F0F0F)+0x01010101)&0x10101010;
        VAR_9= *(uint32_t*)(&VAR_5[VAR_3+8]);
        VAR_8+=(((VAR_9 & (VAR_9>>4))&0x0F0F0F0F)+0x01010101)&0x10101010;
        VAR_9= *(uint32_t*)(&VAR_5[VAR_3+12]);
        VAR_8+=(((VAR_9 & (VAR_9>>4))&0x0F0F0F0F)+0x01010101)&0x10101010;

        VAR_8>>=4;
        VAR_8+= (VAR_8>>16);
        VAR_8+= (VAR_8>>8);
        VAR_4+= VAR_8&0xFF;
    }
    for(; VAR_3<VAR_2; VAR_3++){
        if(VAR_5[VAR_3]==0xFF) VAR_4++;
    }

    if(VAR_4==0) return;

    FUNC_1(VAR_0);
    FUNC_4(VAR_0, VAR_4);

    for(VAR_3=VAR_2-1; VAR_4; VAR_3--){
        int VAR_10= VAR_5[VAR_3];

        if(VAR_10==0xFF){
            VAR_5[VAR_3+VAR_4]= 0;
            VAR_4--;
        }

        VAR_5[VAR_3+VAR_4]= VAR_10;
    }
}
