
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int stream_index; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(AVPacket *VAR_0, AVIOContext **VAR_1, int VAR_2)
{
    int VAR_3;
    FUNC_1(VAR_0);

    VAR_0->size = FUNC_3(*VAR_1, &VAR_0->data);
    VAR_0->stream_index = VAR_2;
    *VAR_1 = ((void*)0);
    if ((VAR_3 = FUNC_2(VAR_0, VAR_0->data, VAR_0->size)) < 0) {
        FUNC_0(&VAR_0->data);
        return VAR_3;
    }
    return VAR_0->size;
}
