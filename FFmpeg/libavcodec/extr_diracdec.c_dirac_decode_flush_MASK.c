
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int frame_number; scalar_t__ seen_sequence_header; } ;
typedef TYPE_1__ DiracContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0)
{
    DiracContext *VAR_1 = VAR_0->priv_data;
    FUNC_0(VAR_1);
    VAR_1->seen_sequence_header = 0;
    VAR_1->frame_number = -1;
}
