
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; } ;
struct TYPE_5__ {int y; int x; } ;
struct TYPE_7__ {TYPE_2__ up; TYPE_1__ to; } ;
typedef TYPE_3__ Block ;



__attribute__((used)) static int FUNC_0(const Block *VAR_0)
{
    return (VAR_0->to.y - VAR_0->up.y + 1) * (VAR_0->to.x - VAR_0->up.x + 1);
}
