
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_3__ {int * channels; int sync_idx; int hd; } ;
typedef TYPE_1__ AptXContext ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(AptXContext *VAR_1,
                                const uint8_t *VAR_2,
                                int32_t VAR_3[VAR_0][4])
{
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        FUNC_4(&VAR_1->channels[VAR_4]);

        if (VAR_1->hd)
            FUNC_7(&VAR_1->channels[VAR_4],
                                   FUNC_1(VAR_2 + 3*VAR_4));
        else
            FUNC_6(&VAR_1->channels[VAR_4],
                                 FUNC_0(VAR_2 + 2*VAR_4));
        FUNC_5(&VAR_1->channels[VAR_4], VAR_1->hd);
    }

    VAR_5 = FUNC_2(VAR_1->channels, &VAR_1->sync_idx);

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        FUNC_3(&VAR_1->channels[VAR_4], VAR_3[VAR_4]);

    return VAR_5;
}
