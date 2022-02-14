
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_1)
{
    uint64_t VAR_2= -1;
    int VAR_3;
    int VAR_4=0;
    int VAR_5=0;
    int VAR_6=0;
    int VAR_7, VAR_8=-1;
    int VAR_9=0;
    int VAR_10, VAR_11 = -1;

    for(VAR_3=0; VAR_3<VAR_1->buf_size; VAR_3++){
        VAR_2 = (VAR_2<<8) + VAR_1->buf[VAR_3];
        if ((VAR_2 & 0xfffffc000000) == 0x80000000) {
            VAR_10 = (VAR_2 >> 18) & 0xFF;
            VAR_7= (VAR_2>>10)&7;
            if( VAR_7 != VAR_8
               && VAR_8>0 && VAR_8<6
               && VAR_7<6)
                VAR_6++;

            if (VAR_10 == VAR_11) {
                VAR_5++;
                continue;
            }

            if (VAR_7 != 7 && !(VAR_2&(1<<9)) && (VAR_2&(1<<5))) {
                VAR_5++;
                continue;
            }

            if((VAR_2&0x30000)==0x20000 && VAR_7){
                VAR_4++;
                VAR_9=0;
            }else
                VAR_5++;
            VAR_8= VAR_7;
            VAR_11 = VAR_10;
        } else if((VAR_2 & 0xffff80000000) == 0x80000000) {
            int VAR_12= (VAR_2>>(31-5)) & 0x1F;
            if(VAR_12<VAR_9){
                VAR_5++;
            }else
                VAR_9= VAR_12;
        }
    }
    if(VAR_4 > 2*VAR_5 + 2*VAR_6 + 3){
        return VAR_0;
    }else if(VAR_4 > 2*VAR_5)
        return VAR_0 / 2;
    return 0;
}
