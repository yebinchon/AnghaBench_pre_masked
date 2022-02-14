
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int bs_add_harmonic; scalar_t__ bs_add_harmonic_flag; } ;
struct TYPE_13__ {int * n; TYPE_4__* data; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef int GetBitContext ;
typedef int AACContext ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int *,TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_1__*,int *,TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,int *,TYPE_4__*) ;
 int FUNC_5 (TYPE_1__*,int *,TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_1__*,int *,TYPE_4__*,int ) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(AACContext *VAR_0,
                                            SpectralBandReplication *VAR_1,
                                            GetBitContext *VAR_2)
{
    int VAR_3;

    if (FUNC_0(VAR_2))
        FUNC_7(VAR_2, 4);

    if (FUNC_4(VAR_0, VAR_1, VAR_2, &VAR_1->data[0]))
        return -1;
    FUNC_2(VAR_1, VAR_2, &VAR_1->data[0]);
    FUNC_5(VAR_1, VAR_2, &VAR_1->data[0]);
    if((VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2, &VAR_1->data[0], 0)) < 0)
        return VAR_3;
    if((VAR_3 = FUNC_6(VAR_0, VAR_1, VAR_2, &VAR_1->data[0], 0)) < 0)
        return VAR_3;

    if ((VAR_1->data[0].bs_add_harmonic_flag = FUNC_0(VAR_2)))
        FUNC_1(VAR_2, VAR_1->data[0].bs_add_harmonic, VAR_1->n[1]);

    return 0;
}
