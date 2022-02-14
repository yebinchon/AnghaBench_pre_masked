
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int gb; int num_vectors; } ;
struct TYPE_12__ {int total_subbands; int log2_numvector_size; } ;
typedef TYPE_1__ COOKSubpacket ;
typedef TYPE_2__ COOKContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int*,int*,int*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int*,int*,float*) ;
 int FUNC_3 (TYPE_2__*,int*,int*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(COOKContext *VAR_1, COOKSubpacket *VAR_2, float *VAR_3)
{
    int VAR_4[128] = { 0 };
    int VAR_5[128] = { 0 };
    int VAR_6[102];
    int VAR_7, VAR_8;

    if ((VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_6)) < 0)
        return VAR_7;
    VAR_1->num_vectors = FUNC_4(&VAR_1->gb, VAR_2->log2_numvector_size);
    FUNC_0(VAR_1, VAR_2, VAR_6, VAR_5, VAR_4);
    FUNC_3(VAR_1, VAR_5, VAR_4);
    for (VAR_8=0; VAR_8<VAR_2->total_subbands; VAR_8++) {
        if (VAR_5[VAR_8] > 7)
            return VAR_0;
    }
    FUNC_2(VAR_1, VAR_2, VAR_5, VAR_6, VAR_3);

    return 0;
}
