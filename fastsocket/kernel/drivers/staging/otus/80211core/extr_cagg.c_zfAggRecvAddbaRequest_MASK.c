
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct aggBaFrameParameter {int ba_parameter; int ba_policy; int tid; int buffer_size; int ba_timeout; int ba_start_seq; int dialog; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct aggBaFrameParameter*) ;
 int FUNC_1 (int *,struct aggBaFrameParameter*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;

u16_t FUNC_5(zdev_t* VAR_1, zbuf_t* VAR_2)
{

    struct aggBaFrameParameter VAR_3;
    u16_t VAR_4;




    VAR_3.buf = VAR_2;
    VAR_3.dialog = FUNC_3(VAR_1, VAR_2, 26);



    VAR_3.ba_parameter = FUNC_4(VAR_1, VAR_2, 27);
    VAR_3.ba_policy = (VAR_3.ba_parameter >> 1) & 1;
    VAR_3.tid = (VAR_3.ba_parameter >> 2) & 0xF;
    VAR_3.buffer_size = (VAR_3.ba_parameter >> 6);



    VAR_3.ba_timeout = FUNC_4(VAR_1, VAR_2, 29);



    VAR_3.ba_start_seq = FUNC_4(VAR_1, VAR_2, 31) >> 4;

    VAR_4=26;
    while(VAR_4 < 32) {
        FUNC_2("Recv ADDBA Req:", FUNC_3(VAR_1,VAR_2,VAR_4));
        VAR_4++;
    }

    FUNC_1(VAR_1, &VAR_3);

    FUNC_0(VAR_1, VAR_2, &VAR_3);

    return VAR_0;
}
