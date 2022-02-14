
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int active_screen; scalar_t__ real_time; scalar_t__ cursor_column; } ;
typedef TYPE_1__ CCaptionSubContext ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(CCaptionSubContext *VAR_0, int64_t VAR_1)
{


    if (!VAR_0->real_time)
        FUNC_0(VAR_0,VAR_1);

    VAR_0->active_screen = !VAR_0->active_screen;
    VAR_0->cursor_column = 0;



    if (VAR_0->real_time)
        FUNC_1(VAR_0, VAR_1);
}
