
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_6__ {int list_size; } ;
typedef TYPE_1__ hibernate_page_list_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

kern_return_t
FUNC_4(hibernate_page_list_t * VAR_5,
                    hibernate_page_list_t * VAR_6,
      hibernate_page_list_t * VAR_7)
{
    FUNC_0();

    if (VAR_5)
        FUNC_1(VAR_5, VAR_5->list_size);
    if (VAR_6)
        FUNC_1(VAR_6, VAR_6->list_size);
    if (VAR_7)
        FUNC_1(VAR_7, VAR_7->list_size);

    if (VAR_3) {
     if (VAR_4 == VAR_2) {
      VAR_4 = VAR_0;
      FUNC_3();
     }
     FUNC_2();
    }
    return (VAR_1);
}
