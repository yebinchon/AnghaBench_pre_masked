
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* cur_restart_header; } ;
struct TYPE_5__ {int min_channel; int max_channel; } ;
typedef TYPE_1__ RestartHeader ;
typedef TYPE_2__ MLPEncodeContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(MLPEncodeContext *VAR_1)
{
    RestartHeader *VAR_2 = VAR_1->cur_restart_header;
    int VAR_3, VAR_4;

    for (VAR_3 = VAR_2->min_channel; VAR_3 <= VAR_2->max_channel; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
            FUNC_0(VAR_1, VAR_3, VAR_4, 0);
    }
}
