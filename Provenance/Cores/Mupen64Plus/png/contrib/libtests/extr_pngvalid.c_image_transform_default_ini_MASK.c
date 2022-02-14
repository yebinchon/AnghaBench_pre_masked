
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int transform_display ;
struct TYPE_4__ {TYPE_2__* next; } ;
typedef TYPE_1__ image_transform ;
struct TYPE_5__ {int (* ini ) (TYPE_2__*,int *) ;} ;


 int FUNC_0 (TYPE_2__*,int *) ;

void
FUNC_1(const image_transform *VAR_0,
    transform_display *VAR_1)
{
   VAR_0->next->ini(VAR_0->next, VAR_1);
}
