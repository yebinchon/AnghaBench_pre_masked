
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ __buf; scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__ buf; int ack; int retransmit; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;

void FUNC_2(void)
{
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++) {
        FUNC_1(&VAR_5[VAR_6].retransmit, VAR_2);
    }

    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
        FUNC_1(&VAR_3[VAR_6].ack, VAR_1);
        VAR_3[VAR_6].buf.__buf = (VAR_4 +
                               (VAR_6 * VAR_0));
        VAR_3[VAR_6].buf.data = VAR_3[VAR_6].buf.__buf;
    }
}
