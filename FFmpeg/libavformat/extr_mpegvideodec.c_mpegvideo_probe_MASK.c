
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;



 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_1 (int const*,int const*,int*) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_4)
{
    uint32_t VAR_5= -1;
    int VAR_6=0, VAR_7=0, VAR_8=0, VAR_9=0, VAR_10=0, VAR_11=0, VAR_12=0, VAR_13=0;
    const uint8_t *VAR_14 = VAR_4->buf, *VAR_15 = VAR_14 + VAR_4->buf_size;
    uint32_t VAR_16 = 0;
    int VAR_17;

    while (VAR_14 < VAR_15) {
        VAR_14 = FUNC_1(VAR_14, VAR_15, &VAR_5);
        if ((VAR_5 & 0xffffff00) == 0x100) {
            switch(VAR_5){
            case 128:
                if (!(VAR_14[3 + 1 + 2] & 0x20))
                    break;
                VAR_17 = -1;
                if (VAR_14[VAR_17 + 8] & 2)
                    VAR_17+= 64;
                if (VAR_17 >= VAR_15 - VAR_14)
                    break;
                if (VAR_14[VAR_17 + 8] & 1)
                    VAR_17+= 64;
                if (VAR_17 >= VAR_15 - VAR_14)
                    break;
                if (FUNC_0(VAR_14 + VAR_17 + 9) & 0xFFFFFE)
                    break;
                VAR_7++;
            break;
            case 129: VAR_6++; break;
            case 130: VAR_9++; break;
            case 0x1b6:
                                        VAR_12++; break;
            }
            if (VAR_5 >= VAR_2 && VAR_5 <= 0x1af) {
                if (VAR_16 >= VAR_2 && VAR_16 <= 0x1af) {
                    if (VAR_5 >= VAR_16) VAR_8++;
                    else VAR_13++;
                }else{
                    if (VAR_5 == VAR_2) VAR_8++;
                    else VAR_13++;
                }
            }
            if ((VAR_5 & 0x1f0) == VAR_3) VAR_10++;
            else if((VAR_5 & 0x1e0) == VAR_0) VAR_11++;
            VAR_16 = VAR_5;
        }
    }
    if(VAR_7 && VAR_7*9<=VAR_6*10 && VAR_6*9<=VAR_8*10 && !VAR_9 && !VAR_11 && !VAR_12 && VAR_8 > VAR_13) {
        if(VAR_10) return VAR_1 / 4;
        else return VAR_6>1 ? VAR_1 + 1 : VAR_1 / 2;
    }
    return 0;
}
