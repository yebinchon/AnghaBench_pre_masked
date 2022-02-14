
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_9__ {int coefficient; TYPE_3__* third_pattern; TYPE_2__* second_pattern; TYPE_1__* first_pattern; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_7__ {int table; } ;
struct TYPE_6__ {int table; } ;
typedef TYPE_4__ RV34VLC ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int,int,int *,int *,int) ;
 int FUNC_1 (int *,int,int *,int *,int) ;
 int FUNC_2 (int *,int,int *,int *,int,int,int) ;
 int FUNC_3 (int *,int ,int,int) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_4(int16_t *VAR_1, GetBitContext *VAR_2, RV34VLC *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11 = 1;

    VAR_9 = FUNC_3(VAR_2, VAR_3->first_pattern[VAR_4].table, 9, 2);

    VAR_10 = VAR_9 & 0x7;

    VAR_9 >>= 3;

    if (VAR_0[VAR_9] & 0x3F) {
        FUNC_2(VAR_1, VAR_9, VAR_2, &VAR_3->coefficient, VAR_6, VAR_7, VAR_8);
    } else {
        FUNC_1(VAR_1, VAR_9, VAR_2, &VAR_3->coefficient, VAR_6);
        if (!VAR_10)
            return 0;
        VAR_11 = 0;
    }

    if(VAR_10 & 4){
        VAR_9 = FUNC_3(VAR_2, VAR_3->second_pattern[VAR_5].table, 9, 2);
        FUNC_0(VAR_1 + 4*0+2, VAR_9, 0, VAR_2, &VAR_3->coefficient, VAR_8);
    }
    if(VAR_10 & 2){
        VAR_9 = FUNC_3(VAR_2, VAR_3->second_pattern[VAR_5].table, 9, 2);
        FUNC_0(VAR_1 + 4*2+0, VAR_9, 1, VAR_2, &VAR_3->coefficient, VAR_8);
    }
    if(VAR_10 & 1){
        VAR_9 = FUNC_3(VAR_2, VAR_3->third_pattern[VAR_5].table, 9, 2);
        FUNC_0(VAR_1 + 4*2+2, VAR_9, 0, VAR_2, &VAR_3->coefficient, VAR_8);
    }
    return VAR_11 | VAR_10;
}
