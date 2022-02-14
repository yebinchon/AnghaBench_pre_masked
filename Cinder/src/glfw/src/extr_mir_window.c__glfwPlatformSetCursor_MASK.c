
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int surface; } ;
struct TYPE_12__ {TYPE_2__ mir; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_9__ {scalar_t__ custom_cursor; scalar_t__ conf; } ;
struct TYPE_13__ {TYPE_1__ mir; } ;
typedef TYPE_5__ _GLFWcursor ;
struct TYPE_11__ {scalar_t__ default_conf; } ;
struct TYPE_14__ {TYPE_3__ mir; } ;


 TYPE_8__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(_GLFWwindow* VAR_1, _GLFWcursor* VAR_2)
{
    if (VAR_2 && VAR_2->mir.conf)
    {
        FUNC_2(FUNC_1(VAR_1->mir.surface, VAR_2->mir.conf));
        if (VAR_2->mir.custom_cursor)
        {
            FUNC_0(VAR_2->mir.custom_cursor);
        }
    }
    else
    {
        FUNC_2(FUNC_1(VAR_1->mir.surface, VAR_0.mir.default_conf));
    }
}
