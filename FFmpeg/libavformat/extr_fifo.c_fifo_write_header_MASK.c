
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int writer_thread; } ;
typedef TYPE_1__ FifoContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2)
{
    FifoContext * VAR_3 = VAR_2->priv_data;
    int VAR_4;

    VAR_4 = FUNC_3(&VAR_3->writer_thread, ((void*)0), VAR_1, VAR_2);
    if (VAR_4) {
        FUNC_2(VAR_2, VAR_0, "Failed to start thread: %s\n",
               FUNC_1(FUNC_0(VAR_4)));
        VAR_4 = FUNC_0(VAR_4);
    }

    return VAR_4;
}
