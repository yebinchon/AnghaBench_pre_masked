
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int moov_written; int flags; } ;
typedef TYPE_1__ MOVMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_1, int VAR_2)
{
    MOVMuxContext *VAR_3 = VAR_1->priv_data;
    int VAR_4 = VAR_3->moov_written;
    int VAR_5 = FUNC_0(VAR_1, VAR_2);
    if (VAR_5 < 0)
        return VAR_5;


    if (!VAR_4 && VAR_3->flags & VAR_0)
        VAR_5 = FUNC_0(VAR_1, VAR_2);
    return VAR_5;
}
