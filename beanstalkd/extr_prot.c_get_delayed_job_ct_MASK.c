
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_5__ {TYPE_1__ delay; } ;
typedef TYPE_2__ Tube ;
struct TYPE_6__ {size_t len; TYPE_2__** items; } ;


 TYPE_3__ VAR_0 ;

__attribute__((used)) static uint
FUNC_0()
{
    size_t VAR_1;
    uint VAR_2 = 0;

    for (VAR_1 = 0; VAR_1 < VAR_0.len; VAR_1++) {
        Tube *VAR_3 = VAR_0.items[VAR_1];
        VAR_2 += VAR_3->delay.len;
    }
    return VAR_2;
}
