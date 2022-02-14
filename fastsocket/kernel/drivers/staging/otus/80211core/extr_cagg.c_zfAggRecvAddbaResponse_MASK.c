
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct aggBaFrameParameter {int ba_parameter; int ba_policy; int tid; int buffer_size; void* ba_timeout; void* status_code; int dialog; int * buf; } ;
struct TYPE_2__ {scalar_t__ wlanMode; int addbaComplete; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 void* FUNC_4 (int *,int *,int) ;

u16_t FUNC_5(zdev_t* VAR_4, zbuf_t* VAR_5)
{
    u16_t VAR_6,VAR_7, VAR_8=0;
    u16_t VAR_9[3];
    struct aggBaFrameParameter VAR_10;

    FUNC_2(VAR_4);



    VAR_9[0] = FUNC_4(VAR_4, VAR_5, 10);
    VAR_9[1] = FUNC_4(VAR_4, VAR_5, 12);
    VAR_9[2] = FUNC_4(VAR_4, VAR_5, 14);

    if (VAR_2->wlanMode == VAR_0)
        VAR_8 = FUNC_0(VAR_4, VAR_9);


    VAR_10.buf = VAR_5;
    VAR_10.dialog = FUNC_3(VAR_4, VAR_5, 26);
    VAR_10.status_code = FUNC_4(VAR_4, VAR_5, 27);
    if (!VAR_10.status_code)
    {
        VAR_2->addbaComplete=1;
    }




    VAR_10.ba_parameter = FUNC_4(VAR_4, VAR_5, 29);
    VAR_10.ba_policy = (VAR_10.ba_parameter >> 1) & 1;
    VAR_10.tid = (VAR_10.ba_parameter >> 2) & 0xF;
    VAR_10.buffer_size = (VAR_10.ba_parameter >> 6);



    VAR_10.ba_timeout = FUNC_4(VAR_4, VAR_5, 31);

    VAR_6=26;
    while(VAR_6 < 32) {
        FUNC_1("Recv ADDBA Rsp:", FUNC_3(VAR_4,VAR_5,VAR_6));
        VAR_6++;
    }

    VAR_7 = VAR_3[VAR_10.tid&0x7] & 0x3;







    return VAR_1;
}
