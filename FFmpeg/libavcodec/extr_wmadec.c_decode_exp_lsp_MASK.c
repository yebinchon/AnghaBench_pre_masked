
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int block_len; int * max_exponent; int * exponents; int gb; } ;
typedef TYPE_1__ WMACodecContext ;


 int VAR_0 ;
 float** VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int ,float*) ;

__attribute__((used)) static void FUNC_2(WMACodecContext *VAR_2, int VAR_3)
{
    float VAR_4[VAR_0];
    int VAR_5, VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (VAR_6 == 0 || VAR_6 >= 8)
            VAR_5 = FUNC_0(&VAR_2->gb, 3);
        else
            VAR_5 = FUNC_0(&VAR_2->gb, 4);
        VAR_4[VAR_6] = VAR_1[VAR_6][VAR_5];
    }

    FUNC_1(VAR_2, VAR_2->exponents[VAR_3], &VAR_2->max_exponent[VAR_3],
                     VAR_2->block_len, VAR_4);
}
