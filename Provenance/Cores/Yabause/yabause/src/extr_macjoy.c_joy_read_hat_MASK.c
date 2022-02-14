
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hats_count; TYPE_4__* hats; } ;
typedef TYPE_1__ joydata_t ;
struct TYPE_6__ {int min; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,TYPE_4__*) ;

int FUNC_1(joydata_t *VAR_5, int VAR_6) {
    int VAR_7;

    if(VAR_6 >= VAR_5->hats_count) {
        return -1;
    }

    VAR_7 = FUNC_0(VAR_5, VAR_5->hats + VAR_6) - VAR_5->hats[VAR_6].min;


    if(VAR_5->hats[VAR_6].max - VAR_5->hats[VAR_6].min + 1 == 4) {
        VAR_7 <<= 1;
    }

    switch(VAR_7) {
        case 0:
            return VAR_4;
        case 1:
            return VAR_4 | VAR_3;
        case 2:
            return VAR_3;
        case 3:
            return VAR_3 | VAR_1;
        case 4:
            return VAR_1;
        case 5:
            return VAR_1 | VAR_2;
        case 6:
            return VAR_2;
        case 7:
            return VAR_2 | VAR_4;
        default:
            return VAR_0;
    }
}
