
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int images; } ;
typedef TYPE_1__ IcoMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0)
{
    IcoMuxContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->images);
}
