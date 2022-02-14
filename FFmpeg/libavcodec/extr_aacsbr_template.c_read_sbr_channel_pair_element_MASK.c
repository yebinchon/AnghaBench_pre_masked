
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int bs_add_harmonic; void* bs_add_harmonic_flag; int * bs_invf_mode; } ;
struct TYPE_15__ {int * n; TYPE_3__* data; void* bs_coupling; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef int GetBitContext ;
typedef int AACContext ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_1__*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,int *,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int *,TYPE_3__*) ;
 int FUNC_8 (int *,TYPE_1__*,int *,TYPE_3__*,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10(AACContext *VAR_0,
                                          SpectralBandReplication *VAR_1,
                                          GetBitContext *VAR_2)
{
    int VAR_3;

    if (FUNC_1(VAR_2))
        FUNC_9(VAR_2, 8);

    if ((VAR_1->bs_coupling = FUNC_1(VAR_2))) {
        if (FUNC_6(VAR_0, VAR_1, VAR_2, &VAR_1->data[0]))
            return -1;
        FUNC_0(&VAR_1->data[1], &VAR_1->data[0]);
        FUNC_4(VAR_1, VAR_2, &VAR_1->data[0]);
        FUNC_4(VAR_1, VAR_2, &VAR_1->data[1]);
        FUNC_7(VAR_1, VAR_2, &VAR_1->data[0]);
        FUNC_3(VAR_1->data[1].bs_invf_mode[1], VAR_1->data[1].bs_invf_mode[0], sizeof(VAR_1->data[1].bs_invf_mode[0]));
        FUNC_3(VAR_1->data[1].bs_invf_mode[0], VAR_1->data[0].bs_invf_mode[0], sizeof(VAR_1->data[1].bs_invf_mode[0]));
        if((VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2, &VAR_1->data[0], 0)) < 0)
            return VAR_3;
        if((VAR_3 = FUNC_8(VAR_0, VAR_1, VAR_2, &VAR_1->data[0], 0)) < 0)
            return VAR_3;
        if((VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2, &VAR_1->data[1], 1)) < 0)
            return VAR_3;
        if((VAR_3 = FUNC_8(VAR_0, VAR_1, VAR_2, &VAR_1->data[1], 1)) < 0)
            return VAR_3;
    } else {
        if (FUNC_6(VAR_0, VAR_1, VAR_2, &VAR_1->data[0]) ||
            FUNC_6(VAR_0, VAR_1, VAR_2, &VAR_1->data[1]))
            return -1;
        FUNC_4(VAR_1, VAR_2, &VAR_1->data[0]);
        FUNC_4(VAR_1, VAR_2, &VAR_1->data[1]);
        FUNC_7(VAR_1, VAR_2, &VAR_1->data[0]);
        FUNC_7(VAR_1, VAR_2, &VAR_1->data[1]);
        if((VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2, &VAR_1->data[0], 0)) < 0)
            return VAR_3;
        if((VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2, &VAR_1->data[1], 1)) < 0)
            return VAR_3;
        if((VAR_3 = FUNC_8(VAR_0, VAR_1, VAR_2, &VAR_1->data[0], 0)) < 0)
            return VAR_3;
        if((VAR_3 = FUNC_8(VAR_0, VAR_1, VAR_2, &VAR_1->data[1], 1)) < 0)
            return VAR_3;
    }

    if ((VAR_1->data[0].bs_add_harmonic_flag = FUNC_1(VAR_2)))
        FUNC_2(VAR_2, VAR_1->data[0].bs_add_harmonic, VAR_1->n[1]);
    if ((VAR_1->data[1].bs_add_harmonic_flag = FUNC_1(VAR_2)))
        FUNC_2(VAR_2, VAR_1->data[1].bs_add_harmonic, VAR_1->n[1]);

    return 0;
}
