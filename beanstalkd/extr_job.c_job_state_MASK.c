
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_5__ {TYPE_1__ r; } ;
typedef TYPE_2__ Job ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

const char *
FUNC_0(Job *VAR_4)
{
    if (VAR_4->r.state == VAR_2) return "ready";
    if (VAR_4->r.state == VAR_3) return "reserved";
    if (VAR_4->r.state == VAR_0) return "buried";
    if (VAR_4->r.state == VAR_1) return "delayed";
    return "invalid";
}
