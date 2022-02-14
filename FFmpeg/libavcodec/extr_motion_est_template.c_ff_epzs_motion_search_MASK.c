
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {scalar_t__ flags; } ;
struct TYPE_5__ {TYPE_2__ me; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ MotionEstContext ;


 int FUNC_0 (TYPE_1__*,int*,int*,int**,int,int,int **,int,scalar_t__,int,int) ;

int FUNC_1(MpegEncContext *VAR_0, int *VAR_1, int *VAR_2,
                          int VAR_3[10][2], int VAR_4, int VAR_5,
                          int16_t (*VAR_6)[2], int VAR_7,
                          int VAR_8, int VAR_9)
{
    MotionEstContext * const VAR_10= &VAR_0->me;

    if(VAR_10->flags==0 && VAR_9==16 && VAR_8==0){
        return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, 0, 0, 16);


    }else{
        return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_10->flags, VAR_8, VAR_9);
    }
}
