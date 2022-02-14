
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; scalar_t__ expires; } ;
struct usb_line6_variax {TYPE_1__ activate_timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct usb_line6_variax *VAR_3,
        int VAR_4)
{
 VAR_3->activate_timer.expires = VAR_1 + VAR_4 * VAR_0;
 VAR_3->activate_timer.function = VAR_2;
 VAR_3->activate_timer.data = (unsigned long)VAR_3;
 FUNC_0(&VAR_3->activate_timer);
}
