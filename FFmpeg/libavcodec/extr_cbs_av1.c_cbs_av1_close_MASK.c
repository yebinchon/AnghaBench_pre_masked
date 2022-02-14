
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int write_buffer; int frame_header_ref; int sequence_header_ref; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ CodedBitstreamContext ;
typedef TYPE_2__ CodedBitstreamAV1Context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CodedBitstreamContext *VAR_0)
{
    CodedBitstreamAV1Context *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->sequence_header_ref);
    FUNC_0(&VAR_1->frame_header_ref);

    FUNC_1(&VAR_1->write_buffer);
}
