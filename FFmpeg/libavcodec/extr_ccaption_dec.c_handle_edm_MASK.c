
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Screen {scalar_t__ row_used; } ;
typedef int int64_t ;
struct TYPE_4__ {int active_screen; scalar_t__ real_time; struct Screen* screen; } ;
typedef TYPE_1__ CCaptionSubContext ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(CCaptionSubContext *VAR_0, int64_t VAR_1)
{
    struct Screen *VAR_2 = VAR_0->screen + VAR_0->active_screen;



    if (!VAR_0->real_time)
        FUNC_0(VAR_0, VAR_1);

    VAR_2->row_used = 0;



    if (VAR_0->real_time)
        FUNC_0(VAR_0, VAR_1);
}
