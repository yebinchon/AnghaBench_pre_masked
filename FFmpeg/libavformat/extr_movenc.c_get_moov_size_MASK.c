
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * priv_data; } ;
typedef int MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0)
{
    int VAR_1;
    AVIOContext *VAR_2;
    MOVMuxContext *VAR_3 = VAR_0->priv_data;

    if ((VAR_1 = FUNC_1(&VAR_2)) < 0)
        return VAR_1;
    if ((VAR_1 = FUNC_2(VAR_2, VAR_3, VAR_0)) < 0)
        return VAR_1;
    return FUNC_0(VAR_2);
}
