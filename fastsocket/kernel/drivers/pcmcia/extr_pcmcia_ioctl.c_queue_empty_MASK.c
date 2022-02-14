
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ event_head; scalar_t__ event_tail; } ;
typedef TYPE_1__ user_info_t ;



__attribute__((used)) static int FUNC_0(user_info_t *VAR_0)
{
    return (VAR_0->event_head == VAR_0->event_tail);
}
