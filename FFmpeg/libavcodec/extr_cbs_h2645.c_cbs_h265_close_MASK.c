
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {int write_buffer; int read_packet; } ;
struct TYPE_6__ {int * pps_ref; int pps; int * sps_ref; int sps; int * vps_ref; int vps; TYPE_1__ common; } ;
typedef TYPE_2__ CodedBitstreamH265Context ;
typedef TYPE_3__ CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(CodedBitstreamContext *VAR_0)
{
    CodedBitstreamH265Context *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    FUNC_3(&VAR_1->common.read_packet);

    FUNC_2(&VAR_1->common.write_buffer);

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->vps); VAR_2++)
        FUNC_1(&VAR_1->vps_ref[VAR_2]);
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->sps); VAR_2++)
        FUNC_1(&VAR_1->sps_ref[VAR_2]);
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->pps); VAR_2++)
        FUNC_1(&VAR_1->pps_ref[VAR_2]);
}
