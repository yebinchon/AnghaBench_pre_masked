
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pkt ;
struct TYPE_3__ {int input_ref; int packet_fifo; } ;
typedef TYPE_1__ QSVOtherContext ;
typedef int AVPacket ;


 int FUNC_0 (int ,int *,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(QSVOtherContext *VAR_0)
{
    AVPacket VAR_1;
    while (FUNC_1(VAR_0->packet_fifo) >= sizeof(VAR_1)) {
        FUNC_0(VAR_0->packet_fifo, &VAR_1, sizeof(VAR_1), ((void*)0));
        FUNC_2(&VAR_1);
    }

    FUNC_2(&VAR_0->input_ref);
}
