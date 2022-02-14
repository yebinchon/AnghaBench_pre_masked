
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_setup_t ;
typedef int xcb_screen_t ;
struct TYPE_4__ {scalar_t__ rem; int * data; } ;
typedef TYPE_1__ xcb_screen_iterator_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ FUNC_1 (int const*) ;

__attribute__((used)) static xcb_screen_t *FUNC_2(const xcb_setup_t *VAR_0, int VAR_1)
{
    xcb_screen_iterator_t VAR_2 = FUNC_1(VAR_0);
    xcb_screen_t *VAR_3 = ((void*)0);

    for (; VAR_2.rem > 0; FUNC_0 (&VAR_2)) {
        if (!VAR_1) {
            VAR_3 = VAR_2.data;
            break;
        }

        VAR_1--;
    }

    return VAR_3;
}
