
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int write_trailer_ret; int writer_thread; int queue; } ;
typedef TYPE_1__ FifoContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_2)
{
    FifoContext *VAR_3= VAR_2->priv_data;
    int VAR_4;

    FUNC_3(VAR_3->queue, VAR_0);

    VAR_4 = FUNC_4(VAR_3->writer_thread, ((void*)0));
    if (VAR_4 < 0) {
        FUNC_2(VAR_2, VAR_1, "pthread join error: %s\n",
               FUNC_1(FUNC_0(VAR_4)));
        return FUNC_0(VAR_4);
    }

    VAR_4 = VAR_3->write_trailer_ret;
    return VAR_4;
}
