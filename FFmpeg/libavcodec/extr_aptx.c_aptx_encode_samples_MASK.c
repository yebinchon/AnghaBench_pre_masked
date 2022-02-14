
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_3__ {int * channels; int hd; int sync_idx; } ;
typedef TYPE_1__ AptXContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(AptXContext *VAR_1,
                                int32_t VAR_2[VAR_0][4],
                                uint8_t *VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        FUNC_2(&VAR_1->channels[VAR_4], VAR_2[VAR_4], VAR_1->hd);

    FUNC_3(VAR_1->channels, &VAR_1->sync_idx);

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        FUNC_4(&VAR_1->channels[VAR_4], VAR_1->hd);
        if (VAR_1->hd)
            FUNC_1(VAR_3 + 3*VAR_4,
                    FUNC_6(&VAR_1->channels[VAR_4]));
        else
            FUNC_0(VAR_3 + 2*VAR_4,
                    FUNC_5(&VAR_1->channels[VAR_4]));
    }
}
