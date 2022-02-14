
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ custom_cursor; scalar_t__ conf; } ;
struct TYPE_5__ {TYPE_1__ mir; } ;
typedef TYPE_2__ _GLFWcursor ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(_GLFWcursor* VAR_0)
{
    if (VAR_0->mir.conf)
        FUNC_1(VAR_0->mir.conf);
    if (VAR_0->mir.custom_cursor)
        FUNC_0(VAR_0->mir.custom_cursor);
}
