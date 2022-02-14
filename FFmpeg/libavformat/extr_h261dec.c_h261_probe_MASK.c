
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const AVProbeData *VAR_1)
{
    int VAR_2;
    int VAR_3=0;
    int VAR_4=0;
    int VAR_5=0;
    int VAR_6=0;

    for(VAR_2=0; VAR_2<VAR_1->buf_size; VAR_2++){
        if ((FUNC_0(&VAR_1->buf[VAR_2]) - 1) < 0xFFU) {
            int VAR_7 = FUNC_3(VAR_1->buf[VAR_2+1]);
            uint32_t VAR_8 = FUNC_1(&VAR_1->buf[FUNC_2(VAR_2-1, 0)]) >> (24+VAR_7);
            if ((VAR_8 & 0xffff0000) == 0x10000) {
                int VAR_9= (VAR_8>>12)&0xf;
                if(!VAR_9)
                    VAR_6= VAR_8&8;
                if(VAR_9 != VAR_5) VAR_4++;
                else VAR_3++;

                if(VAR_6){
                    static const int VAR_10[16]={1,2,3,4,5,6,7,8,9,10,11,12,0,16,16,16};
                    VAR_5 = VAR_10[VAR_9];
                }else{
                    static const int VAR_11[16]={1,3,16,5,16,0,16,16,16,16,16,16,16,16,16,16};
                    VAR_5 = VAR_11[VAR_9];
                }
            }
        }
    }
    if(VAR_3 > 2*VAR_4 + 6){
        return VAR_0;
    }else if(VAR_3 > 2*VAR_4 + 2)
        return VAR_0 / 2;
    return 0;
}
