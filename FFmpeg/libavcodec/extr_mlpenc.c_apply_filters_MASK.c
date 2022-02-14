
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* cur_restart_header; } ;
struct TYPE_6__ {int min_channel; int max_channel; } ;
typedef TYPE_1__ RestartHeader ;
typedef TYPE_2__ MLPEncodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_2)
{
    RestartHeader *VAR_3 = VAR_2->cur_restart_header;
    int VAR_4;

    for (VAR_4 = VAR_3->min_channel; VAR_4 <= VAR_3->max_channel; VAR_4++) {
        if (FUNC_0(VAR_2, VAR_4) < 0) {


            FUNC_1(VAR_2, VAR_4, VAR_0, 1);
            FUNC_1(VAR_2, VAR_4, VAR_1, 1);
            FUNC_0(VAR_2, VAR_4);
        }
    }
}
