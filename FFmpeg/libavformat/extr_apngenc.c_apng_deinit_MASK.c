
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ extra_data_size; int extra_data; int prev_packet; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ APNGMuxContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0)
{
    APNGMuxContext *VAR_1 = VAR_0->priv_data;

    FUNC_1(&VAR_1->prev_packet);
    FUNC_0(&VAR_1->extra_data);
    VAR_1->extra_data_size = 0;
}
