
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ on_fail; } ;
typedef TYPE_1__ TeeSlave ;
struct TYPE_8__ {int nb_slaves; int nb_alive; TYPE_1__* slaves; } ;
typedef TYPE_2__ TeeContext ;
struct TYPE_9__ {TYPE_2__* priv_data; } ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, unsigned VAR_3, int VAR_4)
{
    TeeContext *VAR_5 = VAR_2->priv_data;
    TeeSlave *VAR_6 = &VAR_5->slaves[VAR_3];

    VAR_5->nb_alive--;

    FUNC_2(VAR_6);

    if (!VAR_5->nb_alive) {
        FUNC_1(VAR_2, VAR_0, "All tee outputs failed.\n");
        return VAR_4;
    } else if (VAR_6->on_fail == VAR_1) {
        FUNC_1(VAR_2, VAR_0, "Slave muxer #%u failed, aborting.\n", VAR_3);
        return VAR_4;
    } else {
        FUNC_1(VAR_2, VAR_0, "Slave muxer #%u failed: %s, continuing with %u/%u slaves.\n",
               VAR_3, FUNC_0(VAR_4), VAR_5->nb_alive, VAR_5->nb_slaves);
        return 0;
    }
}
