
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nb_index; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_1)
{
    WtvContext *VAR_2 = VAR_1->priv_data;
    FUNC_0(VAR_1);
    if (VAR_2->nb_index == VAR_0)
        FUNC_1(VAR_1);
}
