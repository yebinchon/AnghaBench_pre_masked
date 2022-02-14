
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ slopetype; void* dy; void* dx; } ;
typedef TYPE_1__ line_t ;
typedef void* fixed_t ;
typedef size_t angle_t ;
struct TYPE_6__ {int y; int x; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (void*,int ) ;
 void* FUNC_1 (void*,void*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 size_t FUNC_3 (int ,int ,void*,void*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 TYPE_2__* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

void FUNC_4 (line_t* VAR_9)
{
    int VAR_10;

    angle_t VAR_11;
    angle_t VAR_12;
    angle_t VAR_13;

    fixed_t VAR_14;
    fixed_t VAR_15;


    if (VAR_9->slopetype == VAR_2)
    {
 VAR_8 = 0;
 return;
    }

    if (VAR_9->slopetype == VAR_3)
    {
 VAR_7 = 0;
 return;
    }

    VAR_10 = FUNC_2 (VAR_6->x, VAR_6->y, VAR_9);

    VAR_11 = FUNC_3 (0,0, VAR_9->dx, VAR_9->dy);

    if (VAR_10 == 1)
 VAR_11 += VAR_0;

    VAR_12 = FUNC_3 (0,0, VAR_7, VAR_8);
    VAR_13 = VAR_12-VAR_11;

    if (VAR_13 > VAR_0)
 VAR_13 += VAR_0;


    VAR_11 >>= VAR_1;
    VAR_13 >>= VAR_1;

    VAR_14 = FUNC_1 (VAR_7, VAR_8);
    VAR_15 = FUNC_0 (VAR_14, VAR_4[VAR_13]);

    VAR_7 = FUNC_0 (VAR_15, VAR_4[VAR_11]);
    VAR_8 = FUNC_0 (VAR_15, VAR_5[VAR_11]);
}
