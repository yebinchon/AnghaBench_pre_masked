
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int pkt; } ;
typedef TYPE_1__ AVPacketList ;
typedef int AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(AVPacketList **VAR_2,
                       AVPacketList **VAR_3,
                       AVPacket *VAR_4, int VAR_5)
{
    AVPacketList *VAR_6 = FUNC_2(sizeof(AVPacketList));
    int VAR_7;

    if (!VAR_6)
        return FUNC_0(VAR_0);

    if (VAR_5 & VAR_1) {
        if ((VAR_7 = FUNC_5(&VAR_6->pkt, VAR_4)) < 0) {
            FUNC_1(VAR_6);
            return VAR_7;
        }
    } else {
        VAR_7 = FUNC_3(VAR_4);
        if (VAR_7 < 0) {
            FUNC_1(VAR_6);
            return VAR_7;
        }
        FUNC_4(&VAR_6->pkt, VAR_4);
    }

    if (*VAR_2)
        (*VAR_3)->next = VAR_6;
    else
        *VAR_2 = VAR_6;


    *VAR_3 = VAR_6;
    return 0;
}
