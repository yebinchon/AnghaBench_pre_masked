
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int active_seq_parameter_set_id; } ;
typedef TYPE_1__ HEVCSEI ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (void*,int ,char*,unsigned int) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(HEVCSEI *VAR_3, GetBitContext *VAR_4, void *VAR_5)
{
    int VAR_6;
    int VAR_7;
    unsigned VAR_8;

    FUNC_1(VAR_4, 4);
    FUNC_1(VAR_4, 1);
    FUNC_1(VAR_4, 1);
    VAR_6 = FUNC_2(VAR_4);

    if (VAR_6 < 0 || VAR_6 > 15) {
        FUNC_0(VAR_5, VAR_1, "num_sps_ids_minus1 %d invalid\n", VAR_6);
        return VAR_0;
    }

    VAR_8 = FUNC_2(VAR_4);
    if (VAR_8 >= VAR_2) {
        FUNC_0(VAR_5, VAR_1, "active_parameter_set_id %d invalid\n", VAR_8);
        return VAR_0;
    }
    VAR_3->active_seq_parameter_set_id = VAR_8;

    for (VAR_7 = 1; VAR_7 <= VAR_6; VAR_7++)
        FUNC_2(VAR_4);

    return 0;
}
